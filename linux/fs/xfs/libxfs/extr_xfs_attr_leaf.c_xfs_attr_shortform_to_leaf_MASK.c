
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ xfs_dablk_t ;
struct TYPE_4__ {int count; int totsize; } ;
struct xfs_attr_shortform {TYPE_2__ hdr; struct xfs_attr_sf_entry* list; } ;
typedef struct xfs_attr_shortform xfs_attr_shortform_t ;
struct xfs_inode {struct xfs_ifork* i_afp; } ;
struct TYPE_3__ {scalar_t__ if_data; } ;
struct xfs_ifork {TYPE_1__ if_u1; } ;
struct xfs_da_args {size_t namelen; int flags; int hashval; int valuelen; int * value; int * name; int op_flags; int trans; int whichfork; int total; int geo; struct xfs_inode* dp; } ;
struct xfs_buf {int dummy; } ;
struct xfs_attr_sf_entry {size_t namelen; int flags; int * nameval; int valuelen; } ;
typedef int nargs ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 struct xfs_attr_sf_entry* FUNC_2 (struct xfs_attr_sf_entry*) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,scalar_t__,int) ;
 int FUNC_7 (char*,int ,int) ;
 int FUNC_8 (struct xfs_da_args*) ;
 int FUNC_9 (struct xfs_buf*,struct xfs_da_args*) ;
 int FUNC_10 (struct xfs_da_args*,scalar_t__,struct xfs_buf**) ;
 int FUNC_11 (struct xfs_buf*,struct xfs_da_args*) ;
 int FUNC_12 (int ,struct xfs_inode*,int ) ;
 int FUNC_13 (struct xfs_da_args*,scalar_t__*) ;
 int FUNC_14 (int *,size_t) ;
 int FUNC_15 (struct xfs_inode*,int,int ) ;

int
FUNC_16(
 struct xfs_da_args *VAR_4,
 struct xfs_buf **VAR_5)
{
 struct xfs_inode *VAR_6;
 struct xfs_attr_shortform *VAR_7;
 struct xfs_attr_sf_entry *VAR_8;
 struct xfs_da_args VAR_9;
 char *VAR_10;
 int VAR_11, VAR_12, VAR_13;
 xfs_dablk_t VAR_14;
 struct xfs_buf *VAR_15;
 struct xfs_ifork *VAR_16;

 FUNC_8(VAR_4);

 VAR_6 = VAR_4->dp;
 VAR_16 = VAR_6->i_afp;
 VAR_7 = (xfs_attr_shortform_t *)VAR_16->if_u1.if_data;
 VAR_13 = FUNC_3(VAR_7->hdr.totsize);
 VAR_10 = FUNC_4(VAR_13, 0);
 FUNC_0(VAR_10 != ((void*)0));
 FUNC_6(VAR_10, VAR_16->if_u1.if_data, VAR_13);
 VAR_7 = (xfs_attr_shortform_t *)VAR_10;

 FUNC_15(VAR_6, -VAR_13, VAR_2);
 FUNC_12(VAR_4->trans, VAR_6, VAR_2);

 VAR_15 = ((void*)0);
 VAR_11 = FUNC_13(VAR_4, &VAR_14);
 if (VAR_11)
  goto out;

 FUNC_0(VAR_14 == 0);
 VAR_11 = FUNC_10(VAR_4, VAR_14, &VAR_15);
 if (VAR_11)
  goto out;

 FUNC_7((char *)&VAR_9, 0, sizeof(VAR_9));
 VAR_9.dp = VAR_6;
 VAR_9.geo = VAR_4->geo;
 VAR_9.total = VAR_4->total;
 VAR_9.whichfork = VAR_2;
 VAR_9.trans = VAR_4->trans;
 VAR_9.op_flags = VAR_3;

 VAR_8 = &VAR_7->list[0];
 for (VAR_12 = 0; VAR_12 < VAR_7->hdr.count; VAR_12++) {
  VAR_9.name = VAR_8->nameval;
  VAR_9.namelen = VAR_8->namelen;
  VAR_9.value = &VAR_8->nameval[VAR_9.namelen];
  VAR_9.valuelen = VAR_8->valuelen;
  VAR_9.hashval = FUNC_14(VAR_8->nameval,
      VAR_8->namelen);
  VAR_9.flags = FUNC_1(VAR_8->flags);
  VAR_11 = FUNC_11(VAR_15, &VAR_9);
  FUNC_0(VAR_11 == -VAR_0);
  VAR_11 = FUNC_9(VAR_15, &VAR_9);
  FUNC_0(VAR_11 != -VAR_1);
  if (VAR_11)
   goto out;
  VAR_8 = FUNC_2(VAR_8);
 }
 VAR_11 = 0;
 *VAR_5 = VAR_15;
out:
 FUNC_5(VAR_10);
 return VAR_11;
}
