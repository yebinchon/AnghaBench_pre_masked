
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hsdk_rst {scalar_t__ regs_rst; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int,int,int,int ) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct hsdk_rst *VAR_6)
{
 u32 VAR_7;

 VAR_7 = FUNC_0(VAR_6->regs_rst + VAR_0);
 VAR_7 &= ~VAR_2;
 VAR_7 |= VAR_1 << VAR_3;
 VAR_7 |= VAR_4;
 FUNC_2(VAR_7, VAR_6->regs_rst + VAR_0);


 return FUNC_1(VAR_6->regs_rst + VAR_0, VAR_7,
  !(VAR_7 & VAR_4), 5, VAR_5);
}
