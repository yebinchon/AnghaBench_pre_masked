
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_part {scalar_t__ offset; TYPE_1__* parent; } ;
struct mtd_oob_ops {int dummy; } ;
struct mtd_info {int dummy; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {int (* _write_oob ) (TYPE_1__*,scalar_t__,struct mtd_oob_ops*) ;} ;


 struct mtd_part* FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,struct mtd_oob_ops*) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_0, loff_t VAR_1,
  struct mtd_oob_ops *VAR_2)
{
 struct mtd_part *VAR_3 = FUNC_0(VAR_0);

 return VAR_3->parent->_write_oob(VAR_3->parent, VAR_1 + VAR_3->offset, VAR_2);
}
