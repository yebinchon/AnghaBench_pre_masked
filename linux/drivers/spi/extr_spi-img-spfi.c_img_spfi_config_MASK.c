
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_transfer {int len; scalar_t__ tx_nbits; scalar_t__ rx_nbits; scalar_t__ rx_buf; scalar_t__ tx_buf; int speed_hz; } ;
struct spi_master {int dummy; } ;
struct spi_device {int chip_select; int master; } ;
struct img_spfi {int spfi_clk; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct img_spfi*,int ) ;
 int FUNC_6 (struct img_spfi*,int,int ) ;
 struct img_spfi* FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct spi_master *VAR_14, struct spi_device *VAR_15,
       struct spi_transfer *VAR_16)
{
 struct img_spfi *VAR_17 = FUNC_7(VAR_15->master);
 u32 VAR_18, VAR_19;





 VAR_19 = FUNC_0(FUNC_3(VAR_17->spfi_clk), VAR_16->speed_hz);
 VAR_19 = FUNC_2(512 / (1 << FUNC_4(VAR_19)), 1, 128);

 VAR_18 = FUNC_5(VAR_17, FUNC_1(VAR_15->chip_select));
 VAR_18 &= ~(VAR_8 <<
   VAR_9);
 VAR_18 |= VAR_19 << VAR_9;
 FUNC_6(VAR_17, VAR_18, FUNC_1(VAR_15->chip_select));

 FUNC_6(VAR_17, VAR_16->len << VAR_11,
      VAR_10);

 VAR_18 = FUNC_5(VAR_17, VAR_0);
 VAR_18 &= ~(VAR_3 | VAR_1);
 if (VAR_16->tx_buf)
  VAR_18 |= VAR_3;
 if (VAR_16->rx_buf)
  VAR_18 |= VAR_1;
 VAR_18 &= ~(VAR_5 << VAR_7);
 if (VAR_16->tx_nbits == VAR_12 &&
     VAR_16->rx_nbits == VAR_12)
  VAR_18 |= VAR_4 << VAR_7;
 else if (VAR_16->tx_nbits == VAR_13 &&
   VAR_16->rx_nbits == VAR_13)
  VAR_18 |= VAR_6 << VAR_7;
 VAR_18 |= VAR_2;
 FUNC_6(VAR_17, VAR_18, VAR_0);
}
