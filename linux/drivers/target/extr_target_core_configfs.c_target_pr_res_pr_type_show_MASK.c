
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t10_pr_registration {int pr_res_type; } ;
struct se_device {int dev_reservation_lock; struct t10_pr_registration* dev_pr_res_holder; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 char* FUNC_0 (int ) ;
 struct se_device* FUNC_1 (struct config_item*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_5(struct config_item *VAR_0, char *VAR_1)
{
 struct se_device *VAR_2 = FUNC_1(VAR_0);
 struct t10_pr_registration *VAR_3;
 ssize_t VAR_4 = 0;

 FUNC_2(&VAR_2->dev_reservation_lock);
 VAR_3 = VAR_2->dev_pr_res_holder;
 if (VAR_3) {
  VAR_4 = FUNC_4(VAR_1, "SPC-3 Reservation Type: %s\n",
   FUNC_0(VAR_3->pr_res_type));
 } else {
  VAR_4 = FUNC_4(VAR_1, "No SPC-3 Reservation holder\n");
 }

 FUNC_3(&VAR_2->dev_reservation_lock);
 return VAR_4;
}
