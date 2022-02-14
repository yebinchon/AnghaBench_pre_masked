
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef unsigned int u32 ;
struct geni_se {scalar_t__ base; } ;
struct spi_geni_master {unsigned int rx_rem_bytes; TYPE_1__* cur_xfer; struct geni_se se; } ;
struct TYPE_2__ {int len; int rx_buf; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int FUNC_0 (struct spi_geni_master*) ;
 int FUNC_1 (scalar_t__,unsigned int*,int) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 unsigned int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct spi_geni_master *VAR_6)
{
 struct geni_se *VAR_7 = &VAR_6->se;
 u32 VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10;
 u8 *VAR_11;
 unsigned int VAR_12 = FUNC_0(VAR_6);
 unsigned int VAR_13 = 0;

 VAR_8 = FUNC_3(VAR_7->base + VAR_4);
 VAR_9 = (VAR_8 & VAR_0) * VAR_12;
 if (VAR_8 & VAR_1) {
  VAR_10 = VAR_8 & VAR_2;
  VAR_10 >>= VAR_3;
  if (VAR_10 && VAR_10 < 4)
   VAR_9 -= VAR_12 - VAR_10;
 }
 if (VAR_6->rx_rem_bytes < VAR_9)
  VAR_9 = VAR_6->rx_rem_bytes;

 VAR_11 = VAR_6->cur_xfer->rx_buf + VAR_6->cur_xfer->len - VAR_6->rx_rem_bytes;
 while (VAR_13 < VAR_9) {
  u32 VAR_14 = 0;
  u8 *VAR_15 = (u8 *)&VAR_14;
  unsigned int VAR_16;
  unsigned int VAR_17;

  VAR_16 = FUNC_2(VAR_12, VAR_9 - VAR_13);
  FUNC_1(VAR_7->base + VAR_5, &VAR_14, 1);
  for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++)
   VAR_11[VAR_13++] = VAR_15[VAR_17];
 }
 VAR_6->rx_rem_bytes -= VAR_9;
}
