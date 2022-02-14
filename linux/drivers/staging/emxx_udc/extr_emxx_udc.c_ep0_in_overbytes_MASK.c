
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * DATA; } ;
union usb_reg_access {int dw; TYPE_1__ byte; } ;
typedef int u8 ;
typedef scalar_t__ u32 ;
struct nbu2ss_udc {int dummy; } ;


 int FUNC_0 (struct nbu2ss_udc*,int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct nbu2ss_udc *VAR_0,
       u8 *VAR_1,
       u32 VAR_2)
{
 u32 VAR_3;
 union usb_reg_access VAR_4;
 union usb_reg_access *VAR_5 = (union usb_reg_access *)VAR_1;

 if ((VAR_2 > 0) && (VAR_2 < sizeof(u32))) {
  for (VAR_3 = 0 ; VAR_3 < VAR_2 ; VAR_3++)
   VAR_4[VAR_3] = VAR_5->byte.DATA[VAR_3];
  FUNC_0(VAR_0, 0, VAR_4, VAR_2);

  return VAR_2;
 }

 return 0;
}
