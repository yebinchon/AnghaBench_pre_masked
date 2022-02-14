
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
struct xfs_log_vec {int dummy; } ;
struct xfs_log_iovec {int dummy; } ;
struct TYPE_2__ {int blf_flags; } ;
struct xfs_buf_log_item {int bli_flags; TYPE_1__ __bli_format; struct xfs_buf* bli_buf; } ;
struct xfs_buf_log_format {int blf_flags; int blf_size; int blf_map_size; int blf_data_map; } ;
struct xfs_buf {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct xfs_buf_log_item*) ;
 int FUNC_2 (struct xfs_log_vec*,struct xfs_log_iovec**,struct xfs_buf*,int,int,int) ;
 scalar_t__ FUNC_3 (struct xfs_buf*,int,int,int) ;
 int FUNC_4 (struct xfs_buf_log_format*) ;
 int FUNC_5 (int ,int ,int) ;
 struct xfs_buf_log_format* FUNC_6 (struct xfs_log_vec*,struct xfs_log_iovec**,int ,struct xfs_buf_log_format*,int) ;

__attribute__((used)) static void
FUNC_7(
 struct xfs_buf_log_item *VAR_3,
 struct xfs_log_vec *VAR_4,
 struct xfs_log_iovec **VAR_5,
 uint VAR_6,
 struct xfs_buf_log_format *VAR_7)
{
 struct xfs_buf *VAR_8 = VAR_3->bli_buf;
 uint VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 uint VAR_13;


 VAR_7->blf_flags = VAR_3->__bli_format.blf_flags;






 VAR_9 = FUNC_4(VAR_7);

 VAR_10 = FUNC_5(VAR_7->blf_data_map, VAR_7->blf_map_size, 0);
 if (!(VAR_3->bli_flags & VAR_1) && VAR_10 == -1) {




  return;
 }

 VAR_7 = FUNC_6(VAR_4, VAR_5, VAR_2, VAR_7, VAR_9);
 VAR_7->blf_size = 1;

 if (VAR_3->bli_flags & VAR_1) {





  FUNC_1(VAR_3);
  FUNC_0(VAR_7->blf_flags & VAR_0);
  return;
 }





 VAR_11 = VAR_10;
 VAR_13 = 1;
 for (;;) {






  VAR_12 = FUNC_5(VAR_7->blf_data_map, VAR_7->blf_map_size,
     (uint)VAR_11 + 1);







  if (VAR_12 == -1) {
   FUNC_2(VAR_4, VAR_5, VAR_8, VAR_6,
      VAR_10, VAR_13);
   VAR_7->blf_size++;
   break;
  } else if (VAR_12 != VAR_11 + 1 ||
             FUNC_3(VAR_8, VAR_6, VAR_12, VAR_11)) {
   FUNC_2(VAR_4, VAR_5, VAR_8, VAR_6,
      VAR_10, VAR_13);
   VAR_7->blf_size++;
   VAR_10 = VAR_12;
   VAR_11 = VAR_12;
   VAR_13 = 1;
  } else {
   VAR_11++;
   VAR_13++;
  }
 }
}
