
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct b43_dmaring {int nr_failed_tx_packets; int nr_succeed_tx_packets; int nr_total_packet_tries; struct b43_dmaring* meta; struct b43_dmaring* txhdr_cache; int nr_slots; int max_used_slots; scalar_t__ type; TYPE_1__* dev; } ;
struct TYPE_2__ {int wl; } ;


 int FUNC_0 (int ,char*,unsigned int,char const*,int ,int ,unsigned long long,unsigned long long,unsigned long long,unsigned long long,unsigned long long,unsigned long long) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct b43_dmaring*) ;
 int FUNC_3 (struct b43_dmaring*) ;
 int FUNC_4 (struct b43_dmaring*) ;
 int FUNC_5 (struct b43_dmaring*) ;
 scalar_t__ FUNC_6 (int,int) ;

__attribute__((used)) static void FUNC_7(struct b43_dmaring *VAR_0,
    const char *VAR_1)
{
 if (!VAR_0)
  return;
 FUNC_2(VAR_0);
 FUNC_3(VAR_0);
 FUNC_4(VAR_0);

 FUNC_5(VAR_0->txhdr_cache);
 FUNC_5(VAR_0->meta);
 FUNC_5(VAR_0);
}
