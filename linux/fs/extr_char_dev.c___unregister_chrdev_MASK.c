
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct char_device_struct {scalar_t__ cdev; } ;


 struct char_device_struct* FUNC_0 (unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct char_device_struct*) ;

void FUNC_3(unsigned int VAR_0, unsigned int VAR_1,
    unsigned int VAR_2, const char *VAR_3)
{
 struct char_device_struct *VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_4 && VAR_4->cdev)
  FUNC_1(VAR_4->cdev);
 FUNC_2(VAR_4);
}
