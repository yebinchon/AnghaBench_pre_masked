
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usbnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct usbnet*,int,int) ;
 int FUNC_1 (struct usbnet*,int ,int ,int ,int,int*) ;

__attribute__((used)) static int
FUNC_2(struct usbnet *VAR_3, u16 VAR_4, u16 VAR_5)
{
 int VAR_6;
 u16 VAR_7;

 FUNC_0(VAR_3, VAR_4, VAR_5);

 VAR_6 = FUNC_1(VAR_3, VAR_1, VAR_0,
          VAR_2, 2, &VAR_7);
 if (VAR_6 < 0)
  return VAR_6;

 return VAR_7;
}
