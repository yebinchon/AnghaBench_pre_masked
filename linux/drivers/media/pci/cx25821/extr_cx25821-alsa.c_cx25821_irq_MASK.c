
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct cx25821_dev {int dummy; } ;
struct cx25821_audio_dev {struct cx25821_dev* dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct cx25821_audio_dev*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct cx25821_audio_dev *VAR_5 = VAR_4;
 struct cx25821_dev *VAR_6 = VAR_5->dev;
 u32 VAR_7, VAR_8;
 u32 VAR_9, VAR_10;
 int VAR_11, VAR_12 = 0;

 VAR_9 = FUNC_2(VAR_1);
 VAR_10 = FUNC_2(VAR_0);
 VAR_7 = FUNC_2(VAR_2);

 for (VAR_11 = 0; VAR_11 < 1; VAR_11++) {
  VAR_7 = FUNC_2(VAR_2);
  if (0 == VAR_7) {
   VAR_7 = FUNC_2(VAR_2);
   VAR_9 = FUNC_2(VAR_1);
   VAR_10 = FUNC_2(VAR_0);

   if (VAR_7) {
    VAR_12 = 1;
    FUNC_3(VAR_2, VAR_7);

    FUNC_1(VAR_5, VAR_9,
      VAR_10);
    break;
   } else {
    goto out;
   }
  }

  VAR_12 = 1;
  FUNC_3(VAR_2, VAR_7);

  FUNC_1(VAR_5, VAR_9, VAR_10);
 }

 VAR_8 = FUNC_2(VAR_2);

 if (VAR_12)
  FUNC_3(VAR_2, VAR_8);

out:
 return FUNC_0(VAR_12);
}
