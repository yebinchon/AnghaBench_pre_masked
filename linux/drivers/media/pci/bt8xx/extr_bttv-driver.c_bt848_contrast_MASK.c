
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bttv {int contrast; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int,int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct bttv *VAR_3, int VAR_4)
{
 int VAR_5,VAR_6;

 VAR_3->contrast = VAR_4;


 VAR_5 = (VAR_4 >> 7);
 VAR_6 = (VAR_5 >> 6) & 4;
 FUNC_1(VAR_5 & 0xff, VAR_0);
 FUNC_0(VAR_6, ~4, VAR_1);
 FUNC_0(VAR_6, ~4, VAR_2);
}
