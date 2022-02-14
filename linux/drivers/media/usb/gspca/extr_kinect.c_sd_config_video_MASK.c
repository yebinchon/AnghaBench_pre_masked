
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {int dummy; } ;
struct sd {int stream_flag; scalar_t__ cam_tag; } ;
struct cam {int npkt; int nmodes; int cam_mode; } ;
struct gspca_dev {int xfer_ep; int pkt_size; struct cam cam; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_1,
       const struct usb_device_id *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_1;
 struct cam *VAR_4;

 VAR_3->cam_tag = 0;

 VAR_3->stream_flag = 0x80;

 VAR_4 = &VAR_1->cam;

 VAR_4->cam_mode = VAR_0;
 VAR_4->nmodes = FUNC_0(VAR_0);

 VAR_1->xfer_ep = 0x81;







 return 0;
}
