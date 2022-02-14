
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_port {int cap_phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct tb_port*) ;
 int FUNC_2 (struct tb_port*,char*) ;
 int FUNC_3 (struct tb_port*,char*,...) ;
 int FUNC_4 (struct tb_port*) ;
 int FUNC_5 (struct tb_port*,char*) ;

int FUNC_6(struct tb_port *VAR_4, bool VAR_5)
{
 int VAR_6 = 10;
 int VAR_7;
 if (!VAR_4->cap_phy) {
  FUNC_2(VAR_4, "does not have PHY\n");
  return -VAR_0;
 }
 if (FUNC_1(VAR_4)) {
  FUNC_2(VAR_4, "is the upstream port\n");
  return -VAR_0;
 }

 while (VAR_6--) {
  VAR_7 = FUNC_4(VAR_4);
  if (VAR_7 < 0)
   return VAR_7;
  if (VAR_7 == VAR_1) {
   FUNC_3(VAR_4, "is disabled (state: 0)\n");
   return 0;
  }
  if (VAR_7 == VAR_2) {
   if (VAR_5) {

    FUNC_3(VAR_4,
         "is unplugged (state: 7), retrying...\n");
    FUNC_0(100);
    continue;
   }
   FUNC_3(VAR_4, "is unplugged (state: 7)\n");
   return 0;
  }
  if (VAR_7 == VAR_3) {
   FUNC_3(VAR_4, "is connected, link is up (state: 2)\n");
   return 1;
  }





  FUNC_3(VAR_4,
       "is connected, link is not up (state: %d), retrying...\n",
       VAR_7);
  FUNC_0(100);
 }
 FUNC_5(VAR_4,
       "failed to reach state TB_PORT_UP. Ignoring port...\n");
 return 0;
}
