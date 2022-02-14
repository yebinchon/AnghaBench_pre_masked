
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct property {int name; struct property* next; } ;
struct of_changeset_entry {int action; int old_prop; struct property* prop; TYPE_1__* np; } ;
struct TYPE_12__ {struct property* deadprops; } ;


 int VAR_0 ;





 int FUNC_0 (TYPE_1__*,struct property*) ;
 int FUNC_1 (TYPE_1__*,struct property*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct of_changeset_entry*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,struct property*) ;
 int FUNC_8 (TYPE_1__*,struct property*) ;
 int FUNC_9 (TYPE_1__*,struct property*,struct property**) ;
 int FUNC_10 (TYPE_1__*,struct property*,int ) ;
 int VAR_1 ;
 int FUNC_11 (char*,TYPE_1__*,int ) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_14(struct of_changeset_entry *VAR_2)
{
 struct property *VAR_3, **VAR_4;
 unsigned long VAR_5;
 int VAR_6 = 0;

 FUNC_4(VAR_2);

 FUNC_12(&VAR_1, VAR_5);
 switch (VAR_2->action) {
 case 131:
  FUNC_2(VAR_2->np);
  break;
 case 130:
  FUNC_5(VAR_2->np);
  break;
 case 132:

  for (VAR_4 = &VAR_2->np->deadprops; *VAR_4; VAR_4 = &(*VAR_4)->next) {
   if (*VAR_4 == VAR_2->prop) {
    *VAR_4 = VAR_2->prop->next;
    VAR_2->prop->next = ((void*)0);
    break;
   }
  }

  VAR_6 = FUNC_0(VAR_2->np, VAR_2->prop);
  if (VAR_6) {
   FUNC_11("changeset: add_property failed @%pOF/%s\n",
    VAR_2->np,
    VAR_2->prop->name);
   break;
  }
  break;
 case 129:
  VAR_6 = FUNC_7(VAR_2->np, VAR_2->prop);
  if (VAR_6) {
   FUNC_11("changeset: remove_property failed @%pOF/%s\n",
    VAR_2->np,
    VAR_2->prop->name);
   break;
  }
  break;

 case 128:

  for (VAR_4 = &VAR_2->np->deadprops; *VAR_4; VAR_4 = &(*VAR_4)->next) {
   if (*VAR_4 == VAR_2->prop) {
    *VAR_4 = VAR_2->prop->next;
    VAR_2->prop->next = ((void*)0);
    break;
   }
  }

  VAR_6 = FUNC_9(VAR_2->np, VAR_2->prop, &VAR_3);
  if (VAR_6) {
   FUNC_11("changeset: update_property failed @%pOF/%s\n",
    VAR_2->np,
    VAR_2->prop->name);
   break;
  }
  break;
 default:
  VAR_6 = -VAR_0;
 }
 FUNC_13(&VAR_1, VAR_5);

 if (VAR_6)
  return VAR_6;

 switch (VAR_2->action) {
 case 131:
  FUNC_3(VAR_2->np);
  break;
 case 130:
  FUNC_6(VAR_2->np);
  break;
 case 132:

  FUNC_1(VAR_2->np, VAR_2->prop);
  break;
 case 129:
  FUNC_8(VAR_2->np, VAR_2->prop);
  break;
 case 128:
  FUNC_10(VAR_2->np, VAR_2->prop, VAR_2->old_prop);
  break;
 }

 return 0;
}
