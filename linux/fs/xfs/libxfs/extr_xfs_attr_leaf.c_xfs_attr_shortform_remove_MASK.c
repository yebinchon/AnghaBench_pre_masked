
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_24__ {int m_flags; } ;
typedef TYPE_5__ xfs_mount_t ;
struct TYPE_23__ {scalar_t__ di_format; int di_forkoff; } ;
struct TYPE_25__ {TYPE_4__ i_d; TYPE_2__* i_afp; TYPE_5__* i_mount; } ;
typedef TYPE_6__ xfs_inode_t ;
struct TYPE_26__ {scalar_t__ namelen; int op_flags; int trans; int flags; int name; TYPE_6__* dp; } ;
typedef TYPE_7__ xfs_da_args_t ;
struct TYPE_22__ {int count; int totsize; } ;
struct TYPE_27__ {TYPE_3__ hdr; TYPE_9__* list; } ;
typedef TYPE_8__ xfs_attr_shortform_t ;
typedef int xfs_attr_sf_hdr_t ;
struct TYPE_28__ {scalar_t__ namelen; int flags; int nameval; } ;
typedef TYPE_9__ xfs_attr_sf_entry_t ;
struct TYPE_20__ {scalar_t__ if_data; } ;
struct TYPE_21__ {TYPE_1__ if_u1; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_9__*) ;
 TYPE_9__* FUNC_2 (TYPE_9__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ,scalar_t__) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (TYPE_7__*) ;
 int FUNC_8 (TYPE_6__*,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_6__*,int) ;
 int FUNC_11 (TYPE_6__*,int,int ) ;
 int FUNC_12 (TYPE_5__*,int ) ;
 int FUNC_13 (int ,TYPE_6__*,int) ;

int
FUNC_14(xfs_da_args_t *VAR_7)
{
 xfs_attr_shortform_t *VAR_8;
 xfs_attr_sf_entry_t *VAR_9;
 int VAR_10, VAR_11=0, VAR_12, VAR_13, VAR_14;
 xfs_mount_t *VAR_15;
 xfs_inode_t *VAR_16;

 FUNC_7(VAR_7);

 VAR_16 = VAR_7->dp;
 VAR_15 = VAR_16->i_mount;
 VAR_10 = sizeof(xfs_attr_sf_hdr_t);
 VAR_8 = (xfs_attr_shortform_t *)VAR_16->i_afp->if_u1.if_data;
 VAR_9 = &VAR_8->list[0];
 VAR_12 = VAR_8->hdr.count;
 for (VAR_14 = 0; VAR_14 < VAR_12; VAR_9 = FUNC_2(VAR_9),
     VAR_10 += VAR_11, VAR_14++) {
  VAR_11 = FUNC_1(VAR_9);
  if (VAR_9->namelen != VAR_7->namelen)
   continue;
  if (FUNC_5(VAR_9->nameval, VAR_7->name, VAR_7->namelen) != 0)
   continue;
  if (!FUNC_9(VAR_7->flags, VAR_9->flags))
   continue;
  break;
 }
 if (VAR_14 == VAR_12)
  return -VAR_0;




 VAR_12 = VAR_10 + VAR_11;
 VAR_13 = FUNC_4(VAR_8->hdr.totsize);
 if (VAR_12 != VAR_13)
  FUNC_6(&((char *)VAR_8)[VAR_10], &((char *)VAR_8)[VAR_12], VAR_13 - VAR_12);
 VAR_8->hdr.count--;
 FUNC_3(&VAR_8->hdr.totsize, -VAR_11);




 VAR_13 -= VAR_11;
 if (VAR_13 == sizeof(xfs_attr_sf_hdr_t) &&
     (VAR_15->m_flags & VAR_6) &&
     (VAR_16->i_d.di_format != VAR_3) &&
     !(VAR_7->op_flags & VAR_2)) {
  FUNC_8(VAR_16, VAR_7->trans);
 } else {
  FUNC_11(VAR_16, -VAR_11, VAR_1);
  VAR_16->i_d.di_forkoff = FUNC_10(VAR_16, VAR_13);
  FUNC_0(VAR_16->i_d.di_forkoff);
  FUNC_0(VAR_13 > sizeof(xfs_attr_sf_hdr_t) ||
    (VAR_7->op_flags & VAR_2) ||
    !(VAR_15->m_flags & VAR_6) ||
    VAR_16->i_d.di_format == VAR_3);
  FUNC_13(VAR_7->trans, VAR_16,
     VAR_5 | VAR_4);
 }

 FUNC_12(VAR_15, VAR_7->trans);

 return 0;
}
