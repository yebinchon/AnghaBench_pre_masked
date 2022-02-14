
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cx18 {int hw_flags; TYPE_1__* card; void* sd_extmux; void* sd_av; } ;
struct TYPE_2__ {int hw_all; int const hw_muxer; } ;







 void* FUNC_0 (struct cx18*,int const) ;
 int FUNC_1 (struct cx18*,int) ;
 int FUNC_2 (struct cx18*,int) ;

__attribute__((used)) static void FUNC_3(struct cx18 *VAR_0)
{
 u32 VAR_1 = VAR_0->card->hw_all;
 u32 VAR_2;
 int VAR_3;

 for (VAR_3 = 0, VAR_2 = 1; VAR_3 < 32; VAR_3++, VAR_2 <<= 1) {

  if (!(VAR_2 & VAR_1))
   continue;

  switch (VAR_2) {
  case 131:
  case 128:

   VAR_0->hw_flags |= VAR_2;
   break;
  case 132:


   VAR_0->hw_flags |= VAR_2;
   break;
  case 129:




   break;
  case 130:
   if (FUNC_1(VAR_0, VAR_2) == 0)
    VAR_0->hw_flags |= VAR_2;
   break;
  default:
   if (FUNC_2(VAR_0, VAR_3) == 0)
    VAR_0->hw_flags |= VAR_2;
   break;
  }
 }

 if (VAR_0->hw_flags & 132)
  VAR_0->sd_av = FUNC_0(VAR_0, 132);

 if (VAR_0->card->hw_muxer != 0)
  VAR_0->sd_extmux = FUNC_0(VAR_0, VAR_0->card->hw_muxer);
}
