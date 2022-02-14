
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct spear_smi {int status; int lock; scalar_t__ io_base; TYPE_1__* pdev; int cmd_complete; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct spear_smi*,int,int ) ;
 int FUNC_5 (struct spear_smi*,int) ;
 int FUNC_6 (int ,int,int ) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct spear_smi *VAR_13,
  u32 VAR_14, u32 VAR_15, u32 VAR_16)
{
 u32 VAR_17 = 0;
 int VAR_18;

 VAR_18 = FUNC_4(VAR_13, VAR_14, VAR_6);
 if (VAR_18)
  return VAR_18;

 VAR_18 = FUNC_5(VAR_13, VAR_14);
 if (VAR_18)
  return VAR_18;

 FUNC_1(&VAR_13->lock);

 VAR_17 = FUNC_3(VAR_13->io_base + VAR_4);
 FUNC_7((VAR_17 | VAR_8) & ~VAR_12, VAR_13->io_base + VAR_4);


 FUNC_7(VAR_15, VAR_13->io_base + VAR_7);

 FUNC_7((VAR_14 << VAR_0) | VAR_2 | VAR_10 | (VAR_16 << VAR_11),
   VAR_13->io_base + VAR_5);

 VAR_18 = FUNC_6(VAR_13->cmd_complete,
   VAR_13->status & VAR_9, VAR_3);

 if (VAR_18 == 0) {
  VAR_18 = -VAR_1;
  FUNC_0(&VAR_13->pdev->dev, "sector erase failed\n");
 } else if (VAR_18 > 0)
  VAR_18 = 0;


 FUNC_7(VAR_17, VAR_13->io_base + VAR_4);
 FUNC_7(0, VAR_13->io_base + VAR_5);

 FUNC_2(&VAR_13->lock);
 return VAR_18;
}
