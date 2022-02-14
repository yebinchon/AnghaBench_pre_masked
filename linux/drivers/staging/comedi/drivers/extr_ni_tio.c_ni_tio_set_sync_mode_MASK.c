
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const u64 ;
struct ni_gpct_device {int variant; } ;
struct ni_gpct {unsigned int counter_index; struct ni_gpct_device* counter_dev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;




 unsigned int VAR_2 ;
 unsigned int FUNC_0 (unsigned int) ;



 int FUNC_1 (struct ni_gpct*,unsigned int,scalar_t__ const*) ;
 int FUNC_2 (struct ni_gpct*,unsigned int*) ;
 unsigned int FUNC_3 (struct ni_gpct*,unsigned int) ;
 int FUNC_4 (struct ni_gpct*,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct ni_gpct *VAR_3)
{
 struct ni_gpct_device *VAR_4 = VAR_3->counter_dev;
 unsigned int VAR_5 = VAR_3->counter_index;
 static const u64 VAR_6 = 25000;
 unsigned int VAR_7 = 0;
 unsigned int VAR_8 = 0;
 unsigned int VAR_9;
 unsigned int VAR_10;
 unsigned int VAR_11 = 0;
 u64 VAR_12 = 0;
 int VAR_13;
 bool VAR_14;


 switch (VAR_4->variant) {
 case 129:
 default:
  return;
 case 128:
  VAR_7 = VAR_2;
  break;
 case 130:
  VAR_7 = VAR_0;
  break;
 }

 VAR_9 = FUNC_0(VAR_5);
 VAR_10 = FUNC_3(VAR_3, VAR_9);
 switch (VAR_10 & VAR_1) {
 case 134:
 case 133:
 case 132:
 case 131:
  VAR_14 = 1;
  break;
 default:
  VAR_14 = 0;
  break;
 }

 VAR_13 = FUNC_2(VAR_3, &VAR_11);
 if (VAR_13)
  return;
 VAR_13 = FUNC_1(VAR_3, VAR_11, &VAR_12);
 if (VAR_13)
  return;




 if (VAR_14 || (VAR_12 && VAR_12 < VAR_6))
  VAR_8 = VAR_7;

 FUNC_4(VAR_3, VAR_9, VAR_7, VAR_8);
}
