
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct isp1760_udc {TYPE_1__* isp; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (struct isp1760_udc*,int ) ;
 int FUNC_2 (struct isp1760_udc*,int ,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct isp1760_udc *VAR_5)
{
 u16 VAR_6;
 u32 VAR_7;







 FUNC_2(VAR_5, VAR_2, 0xbabe);
 VAR_7 = FUNC_1(VAR_5, VAR_0);
 VAR_6 = FUNC_1(VAR_5, VAR_2);

 if (VAR_6 != 0xbabe) {
  FUNC_0(VAR_5->isp->dev,
   "udc: scratch test failed (0x%04x/0x%08x)\n",
   VAR_6, VAR_7);
  return -VAR_4;
 }

 if (VAR_7 != 0x00011582 && VAR_7 != 0x00158210) {
  FUNC_0(VAR_5->isp->dev, "udc: invalid chip ID 0x%08x\n", VAR_7);
  return -VAR_4;
 }


 FUNC_2(VAR_5, VAR_1, VAR_3);
 FUNC_3(10000, 11000);
 FUNC_2(VAR_5, VAR_1, 0);
 FUNC_3(10000, 11000);

 return 0;
}
