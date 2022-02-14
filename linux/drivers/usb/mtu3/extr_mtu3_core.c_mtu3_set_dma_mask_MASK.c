
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtu3 {int mac_base; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct device*,char*,char*) ;
 int FUNC_2 (struct device*,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct mtu3 *VAR_2)
{
 struct device *VAR_3 = VAR_2->dev;
 bool VAR_4 = 0;
 int VAR_5 = 0;
 u32 VAR_6;

 VAR_6 = FUNC_3(VAR_2->mac_base, VAR_1);
 if (VAR_6 & VAR_0) {
  VAR_4 = 1;
  VAR_5 = FUNC_2(VAR_3, FUNC_0(36));

  if (VAR_5) {
   VAR_4 = 0;
   VAR_5 = FUNC_2(VAR_3, FUNC_0(32));
  }
 }
 FUNC_1(VAR_3, "dma mask: %s bits\n", VAR_4 ? "36" : "32");

 return VAR_5;
}
