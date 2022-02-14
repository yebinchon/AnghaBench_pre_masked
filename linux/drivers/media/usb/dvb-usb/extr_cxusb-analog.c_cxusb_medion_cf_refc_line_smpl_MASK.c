
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_usb_device {int dummy; } ;
struct cxusb_bt656_params {unsigned int linesamples; int line; int fmode; scalar_t__ buf; int pos; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dvb_usb_device*,int ,char*,char,int ,...) ;
 int FUNC_1 (scalar_t__,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct dvb_usb_device *VAR_4,
        struct cxusb_bt656_params *VAR_5,
        bool VAR_6,
        unsigned int VAR_7,
        unsigned char VAR_8[4])
{
 bool VAR_9 = (VAR_8[3] & VAR_1) ==
  VAR_2;
 unsigned int VAR_10;

 if (VAR_9)
  FUNC_0(VAR_4, VAR_0,
         "SAV in line samples @ line %u, pos %u\n",
         VAR_5->line, VAR_5->pos);

 VAR_10 = VAR_7 - VAR_5->linesamples;
 if (VAR_5->buf && VAR_10 > 0) {
  FUNC_1(VAR_5->buf, 0, VAR_10);
  VAR_5->buf += VAR_10;

  FUNC_0(VAR_4, VAR_0,
         "field %c line %u %u samples still remaining (of %u)\n",
         VAR_6 ? '1' : '2', VAR_5->line, VAR_10,
         VAR_7);
 }

 VAR_5->fmode = VAR_3;
 VAR_5->line++;
}
