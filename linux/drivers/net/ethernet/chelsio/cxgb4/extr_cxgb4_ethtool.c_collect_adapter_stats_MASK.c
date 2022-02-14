
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u64 ;
struct adapter_stats {void* wc_fail; void* wc_success; int db_empty; int db_full; int db_drop; } ;
struct TYPE_4__ {int chip; } ;
struct TYPE_3__ {int db_empty; int db_full; int db_drop; } ;
struct adapter {TYPE_2__ params; TYPE_1__ db_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct adapter_stats*,int ,int) ;
 void* FUNC_3 (struct adapter*,int ) ;

__attribute__((used)) static void FUNC_4(struct adapter *VAR_3, struct adapter_stats *VAR_4)
{
 u64 VAR_5, VAR_6;

 FUNC_2(VAR_4, 0, sizeof(*VAR_4));

 VAR_4->db_drop = VAR_3->db_stats.db_drop;
 VAR_4->db_full = VAR_3->db_stats.db_full;
 VAR_4->db_empty = VAR_3->db_stats.db_empty;

 if (!FUNC_1(VAR_3->params.chip)) {
  int VAR_7;

  VAR_7 = FUNC_3(VAR_3, VAR_0);
  if (FUNC_0(VAR_7) == 7) {
   VAR_6 = FUNC_3(VAR_3, VAR_1);
   VAR_5 = FUNC_3(VAR_3, VAR_2);
   VAR_4->wc_success = VAR_5 - VAR_6;
   VAR_4->wc_fail = VAR_6;
  }
 }
}
