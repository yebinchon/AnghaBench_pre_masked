
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_chip {int mutex; int rf; int usb; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct zd_chip*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct zd_chip *VAR_0)
{
 FUNC_0(!FUNC_3(&VAR_0->mutex));
 FUNC_5(&VAR_0->usb);
 FUNC_4(&VAR_0->rf);
 FUNC_2(&VAR_0->mutex);
 FUNC_1(VAR_0, sizeof(*VAR_0));
}
