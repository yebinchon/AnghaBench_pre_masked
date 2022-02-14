
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bttv {int saturation; int opt_uv_ratio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int,int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct bttv *VAR_4, int VAR_5)
{
 int VAR_6,VAR_7,VAR_8;

 VAR_4->saturation = VAR_5;


 VAR_6 = ((VAR_5 * VAR_4->opt_uv_ratio) / 50) >> 7;
 VAR_7 = (((VAR_5 * (100 - VAR_4->opt_uv_ratio) / 50) >>7)*180L)/254;
 VAR_8 = (VAR_6 >> 7) & 2;
 VAR_8 |= (VAR_7 >> 8) & 1;
 FUNC_1(VAR_6 & 0xff, VAR_2);
 FUNC_1(VAR_7 & 0xff, VAR_3);
 FUNC_0(VAR_8, ~3, VAR_0);
 FUNC_0(VAR_8, ~3, VAR_1);
}
