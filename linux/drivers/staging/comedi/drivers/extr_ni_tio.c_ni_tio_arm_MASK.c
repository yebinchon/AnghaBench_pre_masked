
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct_device {int variant; } ;
struct ni_gpct {unsigned int counter_index; struct ni_gpct_device* counter_dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_6 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;


 unsigned int VAR_7 ;



 int FUNC_3 (struct ni_gpct*,int ,unsigned int,unsigned int) ;
 int FUNC_4 (struct ni_gpct*,int ,int ,int ,unsigned int) ;

int FUNC_5(struct ni_gpct *VAR_8, bool VAR_9, unsigned int VAR_10)
{
 struct ni_gpct_device *VAR_11 = VAR_8->counter_dev;
 unsigned int VAR_12 = VAR_8->counter_index;
 unsigned int VAR_13 = 0;

 if (VAR_9) {
  unsigned int VAR_14 = 0;
  unsigned int VAR_15 = 0;


  switch (VAR_11->variant) {
  case 129:
  default:
   break;
  case 128:
   VAR_14 = VAR_6;
   break;
  case 130:
   VAR_14 = VAR_1;
   break;
  }

  switch (VAR_10) {
  case 132:
   VAR_13 |= VAR_2;
   break;
  case 131:
   VAR_13 |= VAR_2 | VAR_3;
   break;
  default:





   if (VAR_14 && (VAR_10 & VAR_7)) {
    VAR_15 |= VAR_5 |
     (FUNC_0(VAR_10) & VAR_14);
   } else {
    return -VAR_0;
   }
   break;
  }

  if (VAR_14)
   FUNC_3(VAR_8, FUNC_2(VAR_12),
     VAR_5 | VAR_14, VAR_15);
 } else {
  VAR_13 |= VAR_4;
 }
 FUNC_4(VAR_8, FUNC_1(VAR_12),
      0, 0, VAR_13);
 return 0;
}
