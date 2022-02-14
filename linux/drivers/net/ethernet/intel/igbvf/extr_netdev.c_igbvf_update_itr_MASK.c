
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct igbvf_adapter {int dummy; } ;
typedef enum latency_range { ____Placeholder_latency_range } latency_range ;






__attribute__((used)) static enum latency_range FUNC_0(struct igbvf_adapter *VAR_0,
        enum latency_range VAR_1,
        int VAR_2, int VAR_3)
{
 enum latency_range VAR_4 = VAR_1;

 if (VAR_2 == 0)
  goto update_itr_done;

 switch (VAR_1) {
 case 128:

  if (VAR_3/VAR_2 > 8000)
   VAR_4 = 130;
  else if ((VAR_2 < 5) && (VAR_3 > 512))
   VAR_4 = 129;
  break;
 case 129:
  if (VAR_3 > 10000) {

   if (VAR_3/VAR_2 > 8000)
    VAR_4 = 130;
   else if ((VAR_2 < 10) || ((VAR_3/VAR_2) > 1200))
    VAR_4 = 130;
   else if ((VAR_2 > 35))
    VAR_4 = 128;
  } else if (VAR_3/VAR_2 > 2000) {
   VAR_4 = 130;
  } else if (VAR_2 <= 2 && VAR_3 < 512) {
   VAR_4 = 128;
  }
  break;
 case 130:
  if (VAR_3 > 25000) {
   if (VAR_2 > 35)
    VAR_4 = 129;
  } else if (VAR_3 < 6000) {
   VAR_4 = 129;
  }
  break;
 default:
  break;
 }

update_itr_done:
 return VAR_4;
}
