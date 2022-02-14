
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int test ;
struct spi_test {int iterate_transfer_mask; int transfer_count; TYPE_1__* transfers; int description; } ;
struct spi_device {int dev; } ;
struct TYPE_2__ {size_t len; scalar_t__ rx_buf; scalar_t__ tx_buf; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct spi_device*,struct spi_test*,void*,void*) ;
 int FUNC_2 (int *,char*,size_t,...) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (struct spi_test*,struct spi_test const*,int) ;

__attribute__((used)) static int FUNC_5(struct spi_device *VAR_0,
        const struct spi_test *VAR_1,
        void *VAR_2, void *VAR_3,
        size_t VAR_4,
        size_t VAR_5,
        size_t VAR_6
 )
{
 struct spi_test VAR_7;
 int VAR_8, VAR_9, VAR_10;


 FUNC_4(&VAR_7, VAR_1, sizeof(VAR_7));




 if (!(VAR_7.iterate_transfer_mask & (FUNC_0(VAR_7.transfer_count) - 1)))
  VAR_7.iterate_transfer_mask = 1;


 VAR_10 = VAR_9 = 0;
 for (VAR_8 = 0; VAR_8 < VAR_7.transfer_count; VAR_8++) {
  if (VAR_7.transfers[VAR_8].tx_buf)
   VAR_9++;
  if (VAR_7.transfers[VAR_8].rx_buf)
   VAR_10++;
 }




 if (VAR_5 && (!VAR_9)) {
  FUNC_3(&VAR_0->dev,
         "%s: iterate_tx_off configured with tx_buf==NULL - ignoring\n",
         VAR_7.description);
  return 0;
 }
 if (VAR_6 && (!VAR_10)) {
  FUNC_3(&VAR_0->dev,
         "%s: iterate_rx_off configured with rx_buf==NULL - ignoring\n",
         VAR_7.description);
  return 0;
 }


 if (!(VAR_4 || VAR_5 || VAR_6)) {
  FUNC_2(&VAR_0->dev, "Running test %s\n", VAR_7.description);
 } else {
  FUNC_2(&VAR_0->dev,
    "  with iteration values: len = %zu, tx_off = %zu, rx_off = %zu\n",
    VAR_4, VAR_5, VAR_6);
 }


 for (VAR_8 = 0; VAR_8 < VAR_7.transfer_count; VAR_8++) {

  if (!(VAR_7.iterate_transfer_mask & FUNC_0(VAR_8)))
   continue;
  VAR_7.transfers[VAR_8].len = VAR_4;
  if (VAR_7.transfers[VAR_8].tx_buf)
   VAR_7.transfers[VAR_8].tx_buf += VAR_5;
  if (VAR_7.transfers[VAR_8].tx_buf)
   VAR_7.transfers[VAR_8].rx_buf += VAR_6;
 }


 return FUNC_1(VAR_0, &VAR_7, VAR_2, VAR_3);
}
