
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct usbnet {int net; struct aqc111_data* driver_priv; } ;
struct urb {int actual_length; int* transfer_buffer; } ;
struct aqc111_data {int link_speed; int link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct usbnet*,int ) ;

__attribute__((used)) static void FUNC_3(struct usbnet *VAR_4, struct urb *VAR_5)
{
 struct aqc111_data *VAR_6 = VAR_4->driver_priv;
 u64 *VAR_7 = ((void*)0);
 int VAR_8 = 0;

 if (VAR_5->actual_length < sizeof(*VAR_7))
  return;

 VAR_7 = VAR_5->transfer_buffer;
 FUNC_0(VAR_7);

 if (*VAR_7 & VAR_0)
  VAR_8 = 1;
 else
  VAR_8 = 0;

 VAR_6->link_speed = (*VAR_7 & VAR_1) >>
      VAR_2;
 VAR_6->link = VAR_8;

 if (FUNC_1(VAR_4->net) != VAR_8)
  FUNC_2(VAR_4, VAR_3);
}
