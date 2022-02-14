
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int erasesize; } ;
struct erase_info {int addr; int len; } ;
typedef int loff_t ;


 int FUNC_0 (struct erase_info*,int ,int) ;
 int FUNC_1 (struct mtd_info*,struct erase_info*) ;
 int FUNC_2 (char*,int,unsigned int) ;

int FUNC_3(struct mtd_info *VAR_0, unsigned int VAR_1)
{
 int VAR_2;
 struct erase_info VAR_3;
 loff_t VAR_4 = (loff_t)VAR_1 * VAR_0->erasesize;

 FUNC_0(&VAR_3, 0, sizeof(struct erase_info));
 VAR_3.addr = VAR_4;
 VAR_3.len = VAR_0->erasesize;

 VAR_2 = FUNC_1(VAR_0, &VAR_3);
 if (VAR_2) {
  FUNC_2("error %d while erasing EB %d\n", VAR_2, VAR_1);
  return VAR_2;
 }

 return 0;
}
