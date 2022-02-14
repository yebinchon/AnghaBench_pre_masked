
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sunxi_pinctrl {int lock; scalar_t__ membase; TYPE_1__* desc; } ;
struct regulator {int dummy; } ;
struct TYPE_2__ {int io_bias_cfg_variant; unsigned int pin_base; } ;




 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct regulator*) ;
 scalar_t__ FUNC_4 (unsigned int) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct sunxi_pinctrl *VAR_4,
      unsigned VAR_5,
      struct regulator *VAR_6)
{
 unsigned short VAR_7 = VAR_5 / VAR_2;
 unsigned long VAR_8;
 u32 VAR_9, VAR_10;
 int VAR_11;

 if (!VAR_4->desc->io_bias_cfg_variant)
  return 0;

 VAR_11 = FUNC_3(VAR_6);
 if (VAR_11 < 0)
  return VAR_11;


 if (VAR_11 == 0)
  return 0;

 switch (VAR_4->desc->io_bias_cfg_variant) {
 case 129:




  if (VAR_11 <= 1800000)
   VAR_9 = 0x0;
  else if (VAR_11 <= 2500000)
   VAR_9 = 0x6;
  else if (VAR_11 <= 2800000)
   VAR_9 = 0x9;
  else if (VAR_11 <= 3000000)
   VAR_9 = 0xA;
  else
   VAR_9 = 0xD;

  VAR_5 -= VAR_4->desc->pin_base;

  VAR_10 = FUNC_2(VAR_4->membase + FUNC_4(VAR_5));
  VAR_10 &= ~VAR_1;
  FUNC_5(VAR_10 | VAR_9, VAR_4->membase + FUNC_4(VAR_5));
  return 0;
 case 128:
  VAR_9 = VAR_11 <= 1800000 ? 1 : 0;

  FUNC_0(&VAR_4->lock, VAR_8);
  VAR_10 = FUNC_2(VAR_4->membase + VAR_3);
  VAR_10 &= ~(1 << VAR_7);
  FUNC_5(VAR_10 | VAR_9 << VAR_7, VAR_4->membase + VAR_3);
  FUNC_1(&VAR_4->lock, VAR_8);
  return 0;
 default:
  return -VAR_0;
 }
}
