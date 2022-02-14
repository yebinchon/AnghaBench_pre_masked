
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct rx_bd {scalar_t__ rx_bd_opaque; int rx_bd_len_flags_type; } ;
struct TYPE_2__ {int nr_pages; scalar_t__ pg_arr; } ;
struct bnxt_ring_struct {TYPE_1__ ring_mem; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct bnxt_ring_struct *VAR_1, u32 VAR_2)
{
 int VAR_3;
 u32 VAR_4;
 struct rx_bd **VAR_5;

 VAR_5 = (struct rx_bd **)VAR_1->ring_mem.pg_arr;
 for (VAR_3 = 0, VAR_4 = 0; VAR_3 < VAR_1->ring_mem.nr_pages; VAR_3++) {
  int VAR_6;
  struct rx_bd *VAR_7;

  VAR_7 = VAR_5[VAR_3];
  if (!VAR_7)
   continue;

  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++, VAR_7++, VAR_4++) {
   VAR_7->rx_bd_len_flags_type = FUNC_0(VAR_2);
   VAR_7->rx_bd_opaque = VAR_4;
  }
 }
}
