
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {unsigned int actual_clock; int caps; } ;
struct bcm2835_host {int cdiv; unsigned int max_clk; int ns_per_fifo_word; scalar_t__ ioaddr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct mmc_host* FUNC_0 (struct bcm2835_host*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct bcm2835_host *VAR_4, unsigned int VAR_5)
{
 struct mmc_host *VAR_6 = FUNC_0(VAR_4);
 int VAR_7;
 if (VAR_5 < 100000) {



  VAR_4->cdiv = VAR_2;
  FUNC_1(VAR_4->cdiv, VAR_4->ioaddr + VAR_1);
  return;
 }

 VAR_7 = VAR_4->max_clk / VAR_5;
 if (VAR_7 < 2)
  VAR_7 = 2;
 if ((VAR_4->max_clk / VAR_7) > VAR_5)
  VAR_7++;
 VAR_7 -= 2;

 if (VAR_7 > VAR_2)
  VAR_7 = VAR_2;

 VAR_5 = VAR_4->max_clk / (VAR_7 + 2);
 VAR_6->actual_clock = VAR_5;



 VAR_4->ns_per_fifo_word = (1000000000 / VAR_5) *
  ((VAR_6->caps & VAR_0) ? 8 : 32);

 VAR_4->cdiv = VAR_7;
 FUNC_1(VAR_4->cdiv, VAR_4->ioaddr + VAR_1);


 FUNC_1(VAR_6->actual_clock / 2, VAR_4->ioaddr + VAR_3);
}
