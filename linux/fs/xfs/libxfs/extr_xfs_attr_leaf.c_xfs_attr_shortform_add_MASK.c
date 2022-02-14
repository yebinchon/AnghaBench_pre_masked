
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int xfs_mount_t ;
struct TYPE_14__ {int di_forkoff; } ;
struct TYPE_17__ {struct xfs_ifork* i_afp; TYPE_1__ i_d; int * i_mount; } ;
typedef TYPE_4__ xfs_inode_t ;
struct TYPE_18__ {size_t namelen; size_t valuelen; int trans; int value; int name; int flags; TYPE_4__* dp; } ;
typedef TYPE_5__ xfs_da_args_t ;
struct TYPE_16__ {int count; int totsize; } ;
struct TYPE_19__ {TYPE_3__ hdr; TYPE_7__* list; } ;
typedef TYPE_6__ xfs_attr_shortform_t ;
struct TYPE_20__ {size_t namelen; size_t valuelen; int * nameval; int flags; } ;
typedef TYPE_7__ xfs_attr_sf_entry_t ;
struct TYPE_15__ {scalar_t__ if_data; } ;
struct xfs_ifork {int if_flags; TYPE_2__ if_u1; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (size_t,size_t) ;
 TYPE_7__* FUNC_3 (TYPE_7__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int ,int *,size_t) ;
 int FUNC_6 (int *,int ,size_t) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (TYPE_4__*,int,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int ,TYPE_4__*,int) ;

void
FUNC_12(xfs_da_args_t *VAR_4, int VAR_5)
{
 xfs_attr_shortform_t *VAR_6;
 xfs_attr_sf_entry_t *VAR_7;
 int VAR_8, VAR_9, VAR_10;
 xfs_mount_t *VAR_11;
 xfs_inode_t *VAR_12;
 struct xfs_ifork *VAR_13;

 FUNC_7(VAR_4);

 VAR_12 = VAR_4->dp;
 VAR_11 = VAR_12->i_mount;
 VAR_12->i_d.di_forkoff = VAR_5;

 VAR_13 = VAR_12->i_afp;
 FUNC_0(VAR_13->if_flags & VAR_1);
 VAR_6 = (xfs_attr_shortform_t *)VAR_13->if_u1.if_data;
 VAR_7 = &VAR_6->list[0];
 for (VAR_8 = 0; VAR_8 < VAR_6->hdr.count; VAR_7 = FUNC_3(VAR_7), VAR_8++) {
 }

 VAR_9 = (char *)VAR_7 - (char *)VAR_6;
 VAR_10 = FUNC_2(VAR_4->namelen, VAR_4->valuelen);
 FUNC_9(VAR_12, VAR_10, VAR_0);
 VAR_6 = (xfs_attr_shortform_t *)VAR_13->if_u1.if_data;
 VAR_7 = (xfs_attr_sf_entry_t *)((char *)VAR_6 + VAR_9);

 VAR_7->namelen = VAR_4->namelen;
 VAR_7->valuelen = VAR_4->valuelen;
 VAR_7->flags = FUNC_1(VAR_4->flags);
 FUNC_6(VAR_7->nameval, VAR_4->name, VAR_4->namelen);
 FUNC_6(&VAR_7->nameval[VAR_4->namelen], VAR_4->value, VAR_4->valuelen);
 VAR_6->hdr.count++;
 FUNC_4(&VAR_6->hdr.totsize, VAR_10);
 FUNC_11(VAR_4->trans, VAR_12, VAR_3 | VAR_2);

 FUNC_10(VAR_11, VAR_4->trans);
}
