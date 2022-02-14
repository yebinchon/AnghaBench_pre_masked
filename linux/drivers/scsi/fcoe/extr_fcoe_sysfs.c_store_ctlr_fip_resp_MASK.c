
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fcoe_ctlr_device {int dummy; } ;
struct fcoe_ctlr {int fip_resp; int ctlr_mutex; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 struct fcoe_ctlr_device* FUNC_0 (struct device*) ;
 struct fcoe_ctlr* FUNC_1 (struct fcoe_ctlr_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
         struct device_attribute *VAR_2,
         const char *VAR_3, size_t VAR_4)
{
 struct fcoe_ctlr_device *VAR_5 = FUNC_0(VAR_1);
 struct fcoe_ctlr *VAR_6 = FUNC_1(VAR_5);

 FUNC_2(&VAR_6->ctlr_mutex);
 if ((VAR_3[1] == '\0') || ((VAR_3[1] == '\n') && (VAR_3[2] == '\0'))) {
  if (VAR_3[0] == '1') {
   VAR_6->fip_resp = 1;
   FUNC_3(&VAR_6->ctlr_mutex);
   return VAR_4;
  }
  if (VAR_3[0] == '0') {
   VAR_6->fip_resp = 0;
   FUNC_3(&VAR_6->ctlr_mutex);
   return VAR_4;
  }
 }
 FUNC_3(&VAR_6->ctlr_mutex);
 return -VAR_0;
}
