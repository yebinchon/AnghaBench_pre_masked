
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbxfb_planeorder {int bottom; int top; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;


 int VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (unsigned long,int ) ;

__attribute__((used)) static int FUNC_3(struct mbxfb_planeorder *VAR_8)
{
 unsigned long VAR_9, VAR_10;

 if (VAR_8->bottom == VAR_8->top)
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_1);
 VAR_10 = FUNC_1(VAR_5);

 VAR_9 &= ~(FUNC_0(VAR_3));
 VAR_10 &= ~(FUNC_0(VAR_7));

 switch (VAR_8->bottom) {
 case 129:
  VAR_9 |= VAR_2;
  break;
 case 128:
  VAR_10 |= VAR_6;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_8->top) {
 case 129:
  VAR_9 |= VAR_4;
  break;
 case 128:
  VAR_10 |= VAR_4;
  break;
 default:
  return -VAR_0;
 }

 FUNC_2(VAR_10, VAR_5);
 FUNC_2(VAR_9, VAR_1);

 return 0;

}
