
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_10__ {int nbytes; int buswidth; } ;
struct TYPE_8__ {int nbytes; } ;
struct TYPE_7__ {int buswidth; } ;
struct TYPE_6__ {int opcode; } ;
struct spi_mem_op {TYPE_5__ dummy; TYPE_3__ addr; TYPE_2__ data; TYPE_1__ cmd; } ;
struct bcm_qspi {TYPE_4__* pdev; } ;
struct TYPE_9__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (struct bcm_qspi*,int ,int,int,int) ;
 int FUNC_1 (int *,char*,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct bcm_qspi *VAR_5,
           const struct spi_mem_op *VAR_6, int VAR_7)
{
 int VAR_8 = 0, VAR_9 = 0;
 u8 VAR_10 = VAR_6->cmd.opcode;
 int VAR_11 = VAR_6->data.buswidth ? VAR_6->data.buswidth : 128;
 int VAR_12 = VAR_6->addr.nbytes;
 int VAR_13 = 1;

 FUNC_1(&VAR_5->pdev->dev, "set flex mode w %x addrlen %x hp %d\n",
  VAR_11, VAR_12, VAR_7);

 if (VAR_12 == VAR_1)
  VAR_9 = VAR_2;

 VAR_9 |= (VAR_6->dummy.nbytes * 8) / VAR_6->dummy.buswidth;

 switch (VAR_11) {
 case 128:
  if (VAR_12 == VAR_0)

   VAR_13 = 0;
  break;
 case 130:
  VAR_8 = 0x00000001;
  if (VAR_7) {
   VAR_8 |= 0x00010100;
   VAR_9 = VAR_3;
  }
  break;
 case 129:
  VAR_8 = 0x00000002;
  if (VAR_7) {
   VAR_8 |= 0x00020200;
   VAR_9 |= VAR_3;
  }
  break;
 default:
  return -VAR_4;
 }

 FUNC_0(VAR_5, VAR_10, VAR_9, VAR_8, VAR_13);

 return 0;
}
