
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sun4i_csi {scalar_t__ regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct sun4i_csi*,unsigned int) ;
 int FUNC_2 (struct sun4i_csi*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct sun4i_csi *VAR_2, unsigned int VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_2->regs + VAR_1);
 unsigned int VAR_5;


 VAR_5 = !(VAR_4 & VAR_0);


 FUNC_2(VAR_2, VAR_5, VAR_3);


 return FUNC_1(VAR_2, VAR_5);
}
