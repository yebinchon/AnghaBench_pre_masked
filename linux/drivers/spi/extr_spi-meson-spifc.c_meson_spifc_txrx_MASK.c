
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int cs_change; scalar_t__ rx_buf; scalar_t__ tx_buf; } ;
struct meson_spifc {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct meson_spifc*,scalar_t__,int) ;
 int FUNC_1 (struct meson_spifc*,scalar_t__,int) ;
 int FUNC_2 (struct meson_spifc*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct meson_spifc *VAR_12,
       struct spi_transfer *VAR_13,
       int VAR_14, int VAR_15, bool VAR_16,
       bool VAR_17)
{
 bool VAR_18 = 1;
 int VAR_19;

 if (VAR_13->tx_buf)
  FUNC_1(VAR_12, VAR_13->tx_buf + VAR_14, VAR_15);


 FUNC_3(VAR_12->regmap, VAR_3, VAR_11,
      VAR_10);
 FUNC_4(VAR_12->regmap, VAR_4,
       (8 * VAR_15 - 1) << VAR_7);


 FUNC_3(VAR_12->regmap, VAR_3, VAR_9,
      VAR_9);

 if (VAR_17) {
  if (VAR_16)
   VAR_18 = VAR_13->cs_change;
  else
   VAR_18 = !VAR_13->cs_change;
 }

 FUNC_3(VAR_12->regmap, VAR_5, VAR_8,
      VAR_18 ? VAR_8 : 0);


 FUNC_3(VAR_12->regmap, VAR_2, VAR_6, 0);

 FUNC_3(VAR_12->regmap, VAR_1, VAR_0, VAR_0);

 VAR_19 = FUNC_2(VAR_12);

 if (!VAR_19 && VAR_13->rx_buf)
  FUNC_0(VAR_12, VAR_13->rx_buf + VAR_14, VAR_15);

 return VAR_19;
}
