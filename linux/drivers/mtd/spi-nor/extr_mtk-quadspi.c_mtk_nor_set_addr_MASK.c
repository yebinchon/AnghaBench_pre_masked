
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_nor {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mtk_nor*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mtk_nor *VAR_2, u32 VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_2);

 for (VAR_4 = 0; VAR_4 < 3; VAR_4++) {
  FUNC_1(VAR_3 & 0xff, VAR_2->base + VAR_0 + VAR_4 * 4);
  VAR_3 >>= 8;
 }

 FUNC_1(VAR_3 & 0xff, VAR_2->base + VAR_1);
}
