
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pnp_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int VAR_6 ;
 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static void FUNC_1(struct pnp_dev *VAR_7, int VAR_8, u8 *VAR_9,
        u8 *VAR_10, u8 *VAR_11)
{
 switch (VAR_8 & (128 | 130 |
    129 | 131)) {
 case 128:
  *VAR_9 = VAR_4;
  *VAR_10 = VAR_1;
  break;
 case 130:
  *VAR_9 = VAR_4;
  *VAR_10 = VAR_0;
  break;
 case 129:
  *VAR_9 = VAR_2;
  *VAR_10 = VAR_1;
  break;
 case 131:
  *VAR_9 = VAR_2;
  *VAR_10 = VAR_0;
  break;
 default:
  FUNC_0(&VAR_7->dev, "can't encode invalid IRQ mode %#x\n",
   VAR_8);
  *VAR_9 = VAR_2;
  *VAR_10 = VAR_0;
  break;
 }

 if (VAR_8 & VAR_6)
  *VAR_11 = VAR_5;
 else
  *VAR_11 = VAR_3;
}
