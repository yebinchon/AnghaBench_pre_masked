
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int dummy; } ;
struct mtd_file_info {int mode; struct mtd_info* mtd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (struct mtd_info*,int,int ,size_t*,int *) ;
 int FUNC_1 (struct mtd_info*,int,int ,size_t*,int *) ;

__attribute__((used)) static int FUNC_2(struct mtd_file_info *VAR_5, int VAR_6)
{
 struct mtd_info *VAR_7 = VAR_5->mtd;
 size_t VAR_8;

 switch (VAR_6) {
 case 130:
  if (FUNC_0(VAR_7, -1, 0, &VAR_8, ((void*)0)) ==
    -VAR_1)
   return -VAR_1;

  VAR_5->mode = VAR_3;
  break;
 case 128:
  if (FUNC_1(VAR_7, -1, 0, &VAR_8, ((void*)0)) ==
    -VAR_1)
   return -VAR_1;

  VAR_5->mode = VAR_4;
  break;
 case 129:
  VAR_5->mode = VAR_2;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
