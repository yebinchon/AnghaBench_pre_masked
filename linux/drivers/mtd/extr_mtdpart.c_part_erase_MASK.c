
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_part {scalar_t__ offset; TYPE_1__* parent; } ;
struct mtd_info {int dummy; } ;
struct erase_info {scalar_t__ fail_addr; int addr; } ;
struct TYPE_2__ {int (* _erase ) (TYPE_1__*,struct erase_info*) ;} ;


 scalar_t__ VAR_0 ;
 struct mtd_part* FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (TYPE_1__*,struct erase_info*) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_1, struct erase_info *VAR_2)
{
 struct mtd_part *VAR_3 = FUNC_0(VAR_1);
 int VAR_4;

 VAR_2->addr += VAR_3->offset;
 VAR_4 = VAR_3->parent->_erase(VAR_3->parent, VAR_2);
 if (VAR_2->fail_addr != VAR_0)
  VAR_2->fail_addr -= VAR_3->offset;
 VAR_2->addr -= VAR_3->offset;

 return VAR_4;
}
