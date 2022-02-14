
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcm_qspi_parms {int speed_hz; int bits_per_word; int mode; } ;
struct bcm_qspi {int base_clk; struct bcm_qspi_parms last_parms; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bcm_qspi*,int ,int ,int) ;
 int FUNC_1 (int,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct bcm_qspi *VAR_6,
      const struct bcm_qspi_parms *VAR_7)
{
 u32 VAR_8, VAR_9 = 0;

 if (VAR_7->speed_hz)
  VAR_9 = VAR_6->base_clk / (2 * VAR_7->speed_hz);

 VAR_8 = FUNC_1(VAR_9, VAR_5, VAR_4);
 FUNC_0(VAR_6, VAR_0, VAR_2, VAR_8);

 VAR_8 = VAR_1;

 if (VAR_7->bits_per_word != 16)
  VAR_8 |= VAR_7->bits_per_word << 2;
 VAR_8 |= VAR_7->mode & 3;
 FUNC_0(VAR_6, VAR_0, VAR_3, VAR_8);

 VAR_6->last_parms = *VAR_7;
}
