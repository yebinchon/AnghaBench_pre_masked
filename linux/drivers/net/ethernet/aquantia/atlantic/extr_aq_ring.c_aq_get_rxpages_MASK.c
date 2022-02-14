
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pg_reuses; int pg_losts; int pg_flips; } ;
struct TYPE_6__ {TYPE_1__ rx; } ;
struct aq_ring_s {int aq_nic; TYPE_2__ stats; } ;
struct TYPE_7__ {int pg_off; scalar_t__ page; } ;
struct aq_ring_buff_s {TYPE_3__ rxdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct aq_ring_s *VAR_2, struct aq_ring_buff_s *VAR_3,
     int VAR_4)
{
 int VAR_5;

 if (VAR_3->rxdata.page) {

  if (FUNC_3(VAR_3->rxdata.page) > 1) {

   VAR_3->rxdata.pg_off += VAR_0;
   if (VAR_3->rxdata.pg_off + VAR_0 <=
    (VAR_1 << VAR_4)) {
    VAR_2->stats.rx.pg_flips++;
   } else {



    FUNC_0(&VAR_3->rxdata,
            FUNC_2(VAR_2->aq_nic));
    VAR_2->stats.rx.pg_losts++;
   }
  } else {
   VAR_3->rxdata.pg_off = 0;
   VAR_2->stats.rx.pg_reuses++;
  }
 }

 if (!VAR_3->rxdata.page) {
  VAR_5 = FUNC_1(&VAR_3->rxdata, VAR_4,
        FUNC_2(VAR_2->aq_nic));
  return VAR_5;
 }

 return 0;
}
