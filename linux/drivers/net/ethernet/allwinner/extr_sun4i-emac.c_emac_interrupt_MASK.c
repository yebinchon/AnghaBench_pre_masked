
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct emac_board_info {int emacrx_completed_flag; int lock; scalar_t__ membase; int dev; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,struct emac_board_info*,int) ;
 int FUNC_3 (struct net_device*,char*,int) ;
 struct emac_board_info* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct emac_board_info*) ;
 void* FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (unsigned int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_3, void *VAR_4)
{
 struct net_device *VAR_5 = VAR_4;
 struct emac_board_info *VAR_6 = FUNC_4(VAR_5);
 int VAR_7;
 unsigned long VAR_8;
 unsigned int VAR_9;




 FUNC_7(&VAR_6->lock, VAR_8);


 FUNC_9(0, VAR_6->membase + VAR_0);



 VAR_7 = FUNC_6(VAR_6->membase + VAR_1);

 FUNC_9(VAR_7, VAR_6->membase + VAR_1);

 if (FUNC_5(VAR_6))
  FUNC_0(VAR_6->dev, "emac interrupt %02x\n", VAR_7);


 if ((VAR_7 & 0x100) && (VAR_6->emacrx_completed_flag == 1)) {

  VAR_6->emacrx_completed_flag = 0;
  FUNC_1(VAR_5);
 }


 if (VAR_7 & (0x01 | 0x02))
  FUNC_2(VAR_5, VAR_6, VAR_7);

 if (VAR_7 & (0x04 | 0x08))
  FUNC_3(VAR_5, " ab : %x\n", VAR_7);


 if (VAR_6->emacrx_completed_flag == 1) {
  VAR_9 = FUNC_6(VAR_6->membase + VAR_0);
  VAR_9 |= (0xf << 0) | (0x01 << 8);
  FUNC_9(VAR_9, VAR_6->membase + VAR_0);
 }
 FUNC_8(&VAR_6->lock, VAR_8);

 return VAR_2;
}
