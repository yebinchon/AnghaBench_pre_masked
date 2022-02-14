
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct adapter {TYPE_1__* HalData; } ;
struct TYPE_2__ {int UsbBulkOutSize; } ;


 int VAR_0 ;

__attribute__((used)) static u8 FUNC_0(struct adapter *VAR_1, int VAR_2)
{
 return !((VAR_2 + VAR_0) % VAR_1->HalData->UsbBulkOutSize);
}
