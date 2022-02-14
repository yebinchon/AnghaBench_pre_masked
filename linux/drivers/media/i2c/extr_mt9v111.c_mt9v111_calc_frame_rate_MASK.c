
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fract {int numerator; unsigned int denominator; } ;
struct mt9v111_dev {unsigned int sysclk; int vblank; int hblank; } ;


 unsigned int FUNC_0 (unsigned int*) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned int* VAR_8 ;
 int FUNC_3 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct mt9v111_dev *VAR_9,
       struct v4l2_fract *VAR_10)
{
 unsigned int VAR_11 = VAR_10->numerator ?
      VAR_10->denominator / VAR_10->numerator :
      VAR_10->denominator;
 unsigned int VAR_12;
 unsigned int VAR_13;
 unsigned int VAR_14;
 unsigned int VAR_15;
 unsigned int VAR_16;
 unsigned int VAR_17;
 unsigned int VAR_18;
 unsigned int VAR_19;
 unsigned int VAR_20;
 unsigned int VAR_21;
 int VAR_22;


 VAR_12 = ~0L;
 for (VAR_21 = 0, VAR_18 = 0; VAR_21 < FUNC_0(VAR_8); VAR_21++) {
  VAR_17 = FUNC_2(VAR_11 - VAR_8[VAR_21]);
  if (VAR_17 < VAR_12) {
   VAR_18 = VAR_21;
   VAR_12 = VAR_17;
  }
 }
 VAR_11 = VAR_8[VAR_18];
 VAR_15 = VAR_20 = VAR_19 = 0;
 VAR_16 = FUNC_1(VAR_9->sysclk, 2);
 VAR_14 = VAR_7 + 7 + VAR_1;
 VAR_13 = VAR_6 + 7 + VAR_0;

 VAR_12 = ~0L;
 for (VAR_20 = VAR_5;
      VAR_20 < VAR_4; VAR_20++) {
  for (VAR_19 = VAR_3;
       VAR_19 < VAR_2; VAR_19 += 10) {
   unsigned int VAR_23 = (VAR_14 + VAR_19) *
            (VAR_13 + VAR_20);
   unsigned int VAR_24 = FUNC_1(VAR_16, VAR_23);

   VAR_17 = FUNC_2(VAR_11 - VAR_24);
   if (VAR_17 < VAR_12) {
    VAR_12 = VAR_17;
    VAR_15 = VAR_24;

    if (VAR_17 == 0)
     break;
   }
  }

  if (VAR_17 == 0)
   break;
 }

 VAR_22 = FUNC_3(VAR_9->hblank, VAR_19);
 if (VAR_22)
  return VAR_22;

 VAR_22 = FUNC_3(VAR_9->vblank, VAR_20);
 if (VAR_22)
  return VAR_22;

 VAR_10->numerator = 1;
 VAR_10->denominator = VAR_15;

 return 0;
}
