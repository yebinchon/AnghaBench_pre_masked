
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ti_bandgap {int lock; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct ti_bandgap*,int,int ,int ,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct ti_bandgap *VAR_3, int VAR_4,
       u32 VAR_5)
{
 int VAR_6;

 switch (VAR_5) {
 case 0:
  VAR_6 = 0x0;
  break;
 case 1:
  VAR_6 = 0x1;
  break;
 case 10:
  VAR_6 = 0x2;
  break;
 case 100:
  VAR_6 = 0x3;
  break;
 case 250:
  VAR_6 = 0x4;
  break;
 case 500:
  VAR_6 = 0x5;
  break;
 default:
  FUNC_1(VAR_3->dev, "Delay %d ms is not supported\n", VAR_5);
  return -VAR_0;
 }

 FUNC_2(&VAR_3->lock);
 FUNC_0(VAR_3, VAR_4, VAR_1, VAR_2, VAR_6);
 FUNC_3(&VAR_3->lock);

 return 0;
}
