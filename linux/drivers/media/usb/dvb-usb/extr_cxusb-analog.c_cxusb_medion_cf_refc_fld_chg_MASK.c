
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_usb_device {int dummy; } ;
struct cxusb_bt656_params {unsigned int line; scalar_t__ fmode; unsigned int linesamples; scalar_t__ buf; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct dvb_usb_device*,int ,char*,char,unsigned int,...) ;
 int FUNC_1 (scalar_t__,int ,unsigned int) ;

__attribute__((used)) static bool FUNC_2(struct dvb_usb_device *VAR_4,
      struct cxusb_bt656_params *VAR_5,
      bool VAR_6,
      unsigned int VAR_7,
      unsigned int VAR_8,
      unsigned char VAR_9[4])
{
 bool VAR_10 = (VAR_9[3] & VAR_2) ==
  VAR_1;
 unsigned int VAR_11;

 if (VAR_5->line == 0 || VAR_6 == VAR_10)
  return 0;

 if (VAR_5->fmode == VAR_3) {
  unsigned int VAR_12 = VAR_8 -
   VAR_5->linesamples;

  FUNC_0(VAR_4, VAR_0,
         "field %c after line %u field change\n",
         VAR_6 ? '1' : '2', VAR_5->line);

  if (VAR_5->buf && VAR_12 > 0) {
   FUNC_1(VAR_5->buf, 0, VAR_12);
   VAR_5->buf += VAR_12;

   FUNC_0(VAR_4, VAR_0,
          "field %c line %u %u samples still remaining (of %u)\n",
          VAR_6 ? '1' : '2',
          VAR_5->line, VAR_12,
          VAR_8);
  }

  VAR_5->line++;
 }

 VAR_11 = VAR_7 - VAR_5->line;
 if (VAR_5->buf && VAR_11 > 0) {
  FUNC_1(VAR_5->buf, 0, VAR_11 * VAR_8);
  VAR_5->buf += VAR_11 * VAR_8;

  FUNC_0(VAR_4, VAR_0,
         "field %c %u lines still remaining (of %u)\n",
         VAR_6 ? '1' : '2', VAR_11,
         VAR_7);
 }

 return 1;
}
