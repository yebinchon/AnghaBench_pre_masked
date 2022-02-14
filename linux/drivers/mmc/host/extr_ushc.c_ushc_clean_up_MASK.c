
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ushc_data {int mmc; int csw; int cbw; int int_data; int cbw_urb; int data_urb; int csw_urb; int int_urb; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ushc_data *VAR_0)
{
 FUNC_2(VAR_0->int_urb);
 FUNC_2(VAR_0->csw_urb);
 FUNC_2(VAR_0->data_urb);
 FUNC_2(VAR_0->cbw_urb);

 FUNC_0(VAR_0->int_data);
 FUNC_0(VAR_0->cbw);
 FUNC_0(VAR_0->csw);

 FUNC_1(VAR_0->mmc);
}
