
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cc770_priv {scalar_t__ reg_base; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static u8 FUNC_4(const struct cc770_priv *VAR_1,
          int VAR_2)
{
 unsigned long VAR_3 = (unsigned long)VAR_1->reg_base;
 unsigned long VAR_4;
 u8 VAR_5;

 FUNC_2(&VAR_0, VAR_4);
 FUNC_1(VAR_2, VAR_3);
 VAR_5 = FUNC_0(VAR_3 + 1);
 FUNC_3(&VAR_0, VAR_4);

 return VAR_5;
}
