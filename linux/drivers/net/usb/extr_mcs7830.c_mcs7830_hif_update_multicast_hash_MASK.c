
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int dummy; } ;
struct mcs7830_data {int multi_filter; } ;


 int VAR_0 ;
 struct mcs7830_data* FUNC_0 (struct usbnet*) ;
 int FUNC_1 (struct usbnet*,int ,int,int ) ;

__attribute__((used)) static void FUNC_2(struct usbnet *VAR_1)
{
 struct mcs7830_data *VAR_2 = FUNC_0(VAR_1);
 FUNC_1(VAR_1, VAR_0,
    sizeof VAR_2->multi_filter,
    VAR_2->multi_filter);
}
