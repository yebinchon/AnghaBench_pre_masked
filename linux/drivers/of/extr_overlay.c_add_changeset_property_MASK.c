
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct target {TYPE_1__* np; scalar_t__ in_livetree; } ;
struct property {struct property* value; struct property* name; struct property* next; } ;
struct overlay_changeset {int cset; } ;
struct TYPE_6__ {struct property* deadprops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct property* FUNC_0 (struct property*,int ) ;
 struct property* FUNC_1 (struct overlay_changeset*,struct property*) ;
 int FUNC_2 (struct property*) ;
 int FUNC_3 (int *,TYPE_1__*,struct property*) ;
 int FUNC_4 (int *,TYPE_1__*,struct property*) ;
 struct property* FUNC_5 (TYPE_1__*,struct property*,int *) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (struct property*,char*) ;
 int FUNC_8 (struct property*,struct property*) ;
 int FUNC_9 (char*,TYPE_1__*,...) ;

__attribute__((used)) static int FUNC_10(struct overlay_changeset *VAR_4,
  struct target *VAR_5, struct property *VAR_6,
  bool VAR_7)
{
 struct property *VAR_8 = ((void*)0), *VAR_9;
 int VAR_10 = 0;
 bool VAR_11 = 0;

 if (VAR_5->in_livetree)
  if (!FUNC_7(VAR_6->name, "name") ||
      !FUNC_7(VAR_6->name, "phandle") ||
      !FUNC_7(VAR_6->name, "linux,phandle"))
   return 0;

 if (VAR_5->in_livetree)
  VAR_9 = FUNC_5(VAR_5->np, VAR_6->name, ((void*)0));
 else
  VAR_9 = ((void*)0);

 if (VAR_7) {
  if (VAR_9)
   return -VAR_0;
  VAR_8 = FUNC_1(VAR_4, VAR_6);
 } else {
  VAR_8 = FUNC_0(VAR_6, VAR_2);
 }

 if (!VAR_8)
  return -VAR_1;

 if (!VAR_9) {
  VAR_11 = 1;
  if (!VAR_5->in_livetree) {
   VAR_8->next = VAR_5->np->deadprops;
   VAR_5->np->deadprops = VAR_8;
  }
  VAR_10 = FUNC_3(&VAR_4->cset, VAR_5->np,
      VAR_8);
 } else if (!FUNC_7(VAR_9->name, "#address-cells")) {
  if (!FUNC_8(VAR_9, VAR_8)) {
   FUNC_9("ERROR: changing value of #address-cells is not allowed in %pOF\n",
          VAR_5->np);
   VAR_10 = -VAR_0;
  }
 } else if (!FUNC_7(VAR_9->name, "#size-cells")) {
  if (!FUNC_8(VAR_9, VAR_8)) {
   FUNC_9("ERROR: changing value of #size-cells is not allowed in %pOF\n",
          VAR_5->np);
   VAR_10 = -VAR_0;
  }
 } else {
  VAR_11 = 1;
  VAR_10 = FUNC_4(&VAR_4->cset, VAR_5->np,
         VAR_8);
 }

 if (VAR_11 &&
     !FUNC_6(VAR_5->np, VAR_3))
  FUNC_9("WARNING: memory leak will occur if overlay removed, property: %pOF/%s\n",
         VAR_5->np, VAR_8->name);

 if (VAR_10) {
  FUNC_2(VAR_8->name);
  FUNC_2(VAR_8->value);
  FUNC_2(VAR_8);
 }
 return VAR_10;
}
