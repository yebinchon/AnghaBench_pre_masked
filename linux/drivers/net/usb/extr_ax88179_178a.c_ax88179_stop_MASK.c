
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usbnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct usbnet*,int ,int ,int,int,int *) ;
 int FUNC_1 (struct usbnet*,int ,int ,int,int,int *) ;

__attribute__((used)) static int FUNC_2(struct usbnet *VAR_3)
{
 u16 VAR_4;

 FUNC_0(VAR_3, VAR_0, VAR_2,
    2, 2, &VAR_4);
 VAR_4 &= ~VAR_1;
 FUNC_1(VAR_3, VAR_0, VAR_2,
     2, 2, &VAR_4);

 return 0;
}
