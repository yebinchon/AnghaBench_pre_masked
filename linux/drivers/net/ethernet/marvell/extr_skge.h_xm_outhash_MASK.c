
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct skge_hw {int dummy; } ;


 int FUNC_0 (struct skge_hw const*,int,int,int) ;

__attribute__((used)) static inline void FUNC_1(const struct skge_hw *VAR_0, int VAR_1, int VAR_2,
       const u8 *VAR_3)
{
 FUNC_0(VAR_0, VAR_1, VAR_2, (u16)VAR_3[0] | ((u16)VAR_3[1] << 8));
 FUNC_0(VAR_0, VAR_1, VAR_2+2, (u16)VAR_3[2] | ((u16)VAR_3[3] << 8));
 FUNC_0(VAR_0, VAR_1, VAR_2+4, (u16)VAR_3[4] | ((u16)VAR_3[5] << 8));
 FUNC_0(VAR_0, VAR_1, VAR_2+6, (u16)VAR_3[6] | ((u16)VAR_3[7] << 8));
}
