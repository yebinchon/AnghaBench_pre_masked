
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vpdma_data {int dummy; } ;


 int FUNC_0 (struct vpdma_data*,int) ;
 int FUNC_1 (struct vpdma_data*,int,int) ;

__attribute__((used)) static void FUNC_2(struct vpdma_data *VAR_0, int VAR_1, u32 VAR_2,
  u32 VAR_3, int VAR_4)
{
 u32 VAR_5 = FUNC_0(VAR_0, VAR_1);

 VAR_5 &= ~(VAR_3 << VAR_4);
 VAR_5 |= (VAR_2 & VAR_3) << VAR_4;

 FUNC_1(VAR_0, VAR_1, VAR_5);
}
