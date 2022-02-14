
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_mac_cb {scalar_t__ media_type; int mac_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hns_mac_cb*,int ,int ,int ,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct hns_mac_cb *VAR_2)
{
       if (!VAR_2) {
               FUNC_1("cpld_led_reset mac_cb is null!\n");
               return;
       }

       if (VAR_2->media_type != VAR_0)
                return;

       FUNC_0(VAR_2, VAR_1,
               0, VAR_2->mac_id, 0);
}
