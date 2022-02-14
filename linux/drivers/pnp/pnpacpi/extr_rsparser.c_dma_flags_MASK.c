
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnp_dev {int dev; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static int FUNC_1(struct pnp_dev *VAR_8, int VAR_9, int VAR_10,
       int VAR_11)
{
 int VAR_12 = 0;

 if (VAR_10)
  VAR_12 |= VAR_4;
 switch (VAR_9) {
 case 134:
  VAR_12 |= VAR_3;
  break;
 case 130:
  VAR_12 |= VAR_5;
  break;
 case 129:
  VAR_12 |= VAR_6;
  break;
 case 128:
  VAR_12 |= VAR_7;
  break;
 default:

  VAR_12 |= VAR_3;
  FUNC_0(&VAR_8->dev, "invalid DMA type %d\n", VAR_9);
 }
 switch (VAR_11) {
 case 132:
  VAR_12 |= VAR_2;
  break;
 case 131:
  VAR_12 |= VAR_1;
  break;
 case 133:
  VAR_12 |= VAR_0;
  break;
 default:

  VAR_12 |= VAR_1;
  FUNC_0(&VAR_8->dev, "invalid DMA transfer type %d\n", VAR_11);
 }

 return VAR_12;
}
