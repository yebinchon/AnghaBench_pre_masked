
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct hostap_plx_priv {int cor_offset; int * attr_mem; } ;
struct TYPE_3__ {struct hostap_plx_priv* hw_priv; } ;
typedef TYPE_1__ local_info_t ;


 unsigned char VAR_0 ;
 unsigned char FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned char,int) ;
 unsigned char FUNC_3 (int *) ;
 int FUNC_4 (unsigned char,int *) ;

__attribute__((used)) static void FUNC_5(local_info_t *VAR_1, int VAR_2)
{
 unsigned char VAR_3;
 struct hostap_plx_priv *VAR_4 = VAR_1->hw_priv;

 if (VAR_4->attr_mem == ((void*)0)) {

  VAR_3 = FUNC_0(VAR_4->cor_offset);
  FUNC_2(VAR_3 | VAR_0, VAR_4->cor_offset);
  FUNC_1(10);
  FUNC_2(VAR_2, VAR_4->cor_offset + 2);
  FUNC_1(10);
  FUNC_2(VAR_3 & ~VAR_0, VAR_4->cor_offset);
  FUNC_1(10);
 } else {

  VAR_3 = FUNC_3(VAR_4->attr_mem + VAR_4->cor_offset);
  FUNC_4(VAR_3 | VAR_0,
         VAR_4->attr_mem + VAR_4->cor_offset);
  FUNC_1(10);
  FUNC_4(VAR_2, VAR_4->attr_mem + VAR_4->cor_offset + 2);
  FUNC_1(10);
  FUNC_4(VAR_3 & ~VAR_0,
         VAR_4->attr_mem + VAR_4->cor_offset);
  FUNC_1(10);
 }
}
