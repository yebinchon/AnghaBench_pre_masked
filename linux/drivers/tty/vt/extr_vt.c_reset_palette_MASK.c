
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int * vc_palette; } ;


 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (struct vc_data*) ;

void FUNC_1(struct vc_data *VAR_3)
{
 int VAR_4, VAR_5;
 for (VAR_4=VAR_5=0; VAR_4<16; VAR_4++) {
  VAR_3->vc_palette[VAR_5++] = VAR_2[VAR_4];
  VAR_3->vc_palette[VAR_5++] = VAR_1[VAR_4];
  VAR_3->vc_palette[VAR_5++] = VAR_0[VAR_4];
 }
 FUNC_0(VAR_3);
}
