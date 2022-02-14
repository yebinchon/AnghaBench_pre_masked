
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int length; int freetag; } ;
typedef TYPE_1__ xfs_dir2_data_unused_t ;
struct TYPE_7__ {int namelen; } ;
typedef TYPE_2__ xfs_dir2_data_entry_t ;
struct xfs_dir_ops {int (* data_entsize ) (int ) ;int * (* data_entry_tag_p ) (TYPE_2__*) ;scalar_t__ (* data_entry_p ) (struct xfs_dir2_data_hdr*) ;struct xfs_dir2_data_free* (* data_bestfree_p ) (struct xfs_dir2_data_hdr*) ;} ;
struct xfs_dir2_data_hdr {scalar_t__ magic; } ;
struct xfs_dir2_data_free {int dummy; } ;
struct xfs_da_geometry {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct xfs_dir2_data_free*,int ,int) ;
 struct xfs_dir2_data_free* FUNC_4 (struct xfs_dir2_data_hdr*) ;
 scalar_t__ FUNC_5 (struct xfs_dir2_data_hdr*) ;
 int * FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct xfs_dir2_data_hdr*,struct xfs_dir2_data_free*,TYPE_1__*,int*) ;
 int * FUNC_9 (TYPE_1__*) ;
 char* FUNC_10 (struct xfs_da_geometry*,struct xfs_dir2_data_hdr*) ;

void
FUNC_11(
 struct xfs_da_geometry *VAR_6,
 const struct xfs_dir_ops *VAR_7,
 struct xfs_dir2_data_hdr *VAR_8,
 int *VAR_9)
{
 xfs_dir2_data_entry_t *VAR_10;
 xfs_dir2_data_unused_t *VAR_11;
 struct xfs_dir2_data_free *VAR_12;
 char *VAR_13;
 char *VAR_14;

 FUNC_0(VAR_8->magic == FUNC_2(VAR_3) ||
        VAR_8->magic == FUNC_2(VAR_5) ||
        VAR_8->magic == FUNC_2(VAR_0) ||
        VAR_8->magic == FUNC_2(VAR_4));




 VAR_12 = VAR_7->data_bestfree_p(VAR_8);
 FUNC_3(VAR_12, 0, sizeof(*VAR_12) * VAR_1);
 *VAR_9 = 1;



 VAR_14 = (char *)VAR_7->data_entry_p(VAR_8);
 VAR_13 = FUNC_10(VAR_6, VAR_8);



 while (VAR_14 < VAR_13) {
  VAR_11 = (xfs_dir2_data_unused_t *)VAR_14;



  if (FUNC_1(VAR_11->freetag) == VAR_2) {
   FUNC_0((char *)VAR_11 - (char *)VAR_8 ==
          FUNC_1(*FUNC_9(VAR_11)));
   FUNC_8(VAR_8, VAR_12, VAR_11, VAR_9);
   VAR_14 += FUNC_1(VAR_11->length);
  }



  else {
   VAR_10 = (xfs_dir2_data_entry_t *)VAR_14;
   FUNC_0((char *)VAR_10 - (char *)VAR_8 ==
          FUNC_1(*VAR_7->data_entry_tag_p(VAR_10)));
   VAR_14 += VAR_7->data_entsize(VAR_10->namelen);
  }
 }
}
