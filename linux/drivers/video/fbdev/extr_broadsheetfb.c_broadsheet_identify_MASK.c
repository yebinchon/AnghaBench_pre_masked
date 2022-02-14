
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct device {int dummy; } ;
struct broadsheetfb_par {TYPE_1__* info; } ;
struct TYPE_2__ {struct device* device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct broadsheetfb_par*,int ) ;
 int FUNC_1 (struct device*,char*,int,int) ;
 int FUNC_2 (struct device*,char*) ;

__attribute__((used)) static void FUNC_3(struct broadsheetfb_par *VAR_2)
{
 u16 VAR_3, VAR_4;
 struct device *VAR_5 = VAR_2->info->device;

 VAR_3 = FUNC_0(VAR_2, VAR_1);
 VAR_4 = FUNC_0(VAR_2, VAR_0);
 FUNC_1(VAR_5, "Broadsheet Rev 0x%x, Product Code 0x%x\n", VAR_3, VAR_4);

 if (VAR_4 != 0x0047)
  FUNC_2(VAR_5, "Unrecognized Broadsheet Product Code\n");
 if (VAR_3 != 0x0100)
  FUNC_2(VAR_5, "Unrecognized Broadsheet Revision\n");
}
