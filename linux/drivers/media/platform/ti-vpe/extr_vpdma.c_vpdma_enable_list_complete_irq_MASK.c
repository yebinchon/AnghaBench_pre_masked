
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vpdma_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vpdma_data*,int) ;
 int FUNC_1 (struct vpdma_data*,int,int) ;

void FUNC_2(struct vpdma_data *VAR_2, int VAR_3,
  int VAR_4, bool VAR_5)
{
 u32 VAR_6 = VAR_1 + VAR_0 * VAR_3;
 u32 VAR_7;

 VAR_7 = FUNC_0(VAR_2, VAR_6);
 if (VAR_5)
  VAR_7 |= (1 << (VAR_4 * 2));
 else
  VAR_7 &= ~(1 << (VAR_4 * 2));
 FUNC_1(VAR_2, VAR_6, VAR_7);
}
