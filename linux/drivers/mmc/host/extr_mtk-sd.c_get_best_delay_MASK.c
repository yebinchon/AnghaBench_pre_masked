
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef scalar_t__ u32 ;
struct msdc_host {int dev; } ;
struct msdc_delay_phase {int maxlen; int start; void* final_phase; int member_0; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int ,char*,scalar_t__,int,void*) ;
 int FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static struct msdc_delay_phase FUNC_3(struct msdc_host *VAR_1, u32 VAR_2)
{
 int VAR_3 = 0, VAR_4 = 0;
 int VAR_5 = 0, VAR_6 = 0;
 u8 VAR_7 = 0xff;
 struct msdc_delay_phase VAR_8 = { 0, };

 if (VAR_2 == 0) {
  FUNC_0(VAR_1->dev, "phase error: [map:%x]\n", VAR_2);
  VAR_8.final_phase = VAR_7;
  return VAR_8;
 }

 while (VAR_3 < VAR_0) {
  VAR_4 = FUNC_2(VAR_2, VAR_3);
  if (VAR_6 < VAR_4) {
   VAR_5 = VAR_3;
   VAR_6 = VAR_4;
  }
  VAR_3 += VAR_4 ? VAR_4 : 1;
  if (VAR_4 >= 12 && VAR_5 < 4)
   break;
 }


 if (VAR_5 == 0)
  VAR_7 = (VAR_5 + VAR_6 / 3) % VAR_0;
 else
  VAR_7 = (VAR_5 + VAR_6 / 2) % VAR_0;
 FUNC_1(VAR_1->dev, "phase: [map:%x] [maxlen:%d] [final:%d]\n",
   VAR_2, VAR_6, VAR_7);

 VAR_8.maxlen = VAR_6;
 VAR_8.start = VAR_5;
 VAR_8.final_phase = VAR_7;
 return VAR_8;
}
