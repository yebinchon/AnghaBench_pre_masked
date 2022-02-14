
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imstt_regvals {int dummy; } ;
struct imstt_par {struct imstt_regvals init; } ;


 struct imstt_regvals VAR_0 ;
 struct imstt_regvals VAR_1 ;
 struct imstt_regvals VAR_2 ;
 struct imstt_regvals VAR_3 ;
 struct imstt_regvals VAR_4 ;
 struct imstt_regvals VAR_5 ;
 struct imstt_regvals VAR_6 ;
 struct imstt_regvals VAR_7 ;

__attribute__((used)) static struct imstt_regvals *
FUNC_0(struct imstt_par *VAR_8, int VAR_9, int VAR_10)
{
 struct imstt_regvals *VAR_11;

 switch (VAR_9) {
  case 512:
   VAR_11 = &VAR_5;
   break;
  case 640:
   VAR_11 = &VAR_7;
   break;
  case 800:
   VAR_11 = &VAR_0;
   break;
  case 832:
   VAR_11 = &VAR_1;
   break;
  case 1024:
   VAR_11 = &VAR_2;
   break;
  case 1152:
   VAR_11 = &VAR_3;
   break;
  case 1280:
   VAR_11 = VAR_10 == 960 ? &VAR_4 : &VAR_6;
   break;
  default:
   return ((void*)0);
 }
 VAR_8->init = *VAR_11;
 return VAR_11;
}
