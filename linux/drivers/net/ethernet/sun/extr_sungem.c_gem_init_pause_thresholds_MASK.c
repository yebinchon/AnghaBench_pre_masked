
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct gem {int rx_fifo_sz; int rx_pause_off; int rx_pause_on; int rx_buf_sz; scalar_t__ regs; TYPE_1__* pdev; } ;
struct TYPE_2__ {scalar_t__ vendor; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct gem *VAR_7)
{
        u32 VAR_8;






 if (VAR_7->rx_fifo_sz <= (2 * 1024)) {
  VAR_7->rx_pause_off = VAR_7->rx_pause_on = VAR_7->rx_fifo_sz;
 } else {
  int VAR_9 = (VAR_7->rx_buf_sz + 4 + 64) & ~63;
  int VAR_10 = (VAR_7->rx_fifo_sz - (VAR_9 * 2));
  int VAR_11 = VAR_10 - VAR_9;

  VAR_7->rx_pause_off = VAR_10;
  VAR_7->rx_pause_on = VAR_11;
 }





        VAR_8 = 0;
        if (VAR_7->pdev->vendor == VAR_6)
  VAR_8 |= VAR_3 | VAR_1;

        VAR_8 |= VAR_2;

        VAR_8 |= ((31 << 1) & VAR_5);
        VAR_8 |= ((31 << 6) & VAR_4);
        FUNC_1(VAR_8, VAR_7->regs + VAR_0);




 if (!(FUNC_0(VAR_7->regs + VAR_0) & VAR_2)) {
  VAR_8 = ((2 << 1) & VAR_5);
  VAR_8 |= ((8 << 6) & VAR_4);
  FUNC_1(VAR_8, VAR_7->regs + VAR_0);
 }
}
