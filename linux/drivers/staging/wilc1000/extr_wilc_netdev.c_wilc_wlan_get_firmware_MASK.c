
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wilc_vif {struct wilc* wilc; } ;
struct wilc {struct firmware const* firmware; int dev; } ;
struct net_device {int dummy; } ;
struct firmware {int dummy; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (struct net_device*,char*,char*) ;
 int FUNC_1 (struct net_device*,char*,char*) ;
 struct wilc_vif* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct firmware const**,char*,int ) ;
 int FUNC_4 (struct wilc*,int) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2)
{
 struct wilc_vif *VAR_3 = FUNC_2(VAR_2);
 struct wilc *VAR_4 = VAR_3->wilc;
 int VAR_5, VAR_6 = 0;
 const struct firmware *VAR_7;
 char *VAR_8;

 VAR_5 = FUNC_4(VAR_4, 0);

 if (VAR_5 < 0x1003a0)
  VAR_8 = VAR_0;
 else
  VAR_8 = VAR_1;

 FUNC_1(VAR_2, "loading firmware %s\n", VAR_8);

 if (FUNC_3(&VAR_7, VAR_8, VAR_4->dev) != 0) {
  FUNC_0(VAR_2, "%s - firmware not available\n", VAR_8);
  VAR_6 = -1;
  goto fail;
 }
 VAR_4->firmware = VAR_7;

fail:

 return VAR_6;
}
