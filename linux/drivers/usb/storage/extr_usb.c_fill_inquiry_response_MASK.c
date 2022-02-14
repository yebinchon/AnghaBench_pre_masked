
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct us_data {int srb; TYPE_3__* unusual_dev; TYPE_2__* pusb_dev; } ;
typedef unsigned char bcdDevice ;
struct TYPE_6__ {int productName; int vendorName; } ;
struct TYPE_4__ {int bcdDevice; } ;
struct TYPE_5__ {TYPE_1__ descriptor; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned char*,int ,int ) ;
 int FUNC_2 (unsigned char*,char,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (unsigned char*,unsigned int,int ) ;

void FUNC_6(struct us_data *VAR_0, unsigned char *VAR_1,
  unsigned int VAR_2)
{
 if (VAR_2 < 36)
  return;

 FUNC_2(VAR_1+8, ' ', 28);
 if (VAR_1[0]&0x20) {
 } else {
  u16 VAR_3 = FUNC_0(VAR_0->pusb_dev->descriptor.bcdDevice);
  int VAR_4;

  VAR_4 = FUNC_4(VAR_0->unusual_dev->vendorName);
  FUNC_1(VAR_1+8, VAR_0->unusual_dev->vendorName, FUNC_3(8, VAR_4));
  VAR_4 = FUNC_4(VAR_0->unusual_dev->productName);
  FUNC_1(VAR_1+16, VAR_0->unusual_dev->productName, FUNC_3(16, VAR_4));

  VAR_1[32] = 0x30 + ((VAR_3>>12) & 0x0F);
  VAR_1[33] = 0x30 + ((VAR_3>>8) & 0x0F);
  VAR_1[34] = 0x30 + ((VAR_3>>4) & 0x0F);
  VAR_1[35] = 0x30 + ((VAR_3) & 0x0F);
 }

 FUNC_5(VAR_1, VAR_2, VAR_0->srb);
}
