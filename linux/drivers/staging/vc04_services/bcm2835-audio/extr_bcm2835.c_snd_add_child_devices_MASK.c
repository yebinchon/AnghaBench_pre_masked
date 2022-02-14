
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct device {int dummy; } ;
struct bcm2835_audio_driver {int minchannels; } ;
struct TYPE_3__ {struct bcm2835_audio_driver* audio_driver; scalar_t__* is_enabled; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,char*,int,int) ;
 int FUNC_3 (struct device*,struct bcm2835_audio_driver*,int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1, u32 VAR_2)
{
 int VAR_3 = 0;
 int VAR_4 = 0;
 int VAR_5 = 0;
 int VAR_6 = 0;
 int VAR_7 = 0;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_0); VAR_8++)
  if (*VAR_0[VAR_8].is_enabled)
   VAR_5++;

 if (!VAR_5)
  return 0;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_0); VAR_8++)
  if (*VAR_0[VAR_8].is_enabled)
   VAR_7 +=
    VAR_0[VAR_8].audio_driver->minchannels;

 if (VAR_7 < VAR_2) {
  VAR_6 = VAR_2 - VAR_7;
  VAR_3 = VAR_6 / VAR_5;
  VAR_4 = VAR_6 % VAR_5;
 }

 FUNC_1(VAR_1, "minchannels %d\n", VAR_7);
 FUNC_1(VAR_1, "extrachannels %d\n", VAR_6);
 FUNC_1(VAR_1, "extrachannels_per_driver %d\n",
  VAR_3);
 FUNC_1(VAR_1, "extrachannels_remainder %d\n",
  VAR_4);

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_0); VAR_8++) {
  struct bcm2835_audio_driver *VAR_9;
  int VAR_10;
  int VAR_11;

  if (!*VAR_0[VAR_8].is_enabled)
   continue;

  VAR_9 = VAR_0[VAR_8].audio_driver;

  if (VAR_9->minchannels > VAR_2) {
   FUNC_2(VAR_1,
    "Out of channels, needed %d but only %d left\n",
    VAR_9->minchannels,
    VAR_2);
   continue;
  }

  VAR_10 =
   VAR_9->minchannels + VAR_3 +
   VAR_4;
  VAR_4 = 0;

  VAR_2 -= VAR_10;

  VAR_11 = FUNC_3(VAR_1, VAR_9,
        VAR_10);
  if (VAR_11)
   return VAR_11;
 }

 return 0;
}
