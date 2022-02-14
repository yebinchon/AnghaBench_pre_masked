
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct channel_data* private_data; } ;
struct cosa_data {int dummy; } ;
struct channel_data {struct cosa_data* cosa; } ;


 int VAR_0 ;
 long FUNC_0 (struct cosa_data*,struct channel_data*,unsigned int,unsigned long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static long FUNC_3(struct file *VAR_1, unsigned int VAR_2,
       unsigned long VAR_3)
{
 struct channel_data *VAR_4 = VAR_1->private_data;
 struct cosa_data *VAR_5;
 long VAR_6;

 FUNC_1(&VAR_0);
 VAR_5 = VAR_4->cosa;
 VAR_6 = FUNC_0(VAR_5, VAR_4, VAR_2, VAR_3);
 FUNC_2(&VAR_0);
 return VAR_6;
}
