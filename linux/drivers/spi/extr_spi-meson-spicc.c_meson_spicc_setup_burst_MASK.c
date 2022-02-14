
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_spicc_device {unsigned int tx_remain; unsigned int rx_remain; unsigned int bytes_per_word; int is_burst_end; int is_last_burst; scalar_t__ base; scalar_t__ xfer_remain; } ;


 int FUNC_0 (int ,unsigned int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct meson_spicc_device*) ;
 int FUNC_2 (int ,int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(struct meson_spicc_device *VAR_3,
        unsigned int VAR_4)
{

 VAR_3->tx_remain = VAR_4;
 VAR_3->rx_remain = VAR_4;
 VAR_3->xfer_remain -= VAR_4 * VAR_3->bytes_per_word;
 VAR_3->is_burst_end = 0;
 if (VAR_4 < VAR_1 || !VAR_3->xfer_remain)
  VAR_3->is_last_burst = 1;
 else
  VAR_3->is_last_burst = 0;


 FUNC_2(VAR_0,
   FUNC_0(VAR_0,
    VAR_4),
   VAR_3->base + VAR_2);


 FUNC_1(VAR_3);
}
