
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {unsigned long long len; int speed_hz; scalar_t__ delay_usecs; } ;
struct spi_test {int transfer_count; unsigned long long elapsed_time; struct spi_transfer* transfers; } ;
struct spi_device {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long VAR_3 ;
 int FUNC_0 (int *,char*,unsigned long long,unsigned long long) ;
 scalar_t__ FUNC_1 (unsigned long long,int ) ;

__attribute__((used)) static int FUNC_2(struct spi_device *VAR_4,
           struct spi_test *VAR_5)
{
 int VAR_6;
 unsigned long long VAR_7 = 0;
 unsigned long long VAR_8 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_5->transfer_count; VAR_6++) {
  struct spi_transfer *VAR_9 = VAR_5->transfers + VAR_6;
  unsigned long long VAR_10 = (unsigned long long)VAR_0 *
        VAR_9->len;

  VAR_8 += VAR_9->delay_usecs;
  if (!VAR_9->speed_hz)
   continue;
  VAR_7 += FUNC_1(VAR_10 * VAR_2, VAR_9->speed_hz);
 }

 VAR_7 += VAR_8 * VAR_3;
 if (VAR_5->elapsed_time < VAR_7) {
  FUNC_0(&VAR_4->dev,
   "elapsed time %lld ns is shorter than minimum estimated time %lld ns\n",
   VAR_5->elapsed_time, VAR_7);

  return -VAR_1;
 }

 return 0;
}
