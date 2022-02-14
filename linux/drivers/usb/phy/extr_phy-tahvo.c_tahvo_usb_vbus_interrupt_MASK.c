
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tahvo_usb {int serialize; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct tahvo_usb*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct tahvo_usb *VAR_3 = VAR_2;

 FUNC_1(&VAR_3->serialize);
 FUNC_0(VAR_3);
 FUNC_2(&VAR_3->serialize);

 return VAR_0;
}
