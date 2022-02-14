
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ofdpa_neigh_tbl_entry {int ttl_check; int ref_count; int eth_dst; } ;


 int FUNC_0 (int ,int const*) ;

__attribute__((used)) static void FUNC_1(struct ofdpa_neigh_tbl_entry *VAR_0,
          const u8 *VAR_1, bool VAR_2)
{
 if (VAR_1) {
  FUNC_0(VAR_0->eth_dst, VAR_1);
  VAR_0->ttl_check = VAR_2;
 } else {
  VAR_0->ref_count++;
 }
}
