
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int f_pos; struct ashmem_area* private_data; } ;
struct ashmem_area {scalar_t__ size; TYPE_1__* file; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {int f_pos; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__,int) ;

__attribute__((used)) static loff_t FUNC_3(struct file *VAR_3, loff_t VAR_4, int VAR_5)
{
 struct ashmem_area *VAR_6 = VAR_3->private_data;
 loff_t VAR_7;

 FUNC_0(&VAR_2);

 if (VAR_6->size == 0) {
  FUNC_1(&VAR_2);
  return -VAR_1;
 }

 if (!VAR_6->file) {
  FUNC_1(&VAR_2);
  return -VAR_0;
 }

 FUNC_1(&VAR_2);

 VAR_7 = FUNC_2(VAR_6->file, VAR_4, VAR_5);
 if (VAR_7 < 0)
  return VAR_7;


 VAR_3->f_pos = VAR_6->file->f_pos;
 return VAR_7;
}
