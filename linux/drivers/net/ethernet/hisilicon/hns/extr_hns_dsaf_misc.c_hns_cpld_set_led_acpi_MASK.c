
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hns_mac_cb {int mac_id; } ;


 int VAR_0 ;
 int FUNC_0 (struct hns_mac_cb*,int ,int,int ,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct hns_mac_cb *VAR_1, int VAR_2,
                            u16 VAR_3, int VAR_4)
{
       if (!VAR_1) {
               FUNC_1("cpld_led_set mac_cb is null!\n");
               return;
       }

       FUNC_0(VAR_1, VAR_0,
               VAR_2, VAR_1->mac_id, VAR_4);
}
