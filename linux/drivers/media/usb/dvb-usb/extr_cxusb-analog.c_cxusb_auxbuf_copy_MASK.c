
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxusb_medion_auxbuf {unsigned int paylen; scalar_t__ buf; } ;


 int FUNC_0 (unsigned char*,scalar_t__,unsigned int) ;

__attribute__((used)) static bool FUNC_1(struct cxusb_medion_auxbuf *VAR_0,
         unsigned int VAR_1, unsigned char *VAR_2,
         unsigned int VAR_3)
{
 if (VAR_1 + VAR_3 > VAR_0->paylen)
  return 0;

 FUNC_0(VAR_2, VAR_0->buf + VAR_1, VAR_3);

 return 1;
}
