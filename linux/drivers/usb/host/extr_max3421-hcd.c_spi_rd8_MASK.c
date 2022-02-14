
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int transfer ;
struct TYPE_4__ {int controller; } ;
struct usb_hcd {TYPE_1__ self; } ;
struct spi_transfer {int* tx_buf; int len; int * rx_buf; } ;
struct spi_message {int dummy; } ;
struct spi_device {int dummy; } ;
struct max3421_hcd {TYPE_3__* rx; TYPE_2__* tx; } ;
struct TYPE_6__ {int * data; } ;
struct TYPE_5__ {int* data; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int,int ) ;
 struct max3421_hcd* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (struct spi_transfer*,int ,int) ;
 int FUNC_3 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_4 (struct spi_message*) ;
 int FUNC_5 (struct spi_device*,struct spi_message*) ;
 struct spi_device* FUNC_6 (int ) ;

__attribute__((used)) static u8
FUNC_7(struct usb_hcd *VAR_3, unsigned int VAR_4)
{
 struct max3421_hcd *VAR_5 = FUNC_1(VAR_3);
 struct spi_device *VAR_6 = FUNC_6(VAR_3->self.controller);
 struct spi_transfer VAR_7;
 struct spi_message VAR_8;

 FUNC_2(&VAR_7, 0, sizeof(VAR_7));

 FUNC_4(&VAR_8);

 VAR_5->tx->data[0] =
  (FUNC_0(VAR_4, VAR_2) |
   FUNC_0(VAR_0, VAR_1));

 VAR_7.tx_buf = VAR_5->tx->data;
 VAR_7.rx_buf = VAR_5->rx->data;
 VAR_7.len = 2;

 FUNC_3(&VAR_7, &VAR_8);
 FUNC_5(VAR_6, &VAR_8);

 return VAR_5->rx->data[1];
}
