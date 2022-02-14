
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct a3700_spi {TYPE_1__* master; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_0 (int *,char*,unsigned int) ;
 int FUNC_1 (struct a3700_spi*,int ) ;
 int FUNC_2 (struct a3700_spi*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct a3700_spi *VAR_6,
      unsigned int VAR_7, bool VAR_8)
{
 u32 VAR_9;

 VAR_9 = FUNC_1(VAR_6, VAR_3);
 VAR_9 &= ~(VAR_4 | VAR_0);
 VAR_9 &= ~(VAR_1 | VAR_2);

 switch (VAR_7) {
 case 128:
  break;
 case 130:
  VAR_9 |= VAR_1;
  break;
 case 129:
  VAR_9 |= VAR_2;

  if (VAR_8)
   VAR_9 |= VAR_0;
  break;
 default:
  FUNC_0(&VAR_6->master->dev, "wrong pin mode %u", VAR_7);
  return -VAR_5;
 }

 FUNC_2(VAR_6, VAR_3, VAR_9);

 return 0;
}
