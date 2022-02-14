
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mrfld_pinctrl {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;





 int FUNC_0 (struct mrfld_pinctrl*,unsigned int,int,int) ;
 unsigned int FUNC_1 (unsigned long) ;
 unsigned int FUNC_2 (unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct mrfld_pinctrl *VAR_11, unsigned int VAR_12,
    unsigned long VAR_13)
{
 unsigned int VAR_14 = FUNC_2(VAR_13);
 unsigned int VAR_15 = FUNC_1(VAR_13);
 u32 VAR_16 = 0, VAR_17 = 0;
 unsigned long VAR_18;

 switch (VAR_14) {
 case 132:
  VAR_17 |= VAR_8 | VAR_5;
  break;

 case 130:
  VAR_17 |= VAR_8 | VAR_5;
  VAR_16 |= VAR_7;

  switch (VAR_15) {
  case 50000:
   VAR_16 |= VAR_4 << VAR_6;
   break;
  case 20000:
   VAR_16 |= VAR_2 << VAR_6;
   break;
  case 2000:
   VAR_16 |= VAR_3 << VAR_6;
   break;
  default:
   return -VAR_10;
  }

  break;

 case 131:
  VAR_17 |= VAR_8 | VAR_5;
  VAR_16 |= VAR_1;

  switch (VAR_15) {
  case 50000:
   VAR_16 |= VAR_4 << VAR_6;
   break;
  case 20000:
   VAR_16 |= VAR_2 << VAR_6;
   break;
  case 2000:
   VAR_16 |= VAR_3 << VAR_6;
   break;
  default:
   return -VAR_10;
  }

  break;

 case 129:
  VAR_17 |= VAR_0;
  if (VAR_15)
   VAR_16 |= VAR_0;
  break;

 case 128:
  VAR_17 |= VAR_9;
  if (VAR_15)
   VAR_16 |= VAR_9;
  break;
 }

 FUNC_3(&VAR_11->lock, VAR_18);
 FUNC_0(VAR_11, VAR_12, VAR_16, VAR_17);
 FUNC_4(&VAR_11->lock, VAR_18);

 return 0;
}
