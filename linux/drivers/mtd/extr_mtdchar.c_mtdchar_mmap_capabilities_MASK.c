
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_file_info {int mtd; } ;
struct file {struct mtd_file_info* private_data; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static unsigned FUNC_1(struct file *VAR_0)
{
 struct mtd_file_info *VAR_1 = VAR_0->private_data;

 return FUNC_0(VAR_1->mtd);
}
