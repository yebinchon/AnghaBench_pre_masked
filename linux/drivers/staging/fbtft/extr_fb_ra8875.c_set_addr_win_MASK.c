
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fbtft_par {int dummy; } ;


 int FUNC_0 (struct fbtft_par*,int,...) ;

__attribute__((used)) static void FUNC_1(struct fbtft_par *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{

 FUNC_0(VAR_0, 0x30, VAR_1 & 0x00FF);
 FUNC_0(VAR_0, 0x31, (VAR_1 & 0xFF00) >> 8);
 FUNC_0(VAR_0, 0x32, VAR_2 & 0x00FF);
 FUNC_0(VAR_0, 0x33, (VAR_2 & 0xFF00) >> 8);
 FUNC_0(VAR_0, 0x34, (VAR_1 + VAR_3) & 0x00FF);
 FUNC_0(VAR_0, 0x35, ((VAR_1 + VAR_3) & 0xFF00) >> 8);
 FUNC_0(VAR_0, 0x36, (VAR_2 + VAR_4) & 0x00FF);
 FUNC_0(VAR_0, 0x37, ((VAR_2 + VAR_4) & 0xFF00) >> 8);


 FUNC_0(VAR_0, 0x46, VAR_1 & 0xff);
 FUNC_0(VAR_0, 0x47, (VAR_1 >> 8) & 0x03);
 FUNC_0(VAR_0, 0x48, VAR_2 & 0xff);
 FUNC_0(VAR_0, 0x49, (VAR_2 >> 8) & 0x01);

 FUNC_0(VAR_0, 0x02);
}
