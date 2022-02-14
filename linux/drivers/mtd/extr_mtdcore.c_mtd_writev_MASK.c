
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int flags; int (* _writev ) (struct mtd_info*,struct kvec const*,unsigned long,int ,size_t*) ;} ;
struct kvec {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mtd_info*,struct kvec const*,unsigned long,int ,size_t*) ;
 int FUNC_1 (struct mtd_info*,struct kvec const*,unsigned long,int ,size_t*) ;

int FUNC_2(struct mtd_info *VAR_2, const struct kvec *VAR_3,
        unsigned long VAR_4, loff_t VAR_5, size_t *VAR_6)
{
 *VAR_6 = 0;
 if (!(VAR_2->flags & VAR_1))
  return -VAR_0;
 if (!VAR_2->_writev)
  return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 return VAR_2->_writev(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
