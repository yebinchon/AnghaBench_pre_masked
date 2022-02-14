
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct the_nilfs {int ns_sufile; } ;
struct TYPE_2__ {int flags; } ;
struct nilfs_sc_info {int sc_nfreesegs; int sc_freesegs; TYPE_1__ sc_stage; int sc_segbufs; int sc_write_logs; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int VAR_1 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,struct the_nilfs*) ;
 int FUNC_7 (int ,int ,int ,int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct nilfs_sc_info *VAR_2,
          struct the_nilfs *VAR_3, int VAR_4)
{
 FUNC_0(VAR_1);
 int VAR_5;

 FUNC_2(&VAR_2->sc_write_logs, &VAR_1);
 VAR_5 = FUNC_8(&VAR_1);
 FUNC_3(&VAR_1, VAR_5 ? : VAR_4);

 FUNC_2(&VAR_2->sc_segbufs, &VAR_1);
 FUNC_4(&VAR_1, VAR_3->ns_sufile);
 FUNC_6(&VAR_1, VAR_3);

 if (VAR_2->sc_stage.flags & VAR_0) {
  VAR_5 = FUNC_7(VAR_3->ns_sufile,
      VAR_2->sc_freesegs,
      VAR_2->sc_nfreesegs,
      ((void*)0));
  FUNC_1(VAR_5);
 }

 FUNC_5(&VAR_1);
}
