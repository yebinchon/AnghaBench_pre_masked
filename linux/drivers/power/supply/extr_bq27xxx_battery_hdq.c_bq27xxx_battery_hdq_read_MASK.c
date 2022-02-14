
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct w1_slave {int dummy; } ;
struct bq27xxx_device_info {int dev; } ;


 int VAR_0 ;
 struct w1_slave* FUNC_0 (int ) ;
 int FUNC_1 (struct w1_slave*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct bq27xxx_device_info *VAR_1, u8 VAR_2,
        bool VAR_3)
{
 struct w1_slave *VAR_4 = FUNC_0(VAR_1->dev);
 unsigned int VAR_5 = 3;
 int VAR_6, VAR_7;
 int VAR_8;

 if (!VAR_3) {




  VAR_6 = FUNC_1(VAR_4, VAR_2 + 1);
  do {
   VAR_8 = VAR_6;
   if (VAR_6 < 0)
    return VAR_6;

   VAR_7 = FUNC_1(VAR_4, VAR_2);
   if (VAR_7 < 0)
    return VAR_7;

   VAR_6 = FUNC_1(VAR_4, VAR_2 + 1);
  } while (VAR_8 != VAR_6 && --VAR_5);

  if (VAR_5 == 0)
   return -VAR_0;

  return (VAR_6 << 8) | VAR_7;
 }

 return FUNC_1(VAR_4, VAR_2);
}
