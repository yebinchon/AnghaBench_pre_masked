
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int transfer ;
struct TYPE_3__ {int controller; } ;
struct usb_hcd {TYPE_1__ self; } ;
struct spi_transfer {int* tx_buf; int len; } ;
struct spi_message {int dummy; } ;
struct spi_device {int dummy; } ;
struct max3421_hcd {TYPE_2__* tx; } ;
struct TYPE_4__ {int* data; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int,int ) ;
 struct max3421_hcd* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (struct spi_transfer*,int ,int) ;
 int FUNC_3 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_4 (struct spi_message*) ;
 int FUNC_5 (struct spi_device*,struct spi_message*) ;
 struct spi_device* FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(struct usb_hcd *VAR_3, unsigned int VAR_4, u8 VAR_5)
{
 struct spi_device *VAR_6 = FUNC_6(VAR_3->self.controller);
 struct max3421_hcd *VAR_7 = FUNC_1(VAR_3);
 struct spi_transfer VAR_8;
 struct spi_message VAR_9;

 FUNC_2(&VAR_8, 0, sizeof(VAR_8));

 FUNC_4(&VAR_9);

 VAR_7->tx->data[0] =
  (FUNC_0(VAR_4, VAR_2) |
   FUNC_0(VAR_1, VAR_0));
 VAR_7->tx->data[1] = VAR_5;

 VAR_8.tx_buf = VAR_7->tx->data;
 VAR_8.len = 2;

 FUNC_3(&VAR_8, &VAR_9);
 FUNC_5(VAR_6, &VAR_9);
}
