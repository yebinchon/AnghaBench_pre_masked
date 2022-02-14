
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned char u_char ;
struct TYPE_4__ {int debug_flags; unsigned char bchans; unsigned char faxchans; int mac_addr; } ;
typedef TYPE_1__ hysdn_card ;


 int VAR_0 ;

 unsigned char VAR_1 ;


 int FUNC_0 (TYPE_1__*,char*,...) ;
 int FUNC_1 (int ,unsigned char*,int) ;

int
FUNC_2(hysdn_card *VAR_2, unsigned char *VAR_3, int VAR_4)
{
 u_char *VAR_5;
 u_char VAR_6;

 if (VAR_2->debug_flags & VAR_0)
  FUNC_0(VAR_2, "SysReady Token data length %d", VAR_4);

 if (VAR_4 < 2) {
  FUNC_0(VAR_2, "SysReady Token Data to short");
  return (1);
 }
 for (VAR_5 = VAR_3, VAR_6 = 0; VAR_5 < (VAR_3 + VAR_4 - 2); VAR_5++)
  if ((VAR_6 & 0x80))
   VAR_6 = (((u_char) (VAR_6 << 1)) + 1) + *VAR_5;
  else
   VAR_6 = ((u_char) (VAR_6 << 1)) + *VAR_5;
 VAR_6 = ~VAR_6;
 if (VAR_6 != *(VAR_3 + VAR_4 - 1)) {
  FUNC_0(VAR_2, "SysReady Token Data invalid CRC");
  return (1);
 }
 VAR_4--;
 while (VAR_4 > 0) {

  if (*VAR_3 == VAR_1)
   return (0);

  if (VAR_4 < (*(VAR_3 + 1) + 2)) {
   FUNC_0(VAR_2, "token 0x%x invalid length %d", *VAR_3, *(VAR_3 + 1));
   return (1);
  }
  switch (*VAR_3) {
  case 130:
   if (*(VAR_3 + 1) != 1)
    return (1);
   VAR_2->bchans = *(VAR_3 + 2);
   break;

  case 129:
   if (*(VAR_3 + 1) != 1)
    return (1);
   VAR_2->faxchans = *(VAR_3 + 2);
   break;

  case 128:
   if (*(VAR_3 + 1) != 6)
    return (1);
   FUNC_1(VAR_2->mac_addr, VAR_3 + 2, 6);
   break;

  default:
   FUNC_0(VAR_2, "unknown token 0x%02x length %d", *VAR_3, *(VAR_3 + 1));
   break;
  }
  VAR_4 -= (*(VAR_3 + 1) + 2);
  VAR_3 += (*(VAR_3 + 1) + 2);
 }

 FUNC_0(VAR_2, "no end token found");
 return (1);
}
