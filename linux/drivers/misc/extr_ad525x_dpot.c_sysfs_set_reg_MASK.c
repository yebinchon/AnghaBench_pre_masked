
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dpot_data {unsigned long rdac_mask; int update_lock; int otp_en_mask; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int,int ) ;
 struct dpot_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct dpot_data*,int,unsigned long) ;
 int FUNC_3 (char const*,int,unsigned long*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,int ) ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 int FUNC_9 (int,int ) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_5,
        struct device_attribute *VAR_6,
        const char *VAR_7, size_t VAR_8, u32 VAR_9)
{
 struct dpot_data *VAR_10 = FUNC_1(VAR_5);
 unsigned long VAR_11;
 int VAR_12;

 if (VAR_9 & VAR_2) {
  if (FUNC_8(VAR_7, "enabled"))
   FUNC_7(VAR_3 & VAR_9, VAR_10->otp_en_mask);
  else
   FUNC_0(VAR_3 & VAR_9, VAR_10->otp_en_mask);

  return VAR_8;
 }

 if ((VAR_9 & VAR_1) &&
  !FUNC_9(VAR_3 & VAR_9, VAR_10->otp_en_mask))
  return -VAR_4;

 VAR_12 = FUNC_3(VAR_7, 10, &VAR_11);
 if (VAR_12)
  return VAR_12;

 if (VAR_11 > VAR_10->rdac_mask)
  VAR_11 = VAR_10->rdac_mask;

 FUNC_5(&VAR_10->update_lock);
 FUNC_2(VAR_10, VAR_9, VAR_11);
 if (VAR_9 & VAR_0)
  FUNC_4(26);
 else if (VAR_9 & VAR_1)
  FUNC_4(400);
 FUNC_6(&VAR_10->update_lock);

 return VAR_8;
}
