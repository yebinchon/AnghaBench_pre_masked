
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct mtd_info {struct block2mtd_dev* priv; } ;
struct block2mtd_dev {int write_mutex; } ;
typedef int loff_t ;


 int FUNC_0 (struct block2mtd_dev*,int const*,int ,size_t,size_t*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct mtd_info *VAR_0, loff_t VAR_1, size_t VAR_2,
  size_t *VAR_3, const u_char *VAR_4)
{
 struct block2mtd_dev *VAR_5 = VAR_0->priv;
 int VAR_6;

 FUNC_1(&VAR_5->write_mutex);
 VAR_6 = FUNC_0(VAR_5, VAR_4, VAR_1, VAR_2, VAR_3);
 FUNC_2(&VAR_5->write_mutex);
 if (VAR_6 > 0)
  VAR_6 = 0;
 return VAR_6;
}
