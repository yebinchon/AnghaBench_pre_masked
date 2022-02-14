
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;



 char const* FUNC_0 (int ,char*,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static const char *FUNC_1(unsigned int VAR_1,
          unsigned int VAR_2,
          unsigned int VAR_3)
{
 unsigned int VAR_4;

 switch (VAR_1) {
 case 130:
  VAR_4 = 0xa;
  break;

 case 129:
  if (VAR_3 == 0x11111112)
   VAR_1 = 0x1d;

  if (VAR_3 == 0x11111111 || VAR_3 == 0x11111112)
   VAR_4 = 0xa;
  else if (VAR_3 == 0x11111113)
   VAR_4 = 0xb;
  else if (VAR_3 == 0x11111133)
   VAR_4 = 0xc;
  else
   VAR_4 = 0xd;

  break;

 case 128:
  if (VAR_3 == 0x11111111)
   VAR_4 = 0xa;
  else
   VAR_4 = 0xb;

  break;

 default:
  VAR_4 = 0x0;
  break;
 }

 return FUNC_0(VAR_0, "Rev%X (%x - 0:%X)", VAR_4, VAR_1,
    VAR_2);
}
