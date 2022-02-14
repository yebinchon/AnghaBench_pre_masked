
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct radeonfb_info {int dummy; } ;


 unsigned int FUNC_0 (struct radeonfb_info*,unsigned int) ;
 int FUNC_1 (struct radeonfb_info*,unsigned int,unsigned int) ;

void FUNC_2(struct radeonfb_info *VAR_0, unsigned int VAR_1,
        u32 VAR_2, u32 VAR_3)
{
 unsigned int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1);
 VAR_4 &= (VAR_3);
 VAR_4 |= (VAR_2);
 FUNC_1(VAR_0, VAR_1, VAR_4);
}
