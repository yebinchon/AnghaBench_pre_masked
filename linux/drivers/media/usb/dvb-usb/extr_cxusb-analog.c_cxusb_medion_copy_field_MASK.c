
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_usb_device {int dummy; } ;
struct cxusb_medion_auxbuf {int dummy; } ;
struct cxusb_bt656_params {unsigned int line; scalar_t__ pos; } ;


 int VAR_0 ;
 unsigned char* VAR_1 ;
 int FUNC_0 (struct cxusb_medion_auxbuf*,scalar_t__,unsigned char*,int) ;
 scalar_t__ FUNC_1 (struct dvb_usb_device*,struct cxusb_bt656_params*,int,unsigned int,unsigned int,unsigned char*) ;
 scalar_t__ FUNC_2 (struct dvb_usb_device*,struct cxusb_bt656_params*,int,unsigned int,unsigned int,unsigned char*) ;
 int FUNC_3 (struct dvb_usb_device*,struct cxusb_medion_auxbuf*,struct cxusb_bt656_params*,unsigned int,unsigned char) ;
 int FUNC_4 (struct dvb_usb_device*,int ,char*,scalar_t__,unsigned int) ;

__attribute__((used)) static bool FUNC_5(struct dvb_usb_device *VAR_2,
        struct cxusb_medion_auxbuf *VAR_3,
        struct cxusb_bt656_params *VAR_4,
        bool VAR_5,
        unsigned int VAR_6,
        unsigned int VAR_7)
{
 while (VAR_4->line < VAR_6) {
  unsigned char VAR_8;

  if (!FUNC_0(VAR_3, VAR_4->pos, &VAR_8, 1))
   break;

  if (VAR_8 == VAR_1[0]) {
   unsigned char VAR_9[4];

   VAR_9[0] = VAR_8;
   if (!FUNC_0(VAR_3, VAR_4->pos + 1,
            VAR_9 + 1, 3))
    break;

   if (VAR_9[1] == VAR_1[1] &&
       VAR_9[2] == VAR_1[2]) {




    if (FUNC_2(VAR_2,
         VAR_4,
         VAR_5,
         VAR_6,
         VAR_7,
         VAR_9))
     return 1;

    if (FUNC_1(VAR_2, VAR_4,
            VAR_5,
            VAR_6,
            VAR_7,
            VAR_9))
     VAR_4->pos += 4;

    continue;
   }
  }

  if (!FUNC_3(VAR_2, VAR_3, VAR_4,
            VAR_7, VAR_8))
   break;
 }

 if (VAR_4->line < VAR_6) {
  FUNC_4(VAR_2, VAR_0,
         "end of buffer pos = %u, line = %u\n",
         VAR_4->pos, VAR_4->line);
  return 0;
 }

 return 1;
}
