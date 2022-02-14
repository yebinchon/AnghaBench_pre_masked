
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {struct array_data* i_private; } ;
struct file {char* private_data; } ;
struct array_data {int elements; int array; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int,int ) ;
 int FUNC_1 (struct inode*,struct file*) ;
 int FUNC_2 (char*,int,int ,int) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_2, struct file *VAR_3)
{
 struct array_data *VAR_4 = VAR_2->i_private;
 int VAR_5, VAR_6 = VAR_4->elements;
 char *VAR_7;






 VAR_5 = VAR_6*11;
 VAR_7 = FUNC_0(VAR_5+1, VAR_1);
 if (!VAR_7)
  return -VAR_0;
 VAR_7[VAR_5] = 0;

 VAR_3->private_data = VAR_7;
 FUNC_2(VAR_7, VAR_5, VAR_4->array, VAR_4->elements);

 return FUNC_1(VAR_2, VAR_3);
}
