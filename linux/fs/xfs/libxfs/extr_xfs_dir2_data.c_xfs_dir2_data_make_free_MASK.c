
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ freetag; scalar_t__ length; } ;
typedef TYPE_3__ xfs_dir2_data_unused_t ;
typedef int xfs_dir2_data_hdr_t ;
struct xfs_dir2_data_free {scalar_t__ length; } ;
typedef struct xfs_dir2_data_free xfs_dir2_data_free_t ;
typedef scalar_t__ xfs_dir2_data_aoff_t ;
struct xfs_da_args {TYPE_2__* dp; int geo; } ;
struct xfs_buf {int * b_addr; } ;
typedef scalar_t__ __be16 ;
struct TYPE_9__ {TYPE_1__* d_ops; } ;
struct TYPE_8__ {scalar_t__ data_entry_offset; struct xfs_dir2_data_free* (* data_bestfree_p ) (int *) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__*,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 void* FUNC_3 (int) ;
 struct xfs_dir2_data_free* FUNC_4 (int *) ;
 struct xfs_dir2_data_free* FUNC_5 (int *,struct xfs_dir2_data_free*,TYPE_3__*) ;
 struct xfs_dir2_data_free* FUNC_6 (int *,struct xfs_dir2_data_free*,TYPE_3__*,int*) ;
 int FUNC_7 (int *,struct xfs_dir2_data_free*,struct xfs_dir2_data_free*,int*) ;
 int FUNC_8 (struct xfs_da_args*,struct xfs_buf*,TYPE_3__*) ;
 void** FUNC_9 (TYPE_3__*) ;
 char* FUNC_10 (int ,int *) ;

void
FUNC_11(
 struct xfs_da_args *VAR_1,
 struct xfs_buf *VAR_2,
 xfs_dir2_data_aoff_t VAR_3,
 xfs_dir2_data_aoff_t VAR_4,
 int *VAR_5,
 int *VAR_6)
{
 xfs_dir2_data_hdr_t *VAR_7;
 xfs_dir2_data_free_t *VAR_8;
 char *VAR_9;
 int VAR_10;
 xfs_dir2_data_unused_t *VAR_11;
 xfs_dir2_data_unused_t *VAR_12;
 xfs_dir2_data_unused_t *VAR_13;
 struct xfs_dir2_data_free *VAR_14;

 VAR_7 = VAR_2->b_addr;




 VAR_9 = FUNC_10(VAR_1->geo, VAR_7);
 FUNC_0(VAR_9 != ((void*)0));





 if (VAR_3 > VAR_1->dp->d_ops->data_entry_offset) {
  __be16 *VAR_15;

  VAR_15 = (__be16 *)((char *)VAR_7 + VAR_3) - 1;
  VAR_13 = (xfs_dir2_data_unused_t *)((char *)VAR_7 + FUNC_2(*VAR_15));
  if (FUNC_2(VAR_13->freetag) != VAR_0)
   VAR_13 = ((void*)0);
 } else
  VAR_13 = ((void*)0);




 if ((char *)VAR_7 + VAR_3 + VAR_4 < VAR_9) {
  VAR_12 =
   (xfs_dir2_data_unused_t *)((char *)VAR_7 + VAR_3 + VAR_4);
  if (FUNC_2(VAR_12->freetag) != VAR_0)
   VAR_12 = ((void*)0);
 } else
  VAR_12 = ((void*)0);
 FUNC_0(*VAR_6 == 0);
 VAR_10 = 0;




 VAR_14 = VAR_1->dp->d_ops->data_bestfree_p(VAR_7);
 if (VAR_13 && VAR_12) {
  xfs_dir2_data_free_t *VAR_16;




  VAR_8 = FUNC_5(VAR_7, VAR_14, VAR_13);
  VAR_16 = FUNC_5(VAR_7, VAR_14, VAR_12);






  VAR_10 = (VAR_14[2].length != 0);



  FUNC_1(&VAR_13->length, VAR_4 + FUNC_2(VAR_12->length));
  *FUNC_9(VAR_13) =
   FUNC_3((char *)VAR_13 - (char *)VAR_7);
  FUNC_8(VAR_1, VAR_2, VAR_13);
  if (!VAR_10) {






   FUNC_0(VAR_8 && VAR_16);
   if (VAR_8 == &VAR_14[1]) {
    VAR_8 = &VAR_14[0];
    FUNC_0(VAR_16 == VAR_8);
    VAR_16 = &VAR_14[1];
   }
   FUNC_7(VAR_7, VAR_14, VAR_16, VAR_5);
   FUNC_7(VAR_7, VAR_14, VAR_8, VAR_5);



   VAR_8 = FUNC_6(VAR_7, VAR_14, VAR_13,
             VAR_5);
   FUNC_0(VAR_8 == &VAR_14[0]);
   FUNC_0(VAR_8->length == VAR_13->length);
   FUNC_0(!VAR_8[1].length);
   FUNC_0(!VAR_8[2].length);
  }
 }



 else if (VAR_13) {
  VAR_8 = FUNC_5(VAR_7, VAR_14, VAR_13);
  FUNC_1(&VAR_13->length, VAR_4);
  *FUNC_9(VAR_13) =
   FUNC_3((char *)VAR_13 - (char *)VAR_7);
  FUNC_8(VAR_1, VAR_2, VAR_13);





  if (VAR_8) {
   FUNC_7(VAR_7, VAR_14, VAR_8, VAR_5);
   FUNC_6(VAR_7, VAR_14, VAR_13, VAR_5);
  }



  else {
   VAR_10 = FUNC_2(VAR_13->length) >
       FUNC_2(VAR_14[2].length);
  }
 }



 else if (VAR_12) {
  VAR_8 = FUNC_5(VAR_7, VAR_14, VAR_12);
  VAR_11 = (xfs_dir2_data_unused_t *)((char *)VAR_7 + VAR_3);
  VAR_11->freetag = FUNC_3(VAR_0);
  VAR_11->length = FUNC_3(VAR_4 + FUNC_2(VAR_12->length));
  *FUNC_9(VAR_11) =
   FUNC_3((char *)VAR_11 - (char *)VAR_7);
  FUNC_8(VAR_1, VAR_2, VAR_11);





  if (VAR_8) {
   FUNC_7(VAR_7, VAR_14, VAR_8, VAR_5);
   FUNC_6(VAR_7, VAR_14, VAR_11, VAR_5);
  }



  else {
   VAR_10 = FUNC_2(VAR_11->length) >
       FUNC_2(VAR_14[2].length);
  }
 }



 else {
  VAR_11 = (xfs_dir2_data_unused_t *)((char *)VAR_7 + VAR_3);
  VAR_11->freetag = FUNC_3(VAR_0);
  VAR_11->length = FUNC_3(VAR_4);
  *FUNC_9(VAR_11) =
   FUNC_3((char *)VAR_11 - (char *)VAR_7);
  FUNC_8(VAR_1, VAR_2, VAR_11);
  FUNC_6(VAR_7, VAR_14, VAR_11, VAR_5);
 }
 *VAR_6 = VAR_10;
}
