
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gru_state {int gs_gid; int gs_asid_limit; int gs_asid; TYPE_3__** gs_gts; } ;
struct TYPE_6__ {TYPE_2__* ts_gms; } ;
struct TYPE_5__ {TYPE_1__* ms_asids; } ;
struct TYPE_4__ {int mt_asid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (struct gru_state*) ;
 int FUNC_3 (struct gru_state*) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_5(struct gru_state *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10;

 FUNC_1(VAR_4, "gid %d, asid 0x%x\n", VAR_5->gs_gid, VAR_6);
 FUNC_0(VAR_3);
 VAR_10 = VAR_2;
 if (VAR_6 >= VAR_10)
  VAR_6 = FUNC_3(VAR_5);
 FUNC_2(VAR_5);
 VAR_8 = VAR_5->gs_gid;
again:
 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  if (!VAR_5->gs_gts[VAR_7] || FUNC_4(VAR_5->gs_gts[VAR_7]))
   continue;
  VAR_9 = VAR_5->gs_gts[VAR_7]->ts_gms->ms_asids[VAR_8].mt_asid;
  FUNC_1(VAR_4, "gid %d, gts %p, gms %p, inuse 0x%x, cxt %d\n",
   VAR_5->gs_gid, VAR_5->gs_gts[VAR_7], VAR_5->gs_gts[VAR_7]->ts_gms,
   VAR_9, VAR_7);
  if (VAR_9 == VAR_6) {
   VAR_6 += VAR_0;
   if (VAR_6 >= VAR_10) {




    VAR_10 = VAR_2;
    if (VAR_6 >= VAR_2)
     VAR_6 = FUNC_3(VAR_5);
    goto again;
   }
  }

  if ((VAR_9 > VAR_6) && (VAR_9 < VAR_10))
   VAR_10 = VAR_9;
 }
 VAR_5->gs_asid_limit = VAR_10;
 VAR_5->gs_asid = VAR_6;
 FUNC_1(VAR_4, "gid %d, new asid 0x%x, new_limit 0x%x\n", VAR_5->gs_gid,
     VAR_6, VAR_10);
 return VAR_6;
}
