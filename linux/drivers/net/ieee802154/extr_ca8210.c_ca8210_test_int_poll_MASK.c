
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct poll_table_struct {int dummy; } ;
struct file {struct ca8210_priv* private_data; } ;
struct TYPE_2__ {int up_fifo; int readq; } ;
struct ca8210_priv {TYPE_1__ test; } ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct file*,int *,struct poll_table_struct*) ;
 scalar_t__ FUNC_2 (int ,int) ;

__attribute__((used)) static __poll_t FUNC_3(
 struct file *VAR_3,
 struct poll_table_struct *VAR_4
)
{
 __poll_t VAR_5 = 0;
 struct ca8210_priv *VAR_6 = VAR_3->private_data;

 FUNC_1(VAR_3, &VAR_6->test.readq, VAR_4);
 if (!FUNC_0(&VAR_6->test.up_fifo))
  VAR_5 |= (VAR_1 | VAR_2);
 if (FUNC_2(
  VAR_6->test.readq,
  !FUNC_0(&VAR_6->test.up_fifo))) {
  return VAR_0;
 }
 return VAR_5;
}
