
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mtd_info {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_4__ {TYPE_1__* i_sb; } ;
struct TYPE_3__ {struct mtd_info* s_mtd; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct file*) ;
 int FUNC_1 (struct mtd_info*) ;

__attribute__((used)) static unsigned FUNC_2(struct file *VAR_1)
{
 struct mtd_info *VAR_2 = FUNC_0(VAR_1)->i_sb->s_mtd;

 if (!VAR_2)
  return VAR_0;
 return FUNC_1(VAR_2);
}
