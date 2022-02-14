
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u64 ;
struct TYPE_2__ {unsigned int numerator; unsigned int denominator; } ;
struct vivid_dev {int out_seq_offset; int out_seq_count; unsigned long jiffies_vid_out; int out_seq_resync; scalar_t__ field_out; int mutex; scalar_t__ vbi_out_seq_start; scalar_t__ vbi_out_seq_count; scalar_t__ vid_out_seq_start; scalar_t__ vid_out_seq_count; TYPE_1__ timeperframe_vid_out; scalar_t__ seq_wrap; } ;


 unsigned int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (unsigned int,unsigned int) ;
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
 unsigned VAR_12;
 unsigned VAR_13;

 FUNC_1(VAR_5, 1, "Video Output Thread Start\n");

 FUNC_6();


 VAR_5->out_seq_offset = 0;
 if (VAR_5->seq_wrap)
  VAR_5->out_seq_count = 0xffffff80U;
 VAR_5->jiffies_vid_out = VAR_3;
 VAR_5->vid_out_seq_start = VAR_5->vbi_out_seq_start = 0;
 VAR_5->out_seq_resync = 0;

 for (;;) {
  FUNC_7();
  if (FUNC_2())
   break;

  FUNC_3(&VAR_5->mutex);
  VAR_10 = VAR_3;
  if (VAR_5->out_seq_resync) {
   VAR_5->jiffies_vid_out = VAR_10;
   VAR_5->out_seq_offset = VAR_5->out_seq_count + 1;
   VAR_5->out_seq_count = 0;
   VAR_5->out_seq_resync = 0;
  }
  VAR_12 = VAR_5->timeperframe_vid_out.numerator;
  VAR_13 = VAR_5->timeperframe_vid_out.denominator;

  if (VAR_5->field_out == VAR_2)
   VAR_13 *= 2;


  VAR_9 = VAR_10 - VAR_5->jiffies_vid_out;

  VAR_7 = (u64)VAR_9 * VAR_13 +
          (VAR_0 * VAR_12) / 2;
  FUNC_0(VAR_7, VAR_0 * VAR_12);







  if (VAR_9 > VAR_1) {
   VAR_5->jiffies_vid_out = VAR_10;
   VAR_5->out_seq_offset = VAR_7;
   VAR_7 = 0;
  }
  VAR_5->out_seq_count = VAR_7 + VAR_5->out_seq_offset;
  VAR_5->vid_out_seq_count = VAR_5->out_seq_count - VAR_5->vid_out_seq_start;
  VAR_5->vbi_out_seq_count = VAR_5->out_seq_count - VAR_5->vbi_out_seq_start;

  FUNC_8(VAR_5);
  FUNC_4(&VAR_5->mutex);





  VAR_6 = VAR_7 * VAR_12;


  VAR_9 = VAR_3 - VAR_5->jiffies_vid_out;


  VAR_6 += VAR_12;




  VAR_8 = VAR_6 * VAR_0 +
        VAR_13 / 2;
  FUNC_0(VAR_8, VAR_13);

  if (VAR_8 < VAR_9)
   VAR_8 = VAR_9;

  VAR_11 = VAR_8 - VAR_9;
  FUNC_5(VAR_11 ? VAR_11 : 1);
 }
 FUNC_1(VAR_5, 1, "Video Output Thread End\n");
 return 0;
}
