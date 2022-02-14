
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fbtft_par {int dummy; } ;


 int FUNC_0 (struct fbtft_par*,int) ;

__attribute__((used)) static int FUNC_1(struct fbtft_par *VAR_0, u32 *VAR_1)
{

 VAR_1[0] &= 0x7F;

 FUNC_0(VAR_0, 0x21);
 FUNC_0(VAR_0, 0x80 | VAR_1[0]);
 FUNC_0(VAR_0, 0x20);

 return 0;
}
