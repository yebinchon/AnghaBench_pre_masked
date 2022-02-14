
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pkt_attrib {int encrypt; int bswenc; } ;
__attribute__((used)) static u8 FUNC_0(struct pkt_attrib *VAR_0)
{
 u8 VAR_1 = 0;
 if ((VAR_0->encrypt > 0) && !VAR_0->bswenc) {
  switch (VAR_0->encrypt) {

  case 128:
  case 129:
  case 131:
  case 130:
   VAR_1 = 1;
   break;

  case 133:
   VAR_1 = 3;
   break;

  case 132:
  default:
   break;
  }
 }
 return VAR_1;
}
