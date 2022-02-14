
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lan9303 {int phy_addr_base; int dev; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* phy_read ) (struct lan9303*,int,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct lan9303*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct lan9303 *VAR_1)
{
 int VAR_2;
 VAR_2 = VAR_1->ops->phy_read(VAR_1, 3, VAR_0);
 if (VAR_2 < 0) {
  FUNC_1(VAR_1->dev, "Failed to detect phy config: %d\n", VAR_2);
  return VAR_2;
 }

 VAR_1->phy_addr_base = VAR_2 != 0 && VAR_2 != 0xffff;

 FUNC_0(VAR_1->dev, "Phy setup '%s' detected\n",
  VAR_1->phy_addr_base ? "1-2-3" : "0-1-2");

 return 0;
}
