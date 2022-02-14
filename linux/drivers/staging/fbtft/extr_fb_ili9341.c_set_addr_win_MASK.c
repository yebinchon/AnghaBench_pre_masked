
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fbtft_par {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fbtft_par*,int ,...) ;

__attribute__((used)) static void FUNC_1(struct fbtft_par *VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 FUNC_0(VAR_3, VAR_0,
    (VAR_4 >> 8) & 0xFF, VAR_4 & 0xFF, (VAR_6 >> 8) & 0xFF, VAR_6 & 0xFF);

 FUNC_0(VAR_3, VAR_1,
    (VAR_5 >> 8) & 0xFF, VAR_5 & 0xFF, (VAR_7 >> 8) & 0xFF, VAR_7 & 0xFF);

 FUNC_0(VAR_3, VAR_2);
}
