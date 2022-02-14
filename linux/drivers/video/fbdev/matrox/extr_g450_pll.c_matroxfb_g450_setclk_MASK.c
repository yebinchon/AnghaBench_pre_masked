
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct matrox_fb_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct matrox_fb_info*,unsigned int,unsigned int,unsigned int*,unsigned int*) ;
 int FUNC_1 (unsigned int*) ;
 unsigned int* FUNC_2 (int,int ) ;

int FUNC_3(struct matrox_fb_info *VAR_3, unsigned int VAR_4,
    unsigned int VAR_5)
{
 unsigned int* VAR_6;

 VAR_6 = FUNC_2(sizeof(*VAR_6) * VAR_2 * 2, VAR_1);
 if (VAR_6) {
  int VAR_7;

  VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_6 + VAR_2);
  FUNC_1(VAR_6);
  return VAR_7;
 }
 return -VAR_0;
}
