
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target {int in_livetree; int np; } ;
struct overlay_changeset {int count; struct fragment* fragments; scalar_t__ symbols_fragment; } ;
struct fragment {int target; int overlay; } ;


 int FUNC_0 (struct overlay_changeset*,struct target*,int ) ;
 int FUNC_1 (struct overlay_changeset*,struct target*,int ) ;
 int FUNC_2 (struct overlay_changeset*) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static int FUNC_4(struct overlay_changeset *VAR_0)
{
 struct fragment *VAR_1;
 struct target VAR_2;
 int VAR_3, VAR_4, VAR_5;





 if (VAR_0->symbols_fragment)
  VAR_3 = VAR_0->count - 1;
 else
  VAR_3 = VAR_0->count;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_1 = &VAR_0->fragments[VAR_4];

  VAR_2.np = VAR_1->target;
  VAR_2.in_livetree = 1;
  VAR_5 = FUNC_0(VAR_0, &VAR_2,
       VAR_1->overlay);
  if (VAR_5) {
   FUNC_3("fragment apply failed '%pOF'\n",
     VAR_1->target);
   return VAR_5;
  }
 }

 if (VAR_0->symbols_fragment) {
  VAR_1 = &VAR_0->fragments[VAR_0->count - 1];

  VAR_2.np = VAR_1->target;
  VAR_2.in_livetree = 1;
  VAR_5 = FUNC_1(VAR_0, &VAR_2,
         VAR_1->overlay);
  if (VAR_5) {
   FUNC_3("symbols fragment apply failed '%pOF'\n",
     VAR_1->target);
   return VAR_5;
  }
 }

 return FUNC_2(VAR_0);
}
