
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int read_proto; int addr_width; int read_dummy; int read_opcode; } ;
struct nxp_spifi {int mcmd; TYPE_1__ nor; int dev; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct nxp_spifi *VAR_3)
{
 switch (VAR_3->nor.read_proto) {
 case 130:
  VAR_3->mcmd = VAR_1;
  break;
 case 129:
 case 128:
  VAR_3->mcmd = VAR_2;
  break;
 default:
  FUNC_3(VAR_3->dev, "unsupported SPI read mode\n");
  return -VAR_0;
 }


 if (VAR_3->nor.addr_width < 1 || VAR_3->nor.addr_width > 4)
  return -VAR_0;

 VAR_3->mcmd |= FUNC_2(VAR_3->nor.read_opcode) |
         FUNC_1(VAR_3->nor.read_dummy / 8) |
         FUNC_0(VAR_3->nor.addr_width + 1);

 return 0;
}
