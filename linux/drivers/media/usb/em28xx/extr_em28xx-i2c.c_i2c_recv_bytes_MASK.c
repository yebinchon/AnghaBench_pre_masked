
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_msg {int addr; int len; int buf; } ;
struct em28xx_i2c_bus {scalar_t__ algo_type; struct em28xx* dev; } ;
struct em28xx {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct em28xx*,int,int ,int ) ;
 int FUNC_1 (struct em28xx*,int,int ,int ) ;
 int FUNC_2 (struct em28xx*,int,int ,int ) ;

__attribute__((used)) static inline int FUNC_3(struct em28xx_i2c_bus *VAR_4,
     struct i2c_msg VAR_5)
{
 struct em28xx *VAR_6 = VAR_4->dev;
 u16 VAR_7 = VAR_5.addr << 1;
 int VAR_8 = -VAR_3;

 if (VAR_4->algo_type == VAR_2)
  VAR_8 = FUNC_2(VAR_6, VAR_7, VAR_5.buf, VAR_5.len);
 else if (VAR_4->algo_type == VAR_1)
  VAR_8 = FUNC_1(VAR_6, VAR_7, VAR_5.buf, VAR_5.len);
 else if (VAR_4->algo_type == VAR_0)
  VAR_8 = FUNC_0(VAR_6, VAR_7, VAR_5.buf, VAR_5.len);
 return VAR_8;
}
