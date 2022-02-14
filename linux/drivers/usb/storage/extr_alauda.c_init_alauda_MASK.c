
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_host_interface {TYPE_2__* endpoint; } ;
struct us_data {int pusb_dev; int extra_destructor; scalar_t__ extra; TYPE_3__* pusb_intf; } ;
struct alauda_info {int wr_ep; } ;
struct TYPE_6__ {struct usb_host_interface* cur_altsetting; } ;
struct TYPE_4__ {int bEndpointAddress; } ;
struct TYPE_5__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct us_data *VAR_5)
{
 struct alauda_info *VAR_6;
 struct usb_host_interface *VAR_7 = VAR_5->pusb_intf->cur_altsetting;
 FUNC_1();

 VAR_5->extra = FUNC_0(sizeof(struct alauda_info), VAR_0);
 if (!VAR_5->extra)
  return VAR_2;

 VAR_6 = (struct alauda_info *) VAR_5->extra;
 VAR_5->extra_destructor = VAR_4;

 VAR_6->wr_ep = FUNC_2(VAR_5->pusb_dev,
  VAR_7->endpoint[0].desc.bEndpointAddress
  & VAR_1);

 return VAR_3;
}
