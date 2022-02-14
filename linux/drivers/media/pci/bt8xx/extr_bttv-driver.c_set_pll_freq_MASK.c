
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bttv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned char,int ) ;

__attribute__((used)) static void FUNC_1(struct bttv *VAR_4, unsigned int VAR_5, unsigned int VAR_6)
{
 unsigned char VAR_7, VAR_8, VAR_9;


 VAR_5/=4;
 VAR_6/=4;

 VAR_6*=12;
 VAR_9=VAR_6/VAR_5;

 VAR_6=(VAR_6%VAR_5)*256;
 VAR_8=VAR_6/VAR_5;

 VAR_6=(VAR_6%VAR_5)*256;
 VAR_7=VAR_6/VAR_5;

 FUNC_0(VAR_7, VAR_1);
 FUNC_0(VAR_8, VAR_0);
 FUNC_0(VAR_9|VAR_2, VAR_3);
}
