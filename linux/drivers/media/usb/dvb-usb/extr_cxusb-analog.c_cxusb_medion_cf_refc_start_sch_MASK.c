
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_usb_device {int dummy; } ;
struct cxusb_bt656_params {int fmode; int pos; scalar_t__ linesamples; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct dvb_usb_device*,int ,char*,int ) ;

__attribute__((used)) static void FUNC_1(struct dvb_usb_device *VAR_9,
        struct cxusb_bt656_params *VAR_10,
        bool VAR_11,
        unsigned char VAR_12[4])
{
 bool VAR_13 = (VAR_12[3] & VAR_2) ==
  VAR_1;
 bool VAR_14 = (VAR_12[3] & VAR_3) ==
  VAR_4;
 bool VAR_15 = (VAR_12[3] & VAR_5) ==
  VAR_6;

 if (!VAR_14 || VAR_11 != VAR_13)
  return;

 if (!VAR_15) {
  FUNC_0(VAR_9, VAR_0, "line start @ pos %u\n",
         VAR_10->pos);

  VAR_10->linesamples = 0;
  VAR_10->fmode = VAR_7;
 } else {
  FUNC_0(VAR_9, VAR_0, "VBI start @ pos %u\n",
         VAR_10->pos);

  VAR_10->fmode = VAR_8;
 }
}
