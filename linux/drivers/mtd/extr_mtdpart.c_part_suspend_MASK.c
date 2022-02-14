
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_part {TYPE_1__* parent; } ;
struct mtd_info {int dummy; } ;
struct TYPE_2__ {int (* _suspend ) (TYPE_1__*) ;} ;


 struct mtd_part* FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_0)
{
 struct mtd_part *VAR_1 = FUNC_0(VAR_0);
 return VAR_1->parent->_suspend(VAR_1->parent);
}
