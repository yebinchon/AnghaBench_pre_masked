
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imgu_css_scaler_info {int phase_step; int pad_left; int pad_right; int phase_init; unsigned int crop_left; unsigned int crop_top; scalar_t__ exp_shift; } ;
typedef int s8 ;
typedef int s64 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,unsigned int) ;
 int FUNC_1 (unsigned int,unsigned int) ;

__attribute__((used)) static void
FUNC_2(unsigned int VAR_5, unsigned int VAR_6,
     unsigned int VAR_7, int VAR_8,
     const int *VAR_9, unsigned int VAR_10,
     s8 VAR_11[], struct imgu_css_scaler_info *VAR_12)
{
 int VAR_13, VAR_14, VAR_15, VAR_16;
 int VAR_17 = FUNC_1(VAR_7, VAR_6);
 int VAR_18 = (1 << VAR_17) * VAR_7;
 unsigned int VAR_19;

 if (VAR_6 == VAR_7) {
  for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++) {
   for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
    VAR_11[VAR_14 * VAR_1 + VAR_13]
     = 0;
   }
  }

  VAR_12->phase_step = VAR_3 *
   (1 << VAR_4);
  VAR_12->exp_shift = 0;
  VAR_12->pad_left = 0;
  VAR_12->pad_right = 0;
  VAR_12->phase_init = 0;
  VAR_12->crop_left = 0;
  VAR_12->crop_top = 0;
  return;
 }

 for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++) {
  for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {

   s64 VAR_20 = VAR_9[VAR_10 -
    ((VAR_13 * (VAR_10 / VAR_5)) + VAR_14) - 1];
   VAR_20 *= VAR_18;
   VAR_20 = FUNC_0(VAR_20, VAR_6);


   VAR_20 += 1 << (VAR_0 - 1);
   VAR_20 >>= VAR_0;

   VAR_11[VAR_14 * VAR_1 + VAR_13] =
    VAR_20;
  }
 }

 VAR_19 = VAR_3 *
   (1 << VAR_4) *
   VAR_7 / VAR_6;
 VAR_19 += VAR_8;
 VAR_15 = (VAR_5 / 2 * VAR_3 *
   (1 << VAR_4)) -
   (1 << (VAR_4 - 1));
 VAR_16 = (VAR_5 / 2 * VAR_3 *
   (1 << VAR_4)) +
   (1 << (VAR_4 - 1));

 VAR_12->exp_shift = VAR_2 - VAR_17;
 VAR_12->pad_left = (VAR_15 % VAR_19 == 0) ?
  VAR_15 / VAR_19 - 1 : VAR_15 / VAR_19;
 VAR_12->pad_right = (VAR_16 % VAR_19 == 0) ?
  VAR_16 / VAR_19 - 1 : VAR_16 / VAR_19;
 VAR_12->phase_init = VAR_15 - VAR_19 * VAR_12->pad_left;
 VAR_12->phase_step = VAR_19;
 VAR_12->crop_left = VAR_5 - 1;
 VAR_12->crop_top = VAR_5 - 1;
}
