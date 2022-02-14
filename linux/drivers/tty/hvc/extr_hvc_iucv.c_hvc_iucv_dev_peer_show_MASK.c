
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vmid ;
struct hvc_iucv_private {scalar_t__ iucv_state; int lock; scalar_t__ info_path; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int ipuser ;


 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_0 ;
 struct hvc_iucv_private* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,scalar_t__,int) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1,
          struct device_attribute *VAR_2,
          char *VAR_3)
{
 struct hvc_iucv_private *VAR_4 = FUNC_1(VAR_1);
 char VAR_5[9], VAR_6[9];

 FUNC_3(VAR_5, 0, sizeof(VAR_5));
 FUNC_3(VAR_6, 0, sizeof(VAR_6));

 FUNC_4(&VAR_4->lock);
 if (VAR_4->iucv_state == VAR_0) {
  FUNC_2(VAR_5, VAR_4->info_path, 8);
  FUNC_2(VAR_6, VAR_4->info_path + 8, 8);
 }
 FUNC_5(&VAR_4->lock);
 FUNC_0(VAR_6, 8);

 return FUNC_6(VAR_3, "%s:%s\n", VAR_5, VAR_6);
}
