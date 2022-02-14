
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct em28xx_i2c_bus {scalar_t__ algo_type; struct em28xx* dev; } ;
struct em28xx {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct em28xx*,int ) ;
 int FUNC_1 (struct em28xx*,int ) ;
 int FUNC_2 (struct em28xx*,int ) ;

__attribute__((used)) static inline int FUNC_3(struct em28xx_i2c_bus *VAR_4, u16 VAR_5)
{
 struct em28xx *VAR_6 = VAR_4->dev;
 int VAR_7 = -VAR_3;

 if (VAR_4->algo_type == VAR_2)
  VAR_7 = FUNC_2(VAR_6, VAR_5);
 else if (VAR_4->algo_type == VAR_1)
  VAR_7 = FUNC_1(VAR_6, VAR_5);
 else if (VAR_4->algo_type == VAR_0)
  VAR_7 = FUNC_0(VAR_6, VAR_5);
 return VAR_7;
}
