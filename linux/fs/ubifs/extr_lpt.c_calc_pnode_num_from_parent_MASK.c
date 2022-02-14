
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_nnode {int num; } ;
struct ubifs_info {int lpt_hght; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(const struct ubifs_info *VAR_2,
          struct ubifs_nnode *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6 = VAR_2->lpt_hght - 1, VAR_7 = VAR_3->num, VAR_8 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  VAR_8 <<= VAR_1;
  VAR_8 |= VAR_7 & (VAR_0 - 1);
  VAR_7 >>= VAR_1;
 }
 VAR_8 <<= VAR_1;
 VAR_8 |= VAR_4;
 return VAR_8;
}
