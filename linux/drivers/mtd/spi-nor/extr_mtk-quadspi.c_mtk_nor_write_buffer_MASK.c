
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mtk_nor {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mtk_nor*,int ) ;
 int FUNC_1 (struct mtk_nor*,int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct mtk_nor *VAR_3, int VAR_4,
    const u8 *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;

 FUNC_1(VAR_3, VAR_4);

 VAR_7 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6 += 4) {
  VAR_8 = VAR_5[VAR_7 + 3]<<24 | VAR_5[VAR_7 + 2]<<16 |
         VAR_5[VAR_7 + 1]<<8 | VAR_5[VAR_7];
  VAR_7 += 4;
  FUNC_2(VAR_8, VAR_3->base + VAR_0);
 }
 return FUNC_0(VAR_3, VAR_1);
}
