
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct vivid_dev {int sdr_adc_freq; int sdr_fixp_src_phase; int sdr_fm_deviation; int sdr_fixp_mod_phase; int sdr_pixelformat; } ;
struct TYPE_2__ {int vb2_buf; } ;
struct vivid_buffer {TYPE_1__ vb; } ;
typedef int s64 ;
typedef int s32 ;


 int VAR_0 ;
 void* FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 unsigned long FUNC_4 (int *,int ) ;
 int * FUNC_5 (int *,int ) ;

void FUNC_6(struct vivid_dev *VAR_5, struct vivid_buffer *VAR_6)
{
 u8 *VAR_7 = FUNC_5(&VAR_6->vb.vb2_buf, 0);
 unsigned long VAR_8;
 unsigned long VAR_9 = FUNC_4(&VAR_6->vb.vb2_buf, 0);
 s64 VAR_10;
 s32 VAR_11;
 s32 VAR_12;
 s32 VAR_13;
 s32 VAR_14;



 VAR_11 = FUNC_0(VAR_1 * 1000,
        VAR_5->sdr_adc_freq);

 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8 += 2) {
  VAR_12 = FUNC_2(VAR_5->sdr_fixp_src_phase,
      VAR_1) >> (31 - VAR_3);

  VAR_5->sdr_fixp_src_phase += VAR_11;
  VAR_10 = (s64) VAR_12 * VAR_5->sdr_fm_deviation;
  VAR_5->sdr_fixp_mod_phase += FUNC_1(VAR_10, VAR_4);






  VAR_5->sdr_fixp_src_phase %= VAR_1;
  VAR_5->sdr_fixp_mod_phase %= VAR_1;

  if (VAR_5->sdr_fixp_mod_phase < 0)
   VAR_5->sdr_fixp_mod_phase += VAR_1;

  VAR_13 = FUNC_2(VAR_5->sdr_fixp_mod_phase, VAR_1);
  VAR_14 = FUNC_3(VAR_5->sdr_fixp_mod_phase, VAR_1);



  VAR_13 >>= (31 - VAR_3);
  VAR_14 >>= (31 - VAR_3);

  switch (VAR_5->sdr_pixelformat) {
  case 128:


   VAR_13 = VAR_13 * 1275 + VAR_2 * 1275;
   VAR_14 = VAR_14 * 1275 + VAR_2 * 1275;
   *VAR_7++ = FUNC_0(VAR_13, VAR_2 * 10);
   *VAR_7++ = FUNC_0(VAR_14, VAR_2 * 10);
   break;
  case 129:


   VAR_13 = VAR_13 * 1275 - VAR_2 * 5;
   VAR_14 = VAR_14 * 1275 - VAR_2 * 5;
   *VAR_7++ = FUNC_0(VAR_13, VAR_2 * 10);
   *VAR_7++ = FUNC_0(VAR_14, VAR_2 * 10);
   break;
  default:
   break;
  }
 }
}
