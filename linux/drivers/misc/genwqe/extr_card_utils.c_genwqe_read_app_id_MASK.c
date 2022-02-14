
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct genwqe_dev {int app_unitcfg; } ;


 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int,int) ;

int FUNC_3(struct genwqe_dev *VAR_0, char *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;
 u32 VAR_5 = (u32)VAR_0->app_unitcfg;

 FUNC_1(VAR_1, 0, VAR_2);
 for (VAR_3 = 0, VAR_4 = 0; VAR_4 < FUNC_2(VAR_2, 4); VAR_4++) {
  char VAR_6 = (char)((VAR_5 >> (24 - VAR_4*8)) & 0xff);

  if (VAR_6 == ' ')
   continue;
  VAR_1[VAR_3++] = FUNC_0(VAR_6) ? VAR_6 : 'X';
 }
 return VAR_3;
}
