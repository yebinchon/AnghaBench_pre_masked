
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_usb_device {int dummy; } ;
struct cxusb_medion_auxbuf {unsigned int len; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct dvb_usb_device*,struct cxusb_medion_auxbuf*,unsigned int) ;
 unsigned int FUNC_2 (struct cxusb_medion_auxbuf*) ;
 int FUNC_3 (struct dvb_usb_device*,int ,char*,unsigned int) ;

__attribute__((used)) static bool FUNC_4(struct dvb_usb_device *VAR_1,
        struct cxusb_medion_auxbuf *VAR_2,
        unsigned int VAR_3)
{
 unsigned int VAR_4;

 if (FUNC_0(VAR_3 >= VAR_2->len))
  VAR_3 = VAR_2->len - 1;

 VAR_4 = VAR_2->len - FUNC_2(VAR_2);

 FUNC_3(VAR_1, VAR_0, "freespace is %u\n", VAR_4);

 if (VAR_4 >= VAR_3)
  return 1;

 VAR_3 -= VAR_4;

 FUNC_3(VAR_1, VAR_0, "will overwrite %u bytes of buffer\n",
        VAR_3);

 FUNC_1(VAR_1, VAR_2, VAR_3);

 return 0;
}
