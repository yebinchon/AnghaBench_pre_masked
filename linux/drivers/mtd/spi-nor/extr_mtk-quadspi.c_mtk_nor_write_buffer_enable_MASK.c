
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mtk_nor {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int,int,int,int) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct mtk_nor *VAR_2)
{
 u8 VAR_3;





 FUNC_1(VAR_1, VAR_2->base + VAR_0);
 return FUNC_0(VAR_2->base + VAR_0, VAR_3,
      0x01 == (VAR_3 & 0x01), 100, 10000);
}
