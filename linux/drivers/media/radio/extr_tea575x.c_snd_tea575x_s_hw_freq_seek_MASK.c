
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct v4l2_hw_freq_seek {scalar_t__ rangelow; scalar_t__ rangehigh; scalar_t__ seek_upward; scalar_t__ wrap_around; scalar_t__ tuner; } ;
struct snd_tea575x {int band; scalar_t__ freq; int val; int has_am; scalar_t__ tea5759; scalar_t__ cannot_read_data; } ;
struct file {int f_flags; } ;
struct TYPE_3__ {scalar_t__ rangelow; scalar_t__ rangehigh; } ;


 int FUNC_0 (TYPE_1__*) ;
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
 int VAR_11 ;
 int FUNC_1 (scalar_t__) ;
 TYPE_1__* VAR_12 ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,scalar_t__) ;
 unsigned long VAR_13 ;
 unsigned long FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (unsigned long) ;
 scalar_t__ FUNC_6 (struct snd_tea575x*) ;
 int FUNC_7 (struct snd_tea575x*) ;
 int FUNC_8 (struct snd_tea575x*) ;
 int FUNC_9 (struct snd_tea575x*,int) ;
 scalar_t__ FUNC_10 (unsigned long,unsigned long) ;

int FUNC_11(struct file *VAR_14, struct snd_tea575x *VAR_15,
    const struct v4l2_hw_freq_seek *VAR_16)
{
 unsigned long VAR_17;
 int VAR_18, VAR_19;

 if (VAR_15->cannot_read_data)
  return -VAR_5;
 if (VAR_16->tuner || VAR_16->wrap_around)
  return -VAR_3;

 if (VAR_14->f_flags & VAR_8)
  return -VAR_7;

 if (VAR_16->rangelow || VAR_16->rangehigh) {
  for (VAR_18 = 0; VAR_18 < FUNC_0(VAR_12); VAR_18++) {
   if ((VAR_18 == VAR_1 && VAR_15->tea5759) ||
       (VAR_18 == VAR_2 && !VAR_15->tea5759) ||
       (VAR_18 == VAR_0 && !VAR_15->has_am))
    continue;
   if (VAR_12[VAR_18].rangelow == VAR_16->rangelow &&
       VAR_12[VAR_18].rangehigh == VAR_16->rangehigh)
    break;
  }
  if (VAR_18 == FUNC_0(VAR_12))
   return -VAR_3;
  if (VAR_18 != VAR_15->band) {
   VAR_15->band = VAR_18;
   VAR_15->freq = FUNC_2(VAR_15->freq, VAR_12[VAR_18].rangelow,
           VAR_12[VAR_18].rangehigh);
   FUNC_8(VAR_15);
  }
 }

 VAR_19 = (VAR_15->band == VAR_0) ? 5 : 50;


 VAR_15->val &= ~VAR_9;
 VAR_15->val |= VAR_10;
 if (VAR_16->seek_upward)
  VAR_15->val |= VAR_11;
 else
  VAR_15->val &= ~VAR_11;
 FUNC_9(VAR_15, VAR_15->val);
 VAR_17 = VAR_13 + FUNC_3(10000);
 for (;;) {
  if (FUNC_10(VAR_13, VAR_17))
   break;
  if (FUNC_5(FUNC_3(10))) {

   VAR_15->val &= ~VAR_10;
   FUNC_8(VAR_15);
   return -VAR_6;
  }
  if (!(FUNC_7(VAR_15) & VAR_10)) {
   u32 VAR_20;


   for (VAR_18 = 0; VAR_18 < 100; VAR_18++) {
    FUNC_4(10);
    VAR_20 = FUNC_6(VAR_15);
    if (VAR_20)
     break;
   }
   if (VAR_20 == 0)
    break;




   if (FUNC_1(VAR_15->freq - VAR_20) < 16 * VAR_19 ||
     (VAR_16->seek_upward && VAR_20 < VAR_15->freq) ||
     (!VAR_16->seek_upward && VAR_20 > VAR_15->freq)) {
    FUNC_9(VAR_15, VAR_15->val);
    continue;
   }
   VAR_15->freq = VAR_20;
   VAR_15->val &= ~VAR_10;
   return 0;
  }
 }
 VAR_15->val &= ~VAR_10;
 FUNC_8(VAR_15);
 return -VAR_4;
}
