
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si470x_device {int* registers; scalar_t__ rd_index; scalar_t__ wr_index; int read_queue; } ;
struct poll_table_struct {int dummy; } ;
struct file {int dummy; } ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct poll_table_struct*) ;
 int FUNC_1 (struct file*,int *,struct poll_table_struct*) ;
 int FUNC_2 (struct si470x_device*) ;
 int FUNC_3 (struct file*,struct poll_table_struct*) ;
 struct si470x_device* FUNC_4 (struct file*) ;

__attribute__((used)) static __poll_t FUNC_5(struct file *VAR_4,
  struct poll_table_struct *VAR_5)
{
 struct si470x_device *VAR_6 = FUNC_4(VAR_4);
 __poll_t VAR_7 = FUNC_0(VAR_5);
 __poll_t VAR_8 = FUNC_3(VAR_4, VAR_5);

 if (VAR_7 & (VAR_0 | VAR_1)) {

  if ((VAR_6->registers[VAR_2] & VAR_3) == 0)
   FUNC_2(VAR_6);

  FUNC_1(VAR_4, &VAR_6->read_queue, VAR_5);

  if (VAR_6->rd_index != VAR_6->wr_index)
   VAR_8 |= VAR_0 | VAR_1;
 }

 return VAR_8;
}
