
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnx2x {int vlan_credit; int sp_state; TYPE_1__* fp; int rss_conf_obj; int vlans_pool; int macs_pool; int mcast_obj; int rx_mode_obj; } ;
struct TYPE_2__ {int cid; int cl_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*,int ) ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*,int *,int ,int ) ;
 int FUNC_4 (struct bnx2x*,int *,int ,int ,int ,int ,int ,int ,int ,int *,int ) ;
 int FUNC_5 (struct bnx2x*,int *,int ,int ,int ,int ,int ,int ,int ,int *,int ) ;
 int FUNC_6 (struct bnx2x*,int *) ;
 int FUNC_7 (struct bnx2x*,int *,int ,int ) ;
 int FUNC_8 (struct bnx2x*,int ) ;
 int FUNC_9 (struct bnx2x*,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline void FUNC_10(struct bnx2x *VAR_5)
{

 FUNC_6(VAR_5, &VAR_5->rx_mode_obj);


 FUNC_4(VAR_5, &VAR_5->mcast_obj, VAR_5->fp->cl_id, VAR_5->fp->cid,
        FUNC_0(VAR_5), FUNC_0(VAR_5),
        FUNC_8(VAR_5, VAR_3),
        FUNC_9(VAR_5, VAR_3),
        VAR_0, &VAR_5->sp_state,
        VAR_2);


 FUNC_3(VAR_5, &VAR_5->macs_pool, FUNC_0(VAR_5),
       FUNC_2(VAR_5));

 FUNC_7(VAR_5, &VAR_5->vlans_pool, FUNC_0(VAR_5),
        FUNC_2(VAR_5));


 FUNC_5(VAR_5, &VAR_5->rss_conf_obj, VAR_5->fp->cl_id,
      VAR_5->fp->cid, FUNC_0(VAR_5), FUNC_0(VAR_5),
      FUNC_8(VAR_5, VAR_4),
      FUNC_9(VAR_5, VAR_4),
      VAR_1, &VAR_5->sp_state,
      VAR_2);

 VAR_5->vlan_credit = FUNC_1(VAR_5, FUNC_2(VAR_5));
}
