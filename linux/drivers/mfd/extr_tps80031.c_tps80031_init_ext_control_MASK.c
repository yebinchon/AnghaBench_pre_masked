
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps80031_platform_data {int dummy; } ;
struct tps80031 {struct device* dev; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,scalar_t__,int) ;
 int FUNC_1 (struct device*,int ,scalar_t__,int) ;
 int FUNC_2 (struct device*,int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3(struct tps80031 *VAR_3,
   struct tps80031_platform_data *VAR_4)
{
 struct device *VAR_5 = VAR_3->dev;
 int VAR_6;
 int VAR_7;


 for (VAR_7 = 0; VAR_7 < 9; ++VAR_7) {
  VAR_6 = FUNC_2(VAR_5, VAR_2,
    VAR_1 + VAR_7, 0);
  if (VAR_6 < 0) {
   FUNC_0(VAR_5, "reg 0x%02x write failed, err = %d\n",
    VAR_1 + VAR_7, VAR_6);
   return VAR_6;
  }
 }


 VAR_6 = FUNC_1(VAR_5, VAR_2,
   VAR_0, 0x7 << 5);
 if (VAR_6 < 0) {
  FUNC_0(VAR_5, "reg 0x%02x set_bits failed, err = %d\n",
   VAR_0, VAR_6);
  return VAR_6;
 }
 return VAR_6;
}
