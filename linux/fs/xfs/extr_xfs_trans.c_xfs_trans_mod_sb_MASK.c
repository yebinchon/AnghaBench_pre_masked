
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int t_blk_res_used; int t_blk_res; int t_rtx_res_used; int t_rtx_res; int t_flags; int t_rextslog_delta; int t_rextents_delta; int t_rblocks_delta; int t_rbmblocks_delta; int t_rextsize_delta; int t_imaxpct_delta; int t_agcount_delta; int t_dblocks_delta; int t_res_frextents_delta; int t_frextents_delta; int t_res_fdblocks_delta; int t_fdblocks_delta; int t_ifree_delta; int t_icount_delta; TYPE_2__* t_mountp; } ;
typedef TYPE_1__ xfs_trans_t ;
struct TYPE_6__ {int m_sb; } ;
typedef TYPE_2__ xfs_mount_t ;
typedef int uint32_t ;
typedef int uint ;
typedef int int64_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int *) ;

void
FUNC_3(
 xfs_trans_t *VAR_3,
 uint VAR_4,
 int64_t VAR_5)
{
 uint32_t VAR_6 = (VAR_1|VAR_2);
 xfs_mount_t *VAR_7 = VAR_3->t_mountp;

 switch (VAR_4) {
 case 137:
  VAR_3->t_icount_delta += VAR_5;
  if (FUNC_2(&VAR_7->m_sb))
   VAR_6 &= ~VAR_2;
  break;
 case 136:
  VAR_3->t_ifree_delta += VAR_5;
  if (FUNC_2(&VAR_7->m_sb))
   VAR_6 &= ~VAR_2;
  break;
 case 139:





  if (VAR_5 < 0) {
   VAR_3->t_blk_res_used += (uint)-VAR_5;
   if (VAR_3->t_blk_res_used > VAR_3->t_blk_res)
    FUNC_1(VAR_7, VAR_0);
  }
  VAR_3->t_fdblocks_delta += VAR_5;
  if (FUNC_2(&VAR_7->m_sb))
   VAR_6 &= ~VAR_2;
  break;
 case 132:





  VAR_3->t_res_fdblocks_delta += VAR_5;
  if (FUNC_2(&VAR_7->m_sb))
   VAR_6 &= ~VAR_2;
  break;
 case 138:





  if (VAR_5 < 0) {
   VAR_3->t_rtx_res_used += (uint)-VAR_5;
   FUNC_0(VAR_3->t_rtx_res_used <= VAR_3->t_rtx_res);
  }
  VAR_3->t_frextents_delta += VAR_5;
  break;
 case 131:





  FUNC_0(VAR_5 < 0);
  VAR_3->t_res_frextents_delta += VAR_5;
  break;
 case 140:
  FUNC_0(VAR_5 > 0);
  VAR_3->t_dblocks_delta += VAR_5;
  break;
 case 141:
  FUNC_0(VAR_5 > 0);
  VAR_3->t_agcount_delta += VAR_5;
  break;
 case 135:
  VAR_3->t_imaxpct_delta += VAR_5;
  break;
 case 129:
  VAR_3->t_rextsize_delta += VAR_5;
  break;
 case 133:
  VAR_3->t_rbmblocks_delta += VAR_5;
  break;
 case 134:
  VAR_3->t_rblocks_delta += VAR_5;
  break;
 case 130:
  VAR_3->t_rextents_delta += VAR_5;
  break;
 case 128:
  VAR_3->t_rextslog_delta += VAR_5;
  break;
 default:
  FUNC_0(0);
  return;
 }

 VAR_3->t_flags |= VAR_6;
}
