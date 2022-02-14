
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_i2c {void* tx_fifo_size; void* rx_fifo_size; void* max_speed_mode; } ;
struct xgbe_prv_data {int dev; struct xgbe_i2c i2c; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (unsigned int,int ,int ) ;
 unsigned int FUNC_1 (struct xgbe_prv_data*,int ) ;
 int FUNC_2 (int ,char*,char*,void*,char*,void*,char*,void*) ;
 scalar_t__ FUNC_3 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_4(struct xgbe_prv_data *VAR_4)
{
 struct xgbe_i2c *VAR_5 = &VAR_4->i2c;
 unsigned int VAR_6;

 VAR_6 = FUNC_1(VAR_4, VAR_0);
 VAR_5->max_speed_mode = FUNC_0(VAR_6, VAR_0,
         VAR_1);
 VAR_5->rx_fifo_size = FUNC_0(VAR_6, VAR_0,
       VAR_2);
 VAR_5->tx_fifo_size = FUNC_0(VAR_6, VAR_0,
       VAR_3);

 if (FUNC_3(VAR_4))
  FUNC_2(VAR_4->dev, "I2C features: %s=%u, %s=%u, %s=%u\n",
   "MAX_SPEED_MODE", VAR_5->max_speed_mode,
   "RX_BUFFER_DEPTH", VAR_5->rx_fifo_size,
   "TX_BUFFER_DEPTH", VAR_5->tx_fifo_size);
}
