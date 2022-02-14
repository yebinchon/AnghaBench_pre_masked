
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vivid_dev {int sdr_cap_seq_offset; unsigned long jiffies_sdr_cap; int sdr_cap_seq_resync; int sdr_cap_seq_count; int sdr_adc_freq; int mutex; scalar_t__ seq_wrap; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct vivid_dev*,int,char*) ;
 void* VAR_3 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct vivid_dev*) ;

__attribute__((used)) static int FUNC_9(void *VAR_4)
{
 struct vivid_dev *VAR_5 = VAR_4;
 u64 VAR_6;
 u64 VAR_7;
 u64 VAR_8;
 unsigned long VAR_9;
 unsigned long VAR_10;
 unsigned VAR_11;

 FUNC_1(VAR_5, 1, "SDR Capture Thread Start\n");

 FUNC_6();


 VAR_5->sdr_cap_seq_offset = 0;
 if (VAR_5->seq_wrap)
  VAR_5->sdr_cap_seq_offset = 0xffffff80U;
 VAR_5->jiffies_sdr_cap = VAR_3;
 VAR_5->sdr_cap_seq_resync = 0;

 for (;;) {
  FUNC_7();
  if (FUNC_2())
   break;

  FUNC_3(&VAR_5->mutex);
  VAR_10 = VAR_3;
  if (VAR_5->sdr_cap_seq_resync) {
   VAR_5->jiffies_sdr_cap = VAR_10;
   VAR_5->sdr_cap_seq_offset = VAR_5->sdr_cap_seq_count + 1;
   VAR_5->sdr_cap_seq_count = 0;
   VAR_5->sdr_cap_seq_resync = 0;
  }

  VAR_9 = VAR_10 - VAR_5->jiffies_sdr_cap;

  VAR_7 =
   (u64)VAR_9 * VAR_5->sdr_adc_freq +
          (VAR_0 * VAR_2) / 2;
  FUNC_0(VAR_7, VAR_0 * VAR_2);







  if (VAR_9 > VAR_1) {
   VAR_5->jiffies_sdr_cap = VAR_10;
   VAR_5->sdr_cap_seq_offset = VAR_7;
   VAR_7 = 0;
  }
  VAR_5->sdr_cap_seq_count =
   VAR_7 + VAR_5->sdr_cap_seq_offset;

  FUNC_8(VAR_5);
  FUNC_4(&VAR_5->mutex);





  VAR_6 = VAR_7 * VAR_2;


  VAR_9 = VAR_3 - VAR_5->jiffies_sdr_cap;


  VAR_6 += VAR_2;




  VAR_8 = VAR_6 * VAR_0 +
        VAR_5->sdr_adc_freq / 2;
  FUNC_0(VAR_8, VAR_5->sdr_adc_freq);

  if (VAR_8 < VAR_9)
   VAR_8 = VAR_9;

  VAR_11 = VAR_8 - VAR_9;
  FUNC_5(VAR_11 ? VAR_11 : 1);
 }
 FUNC_1(VAR_5, 1, "SDR Capture Thread End\n");
 return 0;
}
