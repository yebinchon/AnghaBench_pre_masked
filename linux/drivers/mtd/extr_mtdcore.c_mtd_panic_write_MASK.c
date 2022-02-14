
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct mtd_info {int (* _panic_write ) (struct mtd_info*,scalar_t__,size_t,size_t*,int const*) ;scalar_t__ size; int flags; int oops_panic_write; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mtd_info*,scalar_t__,size_t,size_t*,int const*) ;

int FUNC_1(struct mtd_info *VAR_4, loff_t VAR_5, size_t VAR_6, size_t *VAR_7,
      const u_char *VAR_8)
{
 *VAR_7 = 0;
 if (!VAR_4->_panic_write)
  return -VAR_1;
 if (VAR_5 < 0 || VAR_5 >= VAR_4->size || VAR_6 > VAR_4->size - VAR_5)
  return -VAR_0;
 if (!(VAR_4->flags & VAR_3))
  return -VAR_2;
 if (!VAR_6)
  return 0;
 if (!VAR_4->oops_panic_write)
  VAR_4->oops_panic_write = 1;

 return VAR_4->_panic_write(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
}
