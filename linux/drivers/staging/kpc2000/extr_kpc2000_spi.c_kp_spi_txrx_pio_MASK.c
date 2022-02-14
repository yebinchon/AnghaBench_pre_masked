
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_transfer {unsigned int len; int * tx_buf; int * rx_buf; } ;
struct spi_device {struct kp_spi_controller_state* controller_state; } ;
struct kp_spi_controller_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char FUNC_0 (struct kp_spi_controller_state*,int ) ;
 int FUNC_1 (struct kp_spi_controller_state*,int ,int ) ;
 int FUNC_2 (struct kp_spi_controller_state*,int ,int) ;

__attribute__((used)) static unsigned
FUNC_3(struct spi_device *VAR_6, struct spi_transfer *VAR_7)
{
 struct kp_spi_controller_state *VAR_8 = VAR_6->controller_state;
 unsigned int VAR_9 = VAR_7->len;
 unsigned int VAR_10 = VAR_9;

 int VAR_11;
 int VAR_12;
 u8 *VAR_13 = VAR_7->rx_buf;
 const u8 *VAR_14 = VAR_7->tx_buf;
 int VAR_15 = 0;

 if (VAR_14) {
  for (VAR_11 = 0 ; VAR_11 < VAR_10 ; VAR_11++) {
   char VAR_16 = *VAR_14++;

   VAR_12 = FUNC_1(VAR_8, VAR_1,
            VAR_4);
   if (VAR_12 < 0)
    goto out;

   FUNC_2(VAR_8, VAR_5, VAR_16);
   VAR_15++;
  }
 }
 else if (VAR_13) {
  for (VAR_11 = 0 ; VAR_11 < VAR_10 ; VAR_11++) {
   char VAR_17 = 0;

   FUNC_2(VAR_8, VAR_5, 0x00);
   VAR_12 = FUNC_1(VAR_8, VAR_1,
            VAR_3);
   if (VAR_12 < 0)
    goto out;

   VAR_17 = FUNC_0(VAR_8, VAR_0);
   *VAR_13++ = VAR_17;
   VAR_15++;
  }
 }

 if (FUNC_1(VAR_8, VAR_1,
        VAR_2) < 0) {


 }

out:
 return VAR_15;
}
