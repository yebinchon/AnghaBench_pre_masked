
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {scalar_t__ f_pos; int f_version; int * private_data; } ;
typedef scalar_t__ loff_t ;


 scalar_t__ VAR_0 ;



 int FUNC_0 (int *) ;

__attribute__((used)) static loff_t FUNC_1(struct file *VAR_1, loff_t VAR_2, int VAR_3)
{
 switch (VAR_3) {
 case 130:
  VAR_2 += VAR_1->f_pos;
  break;

 case 128:
  break;





 case 129:
  if (VAR_1->private_data) {
   FUNC_0(VAR_1->private_data);
   VAR_1->private_data = ((void*)0);
  }

  break;

 default:
  return -VAR_0;
 }

 if (VAR_2 < 0)
  return -VAR_0;

 if (VAR_1->f_pos != VAR_2)
  ++VAR_1->f_version;

 VAR_1->f_pos = VAR_2;
 return VAR_2;
}
