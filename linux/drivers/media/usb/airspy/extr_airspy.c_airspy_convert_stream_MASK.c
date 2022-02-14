
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct airspy {scalar_t__ pixelformat; unsigned int sample; unsigned int sample_measured; int dev; scalar_t__ jiffies_next; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (void*,void*,unsigned int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static unsigned int FUNC_6(struct airspy *VAR_3,
  void *VAR_4, void *VAR_5, unsigned int VAR_6)
{
 unsigned int VAR_7;

 if (VAR_3->pixelformat == VAR_1) {
  FUNC_2(VAR_4, VAR_5, VAR_6);
  VAR_7 = VAR_6;
 } else {
  VAR_7 = 0;
 }


 if (FUNC_5(FUNC_4(VAR_3->jiffies_next))) {

  unsigned int VAR_8 = FUNC_1(VAR_2 -
    VAR_3->jiffies_next + FUNC_3(10000UL));
  unsigned int VAR_9 = VAR_3->sample - VAR_3->sample_measured;

  VAR_3->jiffies_next = VAR_2 + FUNC_3(10000UL);
  VAR_3->sample_measured = VAR_3->sample;
  FUNC_0(VAR_3->dev, "slen=%u samples=%u msecs=%u sample rate=%lu\n",
    VAR_6, VAR_9, VAR_8,
    VAR_9 * 1000UL / VAR_8);
 }


 VAR_3->sample += VAR_6 / 2;

 return VAR_7;
}
