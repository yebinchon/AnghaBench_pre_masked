
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xfs_extlen_t ;
typedef scalar_t__ xfs_agblock_t ;
typedef int targs ;
struct xfs_trans {int t_flags; } ;
struct xfs_perag {scalar_t__ pagf_flcount; scalar_t__ pagf_agflreset; scalar_t__ pagf_metadata; int pagf_init; } ;
struct xfs_mount {int dummy; } ;
struct xfs_buf {int dummy; } ;
struct xfs_alloc_arg {int alignment; int minlen; int prod; scalar_t__ agbno; scalar_t__ len; struct xfs_buf* agbp; int resv; scalar_t__ maxlen; int agno; struct xfs_perag* pag; int type; struct xfs_mount* mp; struct xfs_trans* tp; int oinfo; int datatype; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct xfs_alloc_arg*,int ,int) ;
 int FUNC_2 (struct xfs_trans*,struct xfs_buf*,struct xfs_perag*) ;
 int FUNC_3 (struct xfs_alloc_arg*) ;
 int FUNC_4 (struct xfs_trans*,struct xfs_buf*,scalar_t__*,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct xfs_mount*,struct xfs_perag*) ;
 int FUNC_7 (struct xfs_trans*,struct xfs_buf*,struct xfs_buf*,scalar_t__,int ) ;
 int FUNC_8 (struct xfs_mount*,struct xfs_trans*,int ,int,struct xfs_buf**) ;
 int FUNC_9 (struct xfs_mount*,struct xfs_trans*,int ,struct xfs_buf**) ;
 int FUNC_10 (struct xfs_alloc_arg*,scalar_t__,int) ;
 int FUNC_11 (struct xfs_trans*,int ,scalar_t__,int *) ;
 int FUNC_12 (struct xfs_trans*,struct xfs_buf*) ;

int
FUNC_13(
 struct xfs_alloc_arg *VAR_11,
 int VAR_12)
{
 struct xfs_mount *VAR_13 = VAR_11->mp;
 struct xfs_perag *VAR_14 = VAR_11->pag;
 struct xfs_trans *VAR_15 = VAR_11->tp;
 struct xfs_buf *VAR_16 = ((void*)0);
 struct xfs_buf *VAR_17 = ((void*)0);
 struct xfs_alloc_arg VAR_18;
 xfs_agblock_t VAR_19;
 xfs_extlen_t VAR_20;
 int VAR_21 = 0;


 FUNC_0(VAR_15->t_flags & VAR_10);

 if (!VAR_14->pagf_init) {
  VAR_21 = FUNC_8(VAR_13, VAR_15, VAR_11->agno, VAR_12, &VAR_16);
  if (VAR_21)
   goto out_no_agbp;
  if (!VAR_14->pagf_init) {
   FUNC_0(VAR_12 & VAR_7);
   FUNC_0(!(VAR_12 & VAR_4));
   goto out_agbp_relse;
  }
 }






 if (VAR_14->pagf_metadata && FUNC_5(VAR_11->datatype) &&
     (VAR_12 & VAR_7)) {
  FUNC_0(!(VAR_12 & VAR_4));
  goto out_agbp_relse;
 }

 VAR_20 = FUNC_6(VAR_13, VAR_14);
 if (!FUNC_10(VAR_11, VAR_20, VAR_12 |
   VAR_3))
  goto out_agbp_relse;





 if (!VAR_16) {
  VAR_21 = FUNC_8(VAR_13, VAR_15, VAR_11->agno, VAR_12, &VAR_16);
  if (VAR_21)
   goto out_no_agbp;
  if (!VAR_16) {
   FUNC_0(VAR_12 & VAR_7);
   FUNC_0(!(VAR_12 & VAR_4));
   goto out_no_agbp;
  }
 }


 if (VAR_14->pagf_agflreset)
  FUNC_2(VAR_15, VAR_16, VAR_14);


 VAR_20 = FUNC_6(VAR_13, VAR_14);
 if (!FUNC_10(VAR_11, VAR_20, VAR_12))
  goto out_agbp_relse;
 FUNC_1(&VAR_18, 0, sizeof(VAR_18));

 if (VAR_12 & VAR_5)
  VAR_18.oinfo = VAR_9;
 else
  VAR_18.oinfo = VAR_8;
 while (!(VAR_12 & VAR_6) && VAR_14->pagf_flcount > VAR_20) {
  VAR_21 = FUNC_4(VAR_15, VAR_16, &VAR_19, 0);
  if (VAR_21)
   goto out_agbp_relse;


  FUNC_11(VAR_15, VAR_11->agno, VAR_19, &VAR_18.oinfo);
 }

 VAR_18.tp = VAR_15;
 VAR_18.mp = VAR_13;
 VAR_18.agbp = VAR_16;
 VAR_18.agno = VAR_11->agno;
 VAR_18.alignment = VAR_18.minlen = VAR_18.prod = 1;
 VAR_18.type = VAR_2;
 VAR_18.pag = VAR_14;
 VAR_21 = FUNC_9(VAR_13, VAR_15, VAR_18.agno, &VAR_17);
 if (VAR_21)
  goto out_agbp_relse;


 while (VAR_14->pagf_flcount < VAR_20) {
  VAR_18.agbno = 0;
  VAR_18.maxlen = VAR_20 - VAR_14->pagf_flcount;
  VAR_18.resv = VAR_1;


  VAR_21 = FUNC_3(&VAR_18);
  if (VAR_21)
   goto out_agflbp_relse;






  if (VAR_18.agbno == VAR_0) {
   if (VAR_12 & VAR_4)
    break;
   goto out_agflbp_relse;
  }



  for (VAR_19 = VAR_18.agbno; VAR_19 < VAR_18.agbno + VAR_18.len; VAR_19++) {
   VAR_21 = FUNC_7(VAR_15, VAR_16,
       VAR_17, VAR_19, 0);
   if (VAR_21)
    goto out_agflbp_relse;
  }
 }
 FUNC_12(VAR_15, VAR_17);
 VAR_11->agbp = VAR_16;
 return 0;

out_agflbp_relse:
 FUNC_12(VAR_15, VAR_17);
out_agbp_relse:
 if (VAR_16)
  FUNC_12(VAR_15, VAR_16);
out_no_agbp:
 VAR_11->agbp = ((void*)0);
 return VAR_21;
}
