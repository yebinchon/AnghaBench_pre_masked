
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int (* _erase ) (struct mtd_info*,struct erase_info*) ;scalar_t__ size; int flags; int erasesize; } ;
struct erase_info {scalar_t__ addr; scalar_t__ len; int fail_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (struct mtd_info*,struct erase_info*) ;

int FUNC_2(struct mtd_info *VAR_5, struct erase_info *VAR_6)
{
 VAR_6->fail_addr = VAR_3;

 if (!VAR_5->erasesize || !VAR_5->_erase)
  return -VAR_1;

 if (VAR_6->addr >= VAR_5->size || VAR_6->len > VAR_5->size - VAR_6->addr)
  return -VAR_0;
 if (!(VAR_5->flags & VAR_4))
  return -VAR_2;

 if (!VAR_6->len)
  return 0;

 FUNC_0();
 return VAR_5->_erase(VAR_5, VAR_6);
}
