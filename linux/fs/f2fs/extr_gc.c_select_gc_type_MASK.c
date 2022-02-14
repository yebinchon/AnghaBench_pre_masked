
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int gc_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




__attribute__((used)) static int FUNC_0(struct f2fs_sb_info *VAR_3, int VAR_4)
{
 int VAR_5 = (VAR_4 == VAR_0) ? VAR_1 : VAR_2;

 switch (VAR_3->gc_mode) {
 case 130:
  VAR_5 = VAR_1;
  break;
 case 129:
 case 128:
  VAR_5 = VAR_2;
  break;
 }
 return VAR_5;
}
