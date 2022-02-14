
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct as3722 {int dev; scalar_t__ en_intern_i2c_pullup; scalar_t__ en_intern_int_pullup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct as3722*,int ,int,int) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int FUNC_2(struct as3722 *VAR_3)
{
 int VAR_4;
 u32 VAR_5 = 0;

 if (VAR_3->en_intern_int_pullup)
  VAR_5 |= VAR_1;
 if (VAR_3->en_intern_i2c_pullup)
  VAR_5 |= VAR_0;

 VAR_4 = FUNC_0(VAR_3, VAR_2,
   VAR_1 | VAR_0, VAR_5);
 if (VAR_4 < 0)
  FUNC_1(VAR_3->dev, "IOVOLTAGE_REG update failed: %d\n", VAR_4);
 return VAR_4;
}
