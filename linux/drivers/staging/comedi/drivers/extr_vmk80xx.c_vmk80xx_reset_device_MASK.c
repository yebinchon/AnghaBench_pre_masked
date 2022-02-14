
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmk80xx_private {int usb_tx_buf; int ep_tx; } ;
struct comedi_device {struct vmk80xx_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,size_t) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (struct comedi_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_2)
{
 struct vmk80xx_private *VAR_3 = VAR_2->private;
 size_t VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(VAR_3->ep_tx);
 FUNC_0(VAR_3->usb_tx_buf, 0, VAR_4);
 VAR_5 = FUNC_2(VAR_2, VAR_0);
 if (VAR_5)
  return VAR_5;

 return FUNC_2(VAR_2, VAR_1);
}
