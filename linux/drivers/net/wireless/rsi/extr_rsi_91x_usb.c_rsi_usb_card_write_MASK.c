
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rsi_hw {scalar_t__ rsi_dev; } ;
struct rsi_91x_usbdev {int* tx_buffer; int* bulkout_endpoint_addr; int write_fail; int usbdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ,void*,int,int*,int) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct rsi_hw *VAR_3,
         u8 *VAR_4,
         u16 VAR_5,
         u8 VAR_6)
{
 struct rsi_91x_usbdev *VAR_7 = (struct rsi_91x_usbdev *)VAR_3->rsi_dev;
 int VAR_8;
 u8 *VAR_9 = VAR_7->tx_buffer;
 int VAR_10;
 int VAR_11 = VAR_7->bulkout_endpoint_addr[VAR_6 - 1];

 FUNC_1(VAR_9, 0, VAR_5 + VAR_2);
 FUNC_0(VAR_9 + VAR_2, VAR_4, VAR_5);
 VAR_5 += VAR_2;
 VAR_10 = VAR_5;
 VAR_8 = FUNC_3(VAR_7->usbdev,
         FUNC_4(VAR_7->usbdev, VAR_11),
         (void *)VAR_9,
         (int)VAR_5,
         &VAR_10,
         VAR_1 * 5);

 if (VAR_8 < 0) {
  FUNC_2(VAR_0,
   "Card write failed with error code :%10d\n", VAR_8);
  VAR_7->write_fail = 1;
 }
 return VAR_8;
}
