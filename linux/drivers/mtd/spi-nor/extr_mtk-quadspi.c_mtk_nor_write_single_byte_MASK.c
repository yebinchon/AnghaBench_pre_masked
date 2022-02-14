
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mtk_nor {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mtk_nor*,int ) ;
 int FUNC_1 (struct mtk_nor*,int) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct mtk_nor *VAR_2,
         int VAR_3, int VAR_4, u8 *VAR_5)
{
 int VAR_6, VAR_7;

 FUNC_1(VAR_2, VAR_3);

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  FUNC_2(*VAR_5++, VAR_2->base + VAR_1);
  VAR_7 = FUNC_0(VAR_2, VAR_0);
  if (VAR_7 < 0)
   return VAR_7;
 }
 return 0;
}
