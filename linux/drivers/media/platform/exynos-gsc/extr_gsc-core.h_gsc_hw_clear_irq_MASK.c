
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gsc_dev {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct gsc_dev *VAR_5, int VAR_6)
{
 u32 VAR_7 = FUNC_0(VAR_5->regs + VAR_0);
 if (VAR_6 == VAR_2)
  VAR_7 |= VAR_4;
 else if (VAR_6 == VAR_1)
  VAR_7 |= VAR_3;
 FUNC_1(VAR_7, VAR_5->regs + VAR_0);
}
