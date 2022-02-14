
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_reconfig_data {int dn; } ;
struct of_changeset_entry {int action; int np; int old_prop; int prop; } ;
typedef int rd ;


 int VAR_0 ;





 int FUNC_0 (struct of_changeset_entry*,struct of_changeset_entry*) ;
 int FUNC_1 (struct of_reconfig_data*,int ,int) ;
 int FUNC_2 (int,int,int ,int ) ;
 int FUNC_3 (int,struct of_reconfig_data*) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static int FUNC_5(struct of_changeset_entry *VAR_1,
  bool VAR_2)
{
 struct of_reconfig_data VAR_3;
 struct of_changeset_entry VAR_4;
 int VAR_5 = 0;

 if (VAR_2) {
  FUNC_0(VAR_1, &VAR_4);
  VAR_1 = &VAR_4;
 }

 switch (VAR_1->action) {
 case 131:
 case 130:
  FUNC_1(&VAR_3, 0, sizeof(VAR_3));
  VAR_3.dn = VAR_1->np;
  VAR_5 = FUNC_3(VAR_1->action, &VAR_3);
  break;
 case 132:
 case 129:
 case 128:
  VAR_5 = FUNC_2(VAR_1->action, VAR_1->np, VAR_1->prop, VAR_1->old_prop);
  break;
 default:
  FUNC_4("invalid devicetree changeset action: %i\n",
   (int)VAR_1->action);
  VAR_5 = -VAR_0;
 }

 if (VAR_5)
  FUNC_4("changeset notifier error @%pOF\n", VAR_1->np);
 return VAR_5;
}
