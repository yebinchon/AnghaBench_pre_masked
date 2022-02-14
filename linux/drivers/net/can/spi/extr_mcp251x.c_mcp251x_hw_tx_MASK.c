
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct spi_device {int dummy; } ;
struct mcp251x_priv {int spi; int * spi_tx_buf; } ;
struct can_frame {int can_id; int can_dlc; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 int FUNC_3 (struct spi_device*,int*,int,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int*,int ,int) ;
 struct mcp251x_priv* FUNC_6 (struct spi_device*) ;

__attribute__((used)) static void FUNC_7(struct spi_device *VAR_19, struct can_frame *VAR_20,
     int VAR_21)
{
 struct mcp251x_priv *VAR_22 = FUNC_6(VAR_19);
 u32 VAR_23, VAR_24, VAR_25, VAR_26;
 u8 VAR_27[VAR_11];

 VAR_25 = (VAR_20->can_id & VAR_0) ? 1 : 0;
 if (VAR_25)
  VAR_23 = (VAR_20->can_id & VAR_1) >> 18;
 else
  VAR_23 = VAR_20->can_id & VAR_3;
 VAR_24 = VAR_20->can_id & VAR_1;
 VAR_26 = (VAR_20->can_id & VAR_2) ? 1 : 0;

 VAR_27[VAR_12] = FUNC_1(VAR_21);
 VAR_27[VAR_17] = VAR_23 >> VAR_5;
 VAR_27[VAR_18] = ((VAR_23 & VAR_9) << VAR_10) |
  (VAR_25 << VAR_8) |
  ((VAR_24 >> VAR_7) & VAR_6);
 VAR_27[VAR_16] = FUNC_0(VAR_24, 1);
 VAR_27[VAR_15] = FUNC_0(VAR_24, 0);
 VAR_27[VAR_14] = (VAR_26 << VAR_4) | VAR_20->can_dlc;
 FUNC_5(VAR_27 + VAR_13, VAR_20->data, VAR_20->can_dlc);
 FUNC_3(VAR_19, VAR_27, VAR_20->can_dlc, VAR_21);


 VAR_22->spi_tx_buf[0] = FUNC_2(1 << VAR_21);
 FUNC_4(VAR_22->spi, 1);
}
