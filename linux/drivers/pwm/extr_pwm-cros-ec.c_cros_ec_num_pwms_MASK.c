
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct cros_ec_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cros_ec_device*,int,scalar_t__*) ;

__attribute__((used)) static int FUNC_1(struct cros_ec_device *VAR_5)
{
 int VAR_6, VAR_7;


 for (VAR_6 = 0; VAR_6 <= VAR_4; VAR_6++) {
  u32 VAR_8 = 0;

  VAR_7 = FUNC_0(VAR_5, VAR_6, &VAR_8);

  if (VAR_7 < 0 && !(VAR_7 == -VAR_3 && VAR_8))
   return VAR_7;





  if (VAR_8 == VAR_0)
   return -VAR_2;
  else if (VAR_8 == VAR_1)
   return VAR_6;
  else if (VAR_8)
   return -VAR_3;
 }

 return VAR_4;
}
