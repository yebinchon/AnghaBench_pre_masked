
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qtnf_wmac {int wiphy_registered; } ;
struct TYPE_3__ {int iftype; int use_4addr; } ;
struct qtnf_vif {int * netdev; TYPE_1__ wdev; int mac_addr; } ;
struct TYPE_4__ {int mac_bitmap; } ;
struct qtnf_bus {TYPE_2__ hw_info; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct qtnf_wmac*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct qtnf_wmac*) ;
 int FUNC_3 (char*,unsigned int) ;
 int FUNC_4 (char*,unsigned int) ;
 int FUNC_5 (char*,unsigned int) ;
 int FUNC_6 (struct qtnf_wmac*) ;
 int FUNC_7 (struct qtnf_vif*,int ,int ,int ) ;
 int FUNC_8 (struct qtnf_wmac*) ;
 struct qtnf_wmac* FUNC_9 (struct qtnf_bus*,unsigned int) ;
 int FUNC_10 (struct qtnf_bus*,unsigned int) ;
 int FUNC_11 (struct qtnf_wmac*,struct qtnf_vif*,char*,int ) ;
 struct qtnf_vif* FUNC_12 (struct qtnf_wmac*) ;
 int FUNC_13 (struct qtnf_wmac*) ;
 int FUNC_14 (TYPE_2__*,struct qtnf_wmac*) ;
 int FUNC_15 () ;
 int FUNC_16 () ;

__attribute__((used)) static int FUNC_17(struct qtnf_bus *VAR_3, unsigned int VAR_4)
{
 struct qtnf_wmac *VAR_5;
 struct qtnf_vif *VAR_6;
 int VAR_7;

 if (!(VAR_3->hw_info.mac_bitmap & FUNC_0(VAR_4))) {
  FUNC_5("MAC%u is not active in FW\n", VAR_4);
  return 0;
 }

 VAR_5 = FUNC_9(VAR_3, VAR_4);
 if (FUNC_1(VAR_5)) {
  FUNC_4("MAC%u allocation failed\n", VAR_4);
  return FUNC_2(VAR_5);
 }

 VAR_7 = FUNC_6(VAR_5);
 if (VAR_7) {
  FUNC_4("MAC%u: failed to get info\n", VAR_4);
  goto error;
 }

 VAR_6 = FUNC_12(VAR_5);
 if (!VAR_6) {
  FUNC_4("MAC%u: primary VIF is not ready\n", VAR_4);
  VAR_7 = -VAR_0;
  goto error;
 }

 VAR_7 = FUNC_7(VAR_6, VAR_6->wdev.iftype,
         VAR_6->wdev.use_4addr, VAR_6->mac_addr);
 if (VAR_7) {
  FUNC_4("MAC%u: failed to add VIF\n", VAR_4);
  goto error;
 }

 VAR_7 = FUNC_8(VAR_5);
 if (VAR_7) {
  FUNC_4("MAC%u: failed to get PHY settings\n", VAR_4);
  goto error;
 }

 VAR_7 = FUNC_13(VAR_5);
 if (VAR_7) {
  FUNC_4("MAC%u: failed to init bands\n", VAR_4);
  goto error;
 }

 VAR_7 = FUNC_14(&VAR_3->hw_info, VAR_5);
 if (VAR_7) {
  FUNC_4("MAC%u: wiphy registration failed\n", VAR_4);
  goto error;
 }

 VAR_5->wiphy_registered = 1;

 FUNC_15();

 VAR_7 = FUNC_11(VAR_5, VAR_6, "wlan%d", VAR_1);
 FUNC_16();

 if (VAR_7) {
  FUNC_4("MAC%u: failed to attach netdev\n", VAR_4);
  VAR_6->wdev.iftype = VAR_2;
  VAR_6->netdev = ((void*)0);
  goto error;
 }

 FUNC_3("MAC%u initialized\n", VAR_4);

 return 0;

error:
 FUNC_10(VAR_3, VAR_4);
 return VAR_7;
}
