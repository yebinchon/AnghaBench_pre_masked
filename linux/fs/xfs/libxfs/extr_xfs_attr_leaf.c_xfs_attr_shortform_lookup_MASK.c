
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ namelen; int flags; int name; TYPE_1__* dp; } ;
typedef TYPE_4__ xfs_da_args_t ;
struct TYPE_13__ {int count; } ;
struct TYPE_15__ {TYPE_3__ hdr; TYPE_6__* list; } ;
typedef TYPE_5__ xfs_attr_shortform_t ;
struct TYPE_16__ {scalar_t__ namelen; int flags; int nameval; } ;
typedef TYPE_6__ xfs_attr_sf_entry_t ;
struct TYPE_12__ {scalar_t__ if_data; } ;
struct xfs_ifork {int if_flags; TYPE_2__ if_u1; } ;
struct TYPE_11__ {struct xfs_ifork* i_afp; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__* FUNC_1 (TYPE_6__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ,int ) ;

int
FUNC_5(xfs_da_args_t *VAR_3)
{
 xfs_attr_shortform_t *VAR_4;
 xfs_attr_sf_entry_t *VAR_5;
 int VAR_6;
 struct xfs_ifork *VAR_7;

 FUNC_3(VAR_3);

 VAR_7 = VAR_3->dp->i_afp;
 FUNC_0(VAR_7->if_flags & VAR_2);
 VAR_4 = (xfs_attr_shortform_t *)VAR_7->if_u1.if_data;
 VAR_5 = &VAR_4->list[0];
 for (VAR_6 = 0; VAR_6 < VAR_4->hdr.count;
    VAR_5 = FUNC_1(VAR_5), VAR_6++) {
  if (VAR_5->namelen != VAR_3->namelen)
   continue;
  if (FUNC_2(VAR_3->name, VAR_5->nameval, VAR_3->namelen) != 0)
   continue;
  if (!FUNC_4(VAR_3->flags, VAR_5->flags))
   continue;
  return -VAR_0;
 }
 return -VAR_1;
}
