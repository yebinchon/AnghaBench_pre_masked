
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_agnumber_t ;
struct xfs_scrub {int tp; struct xfs_mount* mp; } ;
struct xfs_mount {int m_sb; } ;
struct xchk_ag {int refc_cur; int agf_bp; int pag; int rmap_cur; void* fino_cur; int agi_bp; void* ino_cur; void* cnt_cur; void* bno_cur; int agno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct xfs_scrub*,int ,int ) ;
 int FUNC_1 (struct xfs_mount*,struct xchk_ag*) ;
 void* FUNC_2 (struct xfs_mount*,int ,int ,int ,int ) ;
 void* FUNC_3 (struct xfs_mount*,int ,int ,int ,int ) ;
 int FUNC_4 (struct xfs_mount*,int ,int ,int ) ;
 int FUNC_5 (struct xfs_mount*,int ,int ,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;

int
FUNC_9(
 struct xfs_scrub *VAR_7,
 struct xchk_ag *VAR_8)
{
 struct xfs_mount *VAR_9 = VAR_7->mp;
 xfs_agnumber_t VAR_10 = VAR_8->agno;

 FUNC_1(VAR_7->mp, VAR_8);
 if (VAR_8->agf_bp &&
     FUNC_0(VAR_7, VAR_8->pag, VAR_1)) {

  VAR_8->bno_cur = FUNC_2(VAR_9, VAR_7->tp, VAR_8->agf_bp,
    VAR_10, VAR_1);
  if (!VAR_8->bno_cur)
   goto err;
 }

 if (VAR_8->agf_bp &&
     FUNC_0(VAR_7, VAR_8->pag, VAR_2)) {

  VAR_8->cnt_cur = FUNC_2(VAR_9, VAR_7->tp, VAR_8->agf_bp,
    VAR_10, VAR_2);
  if (!VAR_8->cnt_cur)
   goto err;
 }


 if (VAR_8->agi_bp &&
     FUNC_0(VAR_7, VAR_8->pag, VAR_4)) {
  VAR_8->ino_cur = FUNC_3(VAR_9, VAR_7->tp, VAR_8->agi_bp,
     VAR_10, VAR_4);
  if (!VAR_8->ino_cur)
   goto err;
 }


 if (VAR_8->agi_bp && FUNC_6(&VAR_9->m_sb) &&
     FUNC_0(VAR_7, VAR_8->pag, VAR_3)) {
  VAR_8->fino_cur = FUNC_3(VAR_9, VAR_7->tp, VAR_8->agi_bp,
    VAR_10, VAR_3);
  if (!VAR_8->fino_cur)
   goto err;
 }


 if (VAR_8->agf_bp && FUNC_8(&VAR_9->m_sb) &&
     FUNC_0(VAR_7, VAR_8->pag, VAR_6)) {
  VAR_8->rmap_cur = FUNC_5(VAR_9, VAR_7->tp, VAR_8->agf_bp,
    VAR_10);
  if (!VAR_8->rmap_cur)
   goto err;
 }


 if (VAR_8->agf_bp && FUNC_7(&VAR_9->m_sb) &&
     FUNC_0(VAR_7, VAR_8->pag, VAR_5)) {
  VAR_8->refc_cur = FUNC_4(VAR_9, VAR_7->tp,
    VAR_8->agf_bp, VAR_10);
  if (!VAR_8->refc_cur)
   goto err;
 }

 return 0;
err:
 return -VAR_0;
}
