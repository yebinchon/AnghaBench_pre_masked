
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int net; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct usbnet*,int ,int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct usbnet *VAR_2)
{
 FUNC_1(VAR_0, &VAR_2->flags);

 FUNC_0(VAR_2, VAR_1, VAR_2->net, "paused rx queue enabled\n");
}
