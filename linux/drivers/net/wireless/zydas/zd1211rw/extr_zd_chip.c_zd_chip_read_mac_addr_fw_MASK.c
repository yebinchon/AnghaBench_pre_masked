
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct zd_chip {int usb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct zd_chip*) ;
 int FUNC_2 (int *,int ,int *,int ) ;

int FUNC_3(struct zd_chip *VAR_2, u8 *VAR_3)
{
 FUNC_0(FUNC_1(VAR_2), "\n");
 return FUNC_2(&VAR_2->usb, VAR_0, VAR_3,
  VAR_1);
}
