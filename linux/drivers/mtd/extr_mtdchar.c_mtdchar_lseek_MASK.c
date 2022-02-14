
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_file_info {TYPE_1__* mtd; } ;
struct file {struct mtd_file_info* private_data; } ;
typedef int loff_t ;
struct TYPE_2__ {int size; } ;


 int FUNC_0 (struct file*,int ,int,int ) ;

__attribute__((used)) static loff_t FUNC_1(struct file *VAR_0, loff_t VAR_1, int VAR_2)
{
 struct mtd_file_info *VAR_3 = VAR_0->private_data;
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3->mtd->size);
}
