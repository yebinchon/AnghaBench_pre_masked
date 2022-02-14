
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_changeset_entry {int action; int prop; int old_prop; } ;







 int FUNC_0 (struct of_changeset_entry*,struct of_changeset_entry*,int) ;

__attribute__((used)) static void FUNC_1(struct of_changeset_entry *VAR_0,
       struct of_changeset_entry *VAR_1)
{
 FUNC_0(VAR_1, VAR_0, sizeof(*VAR_1));

 switch (VAR_0->action) {
 case 131:
  VAR_1->action = 130;
  break;
 case 130:
  VAR_1->action = 131;
  break;
 case 132:
  VAR_1->action = 129;
  break;
 case 129:
  VAR_1->action = 132;
  break;
 case 128:
  VAR_1->old_prop = VAR_0->prop;
  VAR_1->prop = VAR_0->old_prop;

  if (!VAR_1->prop) {
   VAR_1->action = 129;
   VAR_1->prop = VAR_0->prop;
  }
  break;
 }
}
