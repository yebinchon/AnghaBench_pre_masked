
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int dummy; } ;
typedef scalar_t__ dma_addr_t ;


 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*,scalar_t__,int,int) ;

__attribute__((used)) static void FUNC_2(struct bnx2x *VAR_0, dma_addr_t VAR_1,
          u32 VAR_2, u32 VAR_3)
{
 int VAR_4 = FUNC_0(VAR_0);
 int VAR_5 = 0;

 while (VAR_3 > VAR_4) {
  FUNC_1(VAR_0, VAR_1 + VAR_5,
     VAR_2 + VAR_5, VAR_4);
  VAR_5 += VAR_4 * 4;
  VAR_3 -= VAR_4;
 }

 FUNC_1(VAR_0, VAR_1 + VAR_5, VAR_2 + VAR_5, VAR_3);
}
