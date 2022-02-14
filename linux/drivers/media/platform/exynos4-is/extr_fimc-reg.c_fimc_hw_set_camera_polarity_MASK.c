
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fimc_source_info {int flags; } ;
struct fimc_dev {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

int FUNC_2(struct fimc_dev *VAR_10,
    struct fimc_source_info *VAR_11)
{
 u32 VAR_12 = FUNC_0(VAR_10->regs + VAR_0);

 VAR_12 &= ~(VAR_4 | VAR_5 |
   VAR_2 | VAR_3 |
   VAR_1);

 if (VAR_11->flags & VAR_8)
  VAR_12 |= VAR_4;

 if (VAR_11->flags & VAR_9)
  VAR_12 |= VAR_5;

 if (VAR_11->flags & VAR_7)
  VAR_12 |= VAR_2;

 if (VAR_11->flags & VAR_7)
  VAR_12 |= VAR_3;

 if (VAR_11->flags & VAR_6)
  VAR_12 |= VAR_1;

 FUNC_1(VAR_12, VAR_10->regs + VAR_0);

 return 0;
}
