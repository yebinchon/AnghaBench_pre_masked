
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mtk_nor {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct mtk_nor*,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct mtk_nor *VAR_5, u8 VAR_6,
       u8 *VAR_7, int VAR_8, u8 *VAR_9, int VAR_10)
{
 int VAR_11 = 1 + VAR_8 + VAR_10;
 int VAR_12, VAR_13, VAR_14;

 if (VAR_11 > VAR_3)
  return -VAR_0;

 FUNC_4(VAR_11 * 8, VAR_5->base + VAR_1);


 VAR_14 = VAR_2 - 1;


 FUNC_4(VAR_6, VAR_5->base + FUNC_0(VAR_14));
 VAR_14--;


 for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++, VAR_14--)
  FUNC_4(VAR_7[VAR_12], VAR_5->base + FUNC_0(VAR_14));


 while (VAR_14 >= 0) {
  FUNC_4(0, VAR_5->base + FUNC_0(VAR_14));
  VAR_14--;
 }

 VAR_13 = FUNC_2(VAR_5, VAR_4);
 if (VAR_13)
  return VAR_13;


 VAR_14 = VAR_10 - 1;


 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++, VAR_14--)
  VAR_9[VAR_12] = FUNC_3(VAR_5->base + FUNC_1(VAR_14));

 return 0;
}
