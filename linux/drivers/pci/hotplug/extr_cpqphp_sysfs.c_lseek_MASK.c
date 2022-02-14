
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct ctrl_dbg* private_data; } ;
struct ctrl_dbg {int size; } ;
typedef int loff_t ;


 int FUNC_0 (struct file*,int ,int,int ) ;

__attribute__((used)) static loff_t FUNC_1(struct file *VAR_0, loff_t VAR_1, int VAR_2)
{
 struct ctrl_dbg *VAR_3 = VAR_0->private_data;
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3->size);
}
