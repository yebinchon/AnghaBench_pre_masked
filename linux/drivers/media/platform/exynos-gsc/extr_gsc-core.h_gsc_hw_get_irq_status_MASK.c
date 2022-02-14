
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
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline int FUNC_1(struct gsc_dev *VAR_4)
{
 u32 VAR_5 = FUNC_0(VAR_4->regs + VAR_0);
 if (VAR_5 & VAR_3)
  return VAR_2;
 else
  return VAR_1;

}
