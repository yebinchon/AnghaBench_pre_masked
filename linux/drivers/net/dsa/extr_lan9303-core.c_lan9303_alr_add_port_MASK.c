
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lan9303_alr_cache_entry {int stp_override; int port_map; int mac_addr; } ;
struct lan9303 {int alr_mutex; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int const*) ;
 struct lan9303_alr_cache_entry* FUNC_2 (struct lan9303*) ;
 struct lan9303_alr_cache_entry* FUNC_3 (struct lan9303*,int const*) ;
 int FUNC_4 (struct lan9303*,int const*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct lan9303 *VAR_1, const u8 *VAR_2, int VAR_3,
    bool VAR_4)
{
 struct lan9303_alr_cache_entry *VAR_5;

 FUNC_5(&VAR_1->alr_mutex);
 VAR_5 = FUNC_3(VAR_1, VAR_2);
 if (!VAR_5) {
  VAR_5 = FUNC_2(VAR_1);
  if (!VAR_5) {
   FUNC_6(&VAR_1->alr_mutex);
   return -VAR_0;
  }
  FUNC_1(VAR_5->mac_addr, VAR_2);
 }
 VAR_5->port_map |= FUNC_0(VAR_3);
 VAR_5->stp_override = VAR_4;
 FUNC_4(VAR_1, VAR_2, VAR_5->port_map, VAR_4);
 FUNC_6(&VAR_1->alr_mutex);

 return 0;
}
