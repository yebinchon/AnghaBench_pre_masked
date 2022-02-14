
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_en_priv {int loopback_ok; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct mlx4_en_priv *VAR_2, void *VAR_3)
{
 const unsigned char *VAR_4 = VAR_3 + VAR_0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_4[VAR_5] != (unsigned char)VAR_5)
   return;
 }

 VAR_2->loopback_ok = 1;
}
