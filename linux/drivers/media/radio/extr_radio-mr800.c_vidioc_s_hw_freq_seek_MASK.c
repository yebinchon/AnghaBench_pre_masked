
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_hw_freq_seek {scalar_t__ tuner; scalar_t__ seek_upward; int wrap_around; } ;
struct file {int f_flags; } ;
struct amradio_device {int curfreq; int* buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct amradio_device*,int ,int ,int*,int,int) ;
 int FUNC_1 (struct amradio_device*,int) ;
 unsigned long VAR_11 ;
 unsigned long FUNC_2 (int) ;
 scalar_t__ FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 struct amradio_device* FUNC_5 (struct file*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_12, void *VAR_13,
  const struct v4l2_hw_freq_seek *VAR_14)
{
 static u8 VAR_15[8] = {
  0x3d, 0x32, 0x0f, 0x08, 0x3d, 0x32, 0x0f, 0x08
 };
 struct amradio_device *VAR_16 = FUNC_5(VAR_12);
 unsigned long VAR_17;
 int VAR_18;

 if (VAR_14->tuner != 0 || !VAR_14->wrap_around)
  return -VAR_6;

 if (VAR_12->f_flags & VAR_10)
  return -VAR_9;

 VAR_18 = FUNC_0(VAR_16,
   VAR_3, 0, VAR_15, 8, 0);
 if (VAR_18)
  return VAR_18;
 FUNC_1(VAR_16, VAR_16->curfreq);
 VAR_18 = FUNC_0(VAR_16,
  VAR_14->seek_upward ? VAR_4 : VAR_2,
  0, ((void*)0), 0, 0);
 if (VAR_18)
  return VAR_18;
 VAR_17 = VAR_11 + FUNC_2(30000);
 for (;;) {
  if (FUNC_4(VAR_11, VAR_17)) {
   VAR_18 = -VAR_7;
   break;
  }
  if (FUNC_3(FUNC_2(10))) {
   VAR_18 = -VAR_8;
   break;
  }
  VAR_18 = FUNC_0(VAR_16, VAR_1,
    0, ((void*)0), 0, 1);
  if (VAR_18)
   continue;
  FUNC_0(VAR_16, VAR_0, 0, ((void*)0), 0, 1);
  if (VAR_16->buffer[1] || VAR_16->buffer[2]) {

   VAR_16->curfreq = (VAR_16->buffer[1] << 8) | VAR_16->buffer[2];
   VAR_16->curfreq = (VAR_16->curfreq - 0x10) * 200;
   FUNC_0(VAR_16, VAR_5,
     0, ((void*)0), 0, 0);
   FUNC_1(VAR_16, VAR_16->curfreq);
   VAR_18 = 0;
   break;
  }
 }
 FUNC_0(VAR_16, VAR_5, 0, ((void*)0), 0, 0);
 FUNC_1(VAR_16, VAR_16->curfreq);
 return VAR_18;
}
