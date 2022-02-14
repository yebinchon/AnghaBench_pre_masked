
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si470x_device {int* registers; } ;
struct file {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct si470x_device*,size_t) ;
 int FUNC_1 (struct si470x_device*) ;
 scalar_t__ FUNC_2 (struct file*) ;
 int FUNC_3 (struct file*) ;
 int FUNC_4 (struct file*) ;
 struct si470x_device* FUNC_5 (struct file*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_4)
{
 struct si470x_device *VAR_5 = FUNC_5(VAR_4);
 int VAR_6 = FUNC_3(VAR_4);

 if (VAR_6)
  return VAR_6;

 if (FUNC_2(VAR_4)) {

  VAR_6 = FUNC_1(VAR_5);
  if (VAR_6 < 0)
   goto done;


  VAR_5->registers[VAR_0] |= VAR_2;
  VAR_5->registers[VAR_0] |= VAR_3;
  VAR_5->registers[VAR_0] &= ~VAR_1;
  VAR_5->registers[VAR_0] |= 0x1 << 2;
  VAR_6 = FUNC_0(VAR_5, VAR_0);
 }

done:
 if (VAR_6)
  FUNC_4(VAR_4);
 return VAR_6;
}
