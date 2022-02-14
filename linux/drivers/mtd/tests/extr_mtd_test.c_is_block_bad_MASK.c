
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int erasesize; } ;
typedef int loff_t ;


 int FUNC_0 (struct mtd_info*,int) ;
 int FUNC_1 (char*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_0, unsigned int VAR_1)
{
 int VAR_2;
 loff_t VAR_3 = (loff_t)VAR_1 * VAR_0->erasesize;

 VAR_2 = FUNC_0(VAR_0, VAR_3);
 if (VAR_2)
  FUNC_1("block %d is bad\n", VAR_1);

 return VAR_2;
}
