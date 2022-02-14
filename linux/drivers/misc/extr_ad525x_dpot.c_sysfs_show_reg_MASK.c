
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dpot_data {int rdac_mask; int update_lock; int otp_en_mask; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dpot_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct dpot_data*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,...) ;
 scalar_t__ FUNC_5 (int,int ) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_4,
         struct device_attribute *VAR_5,
         char *VAR_6, u32 VAR_7)
{
 struct dpot_data *VAR_8 = FUNC_0(VAR_4);
 s32 VAR_9;

 if (VAR_7 & VAR_0)
  return FUNC_4(VAR_6, "%s\n",
   FUNC_5(VAR_1 & VAR_7, VAR_8->otp_en_mask) ?
   "enabled" : "disabled");


 FUNC_2(&VAR_8->update_lock);
 VAR_9 = FUNC_1(VAR_8, VAR_7);
 FUNC_3(&VAR_8->update_lock);

 if (VAR_9 < 0)
  return -VAR_3;
 if (VAR_7 & VAR_2)
  return FUNC_4(VAR_6, "0x%04x\n", VAR_9 & 0xFFFF);
 else
  return FUNC_4(VAR_6, "%u\n", VAR_9 & VAR_8->rdac_mask);
}
