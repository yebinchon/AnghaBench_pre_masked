
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbtmc_file_data {TYPE_1__* data; } ;
struct file {struct usbtmc_file_data* private_data; } ;
struct TYPE_2__ {int fasync; } ;


 int FUNC_0 (int,struct file*,int,int *) ;

__attribute__((used)) static int FUNC_1(int VAR_0, struct file *VAR_1, int VAR_2)
{
 struct usbtmc_file_data *VAR_3 = VAR_1->private_data;

 return FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_3->data->fasync);
}
