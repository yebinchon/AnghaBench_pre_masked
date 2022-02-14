
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rave_sp {int event_notifier_list; } ;
struct notifier_block {int dummy; } ;
struct device {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct notifier_block*) ;
 struct rave_sp* FUNC_1 (int ) ;
 int FUNC_2 (struct device*,struct notifier_block**) ;
 struct notifier_block** FUNC_3 (int ,int,int ) ;
 int FUNC_4 (struct notifier_block**) ;
 int VAR_2 ;

int FUNC_5(struct device *VAR_3,
      struct notifier_block *VAR_4)
{
 struct rave_sp *VAR_5 = FUNC_1(VAR_3->parent);
 struct notifier_block **VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(VAR_2,
       sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_0(&VAR_5->event_notifier_list, VAR_4);
 if (!VAR_7) {
  *VAR_6 = VAR_4;
  FUNC_2(VAR_3, VAR_6);
 } else {
  FUNC_4(VAR_6);
 }

 return VAR_7;
}
