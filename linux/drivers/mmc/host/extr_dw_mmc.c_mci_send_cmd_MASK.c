
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct dw_mci_slot {TYPE_1__* mmc; struct dw_mci* host; } ;
struct dw_mci {scalar_t__ regs; } ;
struct TYPE_2__ {int class_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (struct dw_mci*,unsigned int) ;
 int FUNC_2 (struct dw_mci*,int ,unsigned int) ;
 scalar_t__ FUNC_3 (scalar_t__,unsigned int,int,int,int) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct dw_mci_slot *VAR_5, u32 VAR_6, u32 VAR_7)
{
 struct dw_mci *VAR_8 = VAR_5->host;
 unsigned int VAR_9 = 0;

 FUNC_2(VAR_8, VAR_1, VAR_7);
 FUNC_4();
 FUNC_1(VAR_8, VAR_6);
 FUNC_2(VAR_8, VAR_0, VAR_3 | VAR_6);

 if (FUNC_3(VAR_8->regs + VAR_2, VAR_9,
          !(VAR_9 & VAR_3),
          1, 500 * VAR_4))
  FUNC_0(&VAR_5->mmc->class_dev,
   "Timeout sending command (cmd %#x arg %#x status %#x)\n",
   VAR_6, VAR_7, VAR_9);
}
