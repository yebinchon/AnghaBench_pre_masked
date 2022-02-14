
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hackrf_dev {unsigned int sample; unsigned int sample_measured; int dev; scalar_t__ jiffies_next; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (void*,void*,unsigned int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct hackrf_dev *VAR_2, void *VAR_3, void *VAR_4,
          unsigned int VAR_5)
{
 FUNC_2(VAR_3, VAR_4, VAR_5);


 if (FUNC_5(FUNC_4(VAR_2->jiffies_next))) {

  unsigned int VAR_6 = FUNC_1(VAR_1 -
    VAR_2->jiffies_next + FUNC_3(10000UL));
  unsigned int VAR_7 = VAR_2->sample - VAR_2->sample_measured;

  VAR_2->jiffies_next = VAR_1 + FUNC_3(10000UL);
  VAR_2->sample_measured = VAR_2->sample;
  FUNC_0(VAR_2->dev, "slen=%u samples=%u msecs=%u sample rate=%lu\n",
    VAR_5, VAR_7, VAR_6,
    VAR_7 * 1000UL / VAR_6);
 }


 VAR_2->sample += VAR_5 / 2;
}
