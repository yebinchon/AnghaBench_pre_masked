
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int opcode; } ;
struct TYPE_6__ {int nbytes; } ;
struct TYPE_5__ {int buswidth; } ;
struct spi_mem_op {TYPE_4__ cmd; TYPE_2__ addr; TYPE_1__ data; } ;
struct bcm_qspi {TYPE_3__* pdev; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 int FUNC_0 (struct bcm_qspi*,int ,int ,int ,int ) ;
 int FUNC_1 (struct bcm_qspi*,int ,int ) ;
 int FUNC_2 (struct bcm_qspi*,int ,int ,int) ;
 int FUNC_3 (int *,char*,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct bcm_qspi *VAR_8,
          const struct spi_mem_op *VAR_9, int VAR_10)
{
 int VAR_11 = VAR_9->data.buswidth ? VAR_9->data.buswidth : 128;
 int VAR_12 = VAR_9->addr.nbytes;
 u32 VAR_13 = FUNC_1(VAR_8, VAR_0, VAR_2);

 FUNC_3(&VAR_8->pdev->dev, "set override mode w %x addrlen %x hp %d\n",
  VAR_11, VAR_12, VAR_10);

 switch (VAR_11) {
 case 128:

  VAR_13 &= ~(VAR_5 |
     VAR_4);
  break;
 case 129:

  VAR_13 &= ~VAR_4;
  VAR_13 |= VAR_5;
  break;
 case 130:

  VAR_13 &= ~VAR_5;
  VAR_13 |= VAR_4;
  break;
 default:
  return -VAR_7;
 }

 if (VAR_12 == VAR_1)

  VAR_13 |= VAR_3;
 else

  VAR_13 &= ~VAR_3;


 VAR_13 |= VAR_6;
 FUNC_2(VAR_8, VAR_0, VAR_2, VAR_13);
 FUNC_0(VAR_8, VAR_9->cmd.opcode, 0, 0, 0);

 return 0;
}
