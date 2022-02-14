
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dac_info {int data; int (* dac_write_regs ) (int ,int *,int) ;} ;


 int FUNC_0 (int ,int *,int) ;

__attribute__((used)) static inline void FUNC_1(struct dac_info *VAR_0, u8 VAR_1, u8 VAR_2)
{
 u8 VAR_3[2] = {VAR_1, VAR_2};
 VAR_0->dac_write_regs(VAR_0->data, VAR_3, 1);
}
