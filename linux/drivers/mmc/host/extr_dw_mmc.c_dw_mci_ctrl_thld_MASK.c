
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned int u32 ;
typedef unsigned int u16 ;
struct mmc_data {unsigned int blksz; int flags; } ;
struct dw_mci {scalar_t__ verid; scalar_t__ timing; int data_shift; unsigned int fifo_depth; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (struct dw_mci*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct dw_mci *VAR_9, struct mmc_data *VAR_10)
{
 unsigned int VAR_11 = VAR_10->blksz;
 u32 VAR_12, VAR_13;
 u16 VAR_14;
 u8 VAR_15;





 if (VAR_9->verid < VAR_1 ||
  (VAR_9->verid < VAR_2 && VAR_10->flags & VAR_3))
  return;





 if (VAR_10->flags & VAR_3 &&
  VAR_9->timing != VAR_5)
  goto disable;

 if (VAR_10->flags & VAR_3)
  VAR_15 = VAR_8;
 else
  VAR_15 = VAR_7;

 if (VAR_9->timing != VAR_4 &&
     VAR_9->timing != VAR_6 &&
     VAR_9->timing != VAR_5)
  goto disable;

 VAR_12 = VAR_11 / (1 << VAR_9->data_shift);
 VAR_13 = VAR_9->fifo_depth;

 if (VAR_12 > VAR_13)
  goto disable;






 VAR_14 = VAR_11;
 FUNC_1(VAR_9, VAR_0, FUNC_0(VAR_14, VAR_15));
 return;

disable:
 FUNC_1(VAR_9, VAR_0, 0);
}
