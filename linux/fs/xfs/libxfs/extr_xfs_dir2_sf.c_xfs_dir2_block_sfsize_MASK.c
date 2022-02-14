
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int m_sb; struct xfs_da_geometry* m_dir_geo; } ;
typedef TYPE_2__ xfs_mount_t ;
struct TYPE_17__ {TYPE_1__* d_ops; TYPE_2__* i_mount; } ;
typedef TYPE_3__ xfs_inode_t ;
typedef scalar_t__ xfs_ino_t ;
struct TYPE_18__ {int count; int i8count; } ;
typedef TYPE_4__ xfs_dir2_sf_hdr_t ;
struct TYPE_19__ {int address; } ;
typedef TYPE_5__ xfs_dir2_leaf_entry_t ;
typedef int xfs_dir2_dataptr_t ;
typedef int xfs_dir2_data_hdr_t ;
struct TYPE_20__ {int namelen; char* name; int inumber; } ;
typedef TYPE_6__ xfs_dir2_data_entry_t ;
struct TYPE_21__ {int count; } ;
typedef TYPE_7__ xfs_dir2_block_tail_t ;
typedef int u8 ;
struct xfs_da_geometry {int dummy; } ;
struct TYPE_15__ {int (* sf_put_parent_ino ) (TYPE_4__*,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*,scalar_t__) ;
 TYPE_5__* FUNC_4 (TYPE_7__*) ;
 TYPE_7__* FUNC_5 (struct xfs_da_geometry*,int *) ;
 int FUNC_6 (struct xfs_da_geometry*,int) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int *) ;

int
FUNC_9(
 xfs_inode_t *VAR_4,
 xfs_dir2_data_hdr_t *VAR_5,
 xfs_dir2_sf_hdr_t *VAR_6)
{
 xfs_dir2_dataptr_t VAR_7;
 xfs_dir2_leaf_entry_t *VAR_8;
 xfs_dir2_block_tail_t *VAR_9;
 int VAR_10;
 xfs_dir2_data_entry_t *VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 xfs_mount_t *VAR_16;
 int VAR_17;
 xfs_ino_t VAR_18 = 0;
 int VAR_19=0;
 int VAR_20;
 struct xfs_da_geometry *VAR_21;

 VAR_16 = VAR_4->i_mount;
 VAR_21 = VAR_16->m_dir_geo;





 VAR_20 = FUNC_8(&VAR_16->m_sb) ? 1 : 0;

 VAR_10 = VAR_13 = VAR_17 = 0;
 VAR_9 = FUNC_5(VAR_21, VAR_5);
 VAR_8 = FUNC_4(VAR_9);




 for (VAR_12 = 0; VAR_12 < FUNC_1(VAR_9->count); VAR_12++) {
  if ((VAR_7 = FUNC_1(VAR_8[VAR_12].address)) == VAR_1)
   continue;



  VAR_11 = (xfs_dir2_data_entry_t *)((char *)VAR_5 +
    FUNC_6(VAR_21, VAR_7));





  VAR_14 = VAR_11->namelen == 1 && VAR_11->name[0] == '.';
  VAR_15 =
   VAR_11->namelen == 2 &&
   VAR_11->name[0] == '.' && VAR_11->name[1] == '.';

  if (!VAR_14)
   VAR_13 += FUNC_2(VAR_11->inumber) > VAR_0;


  if (!VAR_14 && !VAR_15) {
   VAR_10++;
   VAR_17 += VAR_11->namelen + VAR_20;
  } else if (VAR_15)
   VAR_18 = FUNC_2(VAR_11->inumber);



  VAR_19 = FUNC_7(VAR_13) +
         VAR_10 * 3 * sizeof(u8) +
         VAR_17 +
         (VAR_13 ?
    VAR_10 * VAR_3 :
    VAR_10 * VAR_2);
  if (VAR_19 > FUNC_0(VAR_4))
   return VAR_19;
 }



 VAR_6->count = VAR_10;
 VAR_6->i8count = VAR_13;
 VAR_4->d_ops->sf_put_parent_ino(VAR_6, VAR_18);
 return VAR_19;
}
