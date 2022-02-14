
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct geni_se {scalar_t__ base; } ;
struct spi_geni_master {unsigned int tx_fifo_depth; unsigned int tx_wm; unsigned int tx_rem_bytes; TYPE_1__* cur_xfer; struct geni_se se; } ;
struct TYPE_2__ {int len; int tx_buf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (struct spi_geni_master*) ;
 int FUNC_1 (scalar_t__,int *,int) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct spi_geni_master *VAR_2)
{
 struct geni_se *VAR_3 = &VAR_2->se;
 unsigned int VAR_4;
 const u8 *VAR_5;
 unsigned int VAR_6 = FUNC_0(VAR_2);
 unsigned int VAR_7 = 0;

 VAR_4 = (VAR_2->tx_fifo_depth - VAR_2->tx_wm) * VAR_6;
 if (VAR_2->tx_rem_bytes < VAR_4)
  VAR_4 = VAR_2->tx_rem_bytes;

 VAR_5 = VAR_2->cur_xfer->tx_buf + VAR_2->cur_xfer->len - VAR_2->tx_rem_bytes;
 while (VAR_7 < VAR_4) {
  unsigned int VAR_8;
  unsigned int VAR_9;
  u32 VAR_10 = 0;
  u8 *VAR_11 = (u8 *)&VAR_10;

  VAR_9 = FUNC_2(VAR_6, VAR_4 - VAR_7);
  for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
   VAR_11[VAR_8] = VAR_5[VAR_7++];
  FUNC_1(VAR_3->base + VAR_0, &VAR_10, 1);
 }
 VAR_2->tx_rem_bytes -= VAR_4;
 if (!VAR_2->tx_rem_bytes)
  FUNC_3(0, VAR_3->base + VAR_1);
}
