
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ctrlrequest {int dummy; } ;
struct cdns3_device {int setup_dma; int ep0_stage; scalar_t__ ep0_data_dir; } ;


 int VAR_0 ;
 int FUNC_0 (struct cdns3_device*,int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct cdns3_device *VAR_1)
{
 VAR_1->ep0_data_dir = 0;
 VAR_1->ep0_stage = VAR_0;
 FUNC_0(VAR_1, VAR_1->setup_dma,
          sizeof(struct usb_ctrlrequest), 0, 0);
}
