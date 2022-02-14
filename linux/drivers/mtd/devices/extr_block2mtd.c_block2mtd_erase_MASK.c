
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {struct block2mtd_dev* priv; } ;
struct erase_info {size_t addr; size_t len; } ;
struct block2mtd_dev {int write_mutex; } ;


 int FUNC_0 (struct block2mtd_dev*,size_t,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int FUNC_4(struct mtd_info *VAR_0, struct erase_info *VAR_1)
{
 struct block2mtd_dev *VAR_2 = VAR_0->priv;
 size_t VAR_3 = VAR_1->addr;
 size_t VAR_4 = VAR_1->len;
 int VAR_5;

 FUNC_1(&VAR_2->write_mutex);
 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);
 FUNC_2(&VAR_2->write_mutex);
 if (VAR_5)
  FUNC_3("erase failed err = %d\n", VAR_5);

 return VAR_5;
}
