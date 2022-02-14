
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct_device {int** regs; } ;
struct ni_gpct {unsigned int counter_index; unsigned int chip_index; struct ni_gpct_device* counter_dev; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_1 ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int FUNC_3 (unsigned int) ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int FUNC_4 (unsigned int) ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;

 unsigned int VAR_11 ;
 unsigned int VAR_12 ;


 unsigned int FUNC_5 (unsigned int) ;

 unsigned int FUNC_6 (unsigned int) ;



 unsigned int FUNC_7 (struct ni_gpct const*) ;
 int FUNC_8 (struct ni_gpct const*,int ) ;

__attribute__((used)) static int FUNC_9(const struct ni_gpct *VAR_13,
     unsigned int *VAR_14)
{
 struct ni_gpct_device *VAR_15 = VAR_13->counter_dev;
 unsigned int VAR_16 = VAR_13->counter_index;
 unsigned int VAR_17 = VAR_13->chip_index;
 unsigned int VAR_18 = FUNC_1(VAR_16);
 unsigned int VAR_19 = 0;
 unsigned int VAR_20;
 unsigned int VAR_21;

 VAR_20 = FUNC_0(FUNC_8(VAR_13,
        FUNC_2(VAR_16)));

 switch (VAR_20) {
 case 130:
  VAR_19 = VAR_8;
  break;
 case 129:
  VAR_19 = VAR_9;
  break;
 case 128:
  if (VAR_15->regs[VAR_17][VAR_18] & VAR_1)
   VAR_19 =
       VAR_2;
  else
   VAR_19 = VAR_10;
  break;
 case 134:
  VAR_19 = VAR_3;
  break;
 case 133:
  if (VAR_15->regs[VAR_17][VAR_18] & VAR_1)
   VAR_19 = VAR_7;
  else
   VAR_19 = VAR_4;
  break;
 case 131:
  VAR_19 = VAR_6;
  break;
 case 132:
  VAR_19 = VAR_5;
  break;
 default:
  for (VAR_21 = 0; VAR_21 <= VAR_12; ++VAR_21) {
   if (VAR_20 == FUNC_6(VAR_21)) {
    VAR_19 = FUNC_4(VAR_21);
    break;
   }
  }
  if (VAR_21 <= VAR_12)
   break;
  for (VAR_21 = 0; VAR_21 <= VAR_11; ++VAR_21) {
   if (VAR_20 == FUNC_5(VAR_21)) {
    VAR_19 = FUNC_3(VAR_21);
    break;
   }
  }
  if (VAR_21 <= VAR_11)
   break;
  return -VAR_0;
 }
 VAR_19 |= FUNC_7(VAR_13);
 *VAR_14 = VAR_19;
 return 0;
}
