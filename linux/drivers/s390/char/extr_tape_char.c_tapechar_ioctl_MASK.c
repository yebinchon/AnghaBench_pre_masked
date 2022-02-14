
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_device {int mutex; } ;
struct file {scalar_t__ private_data; } ;


 int FUNC_0 (int,char*) ;
 long FUNC_1 (struct tape_device*,unsigned int,unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static long
FUNC_4(struct file *VAR_0, unsigned int VAR_1, unsigned long VAR_2)
{
 struct tape_device *VAR_3;
 long VAR_4;

 FUNC_0(6, "TCHAR:ioct\n");

 VAR_3 = (struct tape_device *) VAR_0->private_data;
 FUNC_2(&VAR_3->mutex);
 VAR_4 = FUNC_1(VAR_3, VAR_1, VAR_2);
 FUNC_3(&VAR_3->mutex);
 return VAR_4;
}
