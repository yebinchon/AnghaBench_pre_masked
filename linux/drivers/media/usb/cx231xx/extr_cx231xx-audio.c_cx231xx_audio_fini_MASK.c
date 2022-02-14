
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * sndcard; int alt_max_pkt_size; } ;
struct cx231xx {int has_alsa_audio; TYPE_1__ adev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct cx231xx *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return 0;

 if (VAR_0->has_alsa_audio != 1) {



  return 0;
 }

 if (VAR_0->adev.sndcard) {
  FUNC_1(VAR_0->adev.sndcard);
  FUNC_0(VAR_0->adev.alt_max_pkt_size);
  VAR_0->adev.sndcard = ((void*)0);
 }

 return 0;
}
