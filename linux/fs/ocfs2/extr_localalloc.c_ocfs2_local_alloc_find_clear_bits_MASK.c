
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ocfs2_reservation_map {int dummy; } ;
struct ocfs2_super {scalar_t__ osb_resv_level; struct ocfs2_reservation_map osb_la_resmap; } ;
struct TYPE_4__ {int i_total; } ;
struct TYPE_5__ {TYPE_1__ bitmap1; } ;
struct ocfs2_dinode {TYPE_2__ id1; } ;
struct ocfs2_alloc_reservation {int dummy; } ;
struct TYPE_6__ {void* la_bitmap; } ;


 int FUNC_0 (int) ;
 TYPE_3__* FUNC_1 (struct ocfs2_dinode*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*,int,int) ;
 scalar_t__ FUNC_4 (struct ocfs2_reservation_map*,struct ocfs2_alloc_reservation*,int*,int*) ;
 int FUNC_5 (struct ocfs2_reservation_map*,struct ocfs2_alloc_reservation*) ;
 int FUNC_6 (struct ocfs2_alloc_reservation*) ;
 int FUNC_7 (struct ocfs2_alloc_reservation*,int ) ;
 int FUNC_8 (int,int,int,int) ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static int FUNC_10(struct ocfs2_super *VAR_1,
         struct ocfs2_dinode *VAR_2,
         u32 *VAR_3,
         struct ocfs2_alloc_reservation *VAR_4)
{
 int VAR_5 = 0, VAR_6, VAR_7, VAR_8;
 int VAR_9 = 0;
 struct ocfs2_alloc_reservation VAR_10;
 void *VAR_11 = ((void*)0);
 struct ocfs2_reservation_map *VAR_12 = &VAR_1->osb_la_resmap;

 if (!VAR_2->id1.bitmap1.i_total) {
  VAR_6 = -1;
  goto bail;
 }

 if (!VAR_4) {
  VAR_9 = 1;
  FUNC_6(&VAR_10);
  FUNC_7(&VAR_10, VAR_0);
  VAR_4 = &VAR_10;
 }

 VAR_5 = *VAR_3;
 if (FUNC_4(VAR_12, VAR_4, &VAR_6, &VAR_5) == 0) {
  if (VAR_5 < *VAR_3)
   *VAR_3 = VAR_5;
  goto bail;
 }





 FUNC_0(VAR_1->osb_resv_level != 0);





 VAR_11 = FUNC_1(VAR_2)->la_bitmap;

 VAR_5 = VAR_6 = VAR_8 = 0;
 VAR_7 = FUNC_2(VAR_2->id1.bitmap1.i_total);
 while ((VAR_6 = FUNC_3(VAR_11, VAR_7, VAR_8)) != -1) {
  if (VAR_6 == VAR_7) {

   break;
  }





  if (VAR_6 == VAR_8) {

   VAR_5++;
   VAR_8++;
  } else {

   VAR_5 = 1;
   VAR_8 = VAR_6+1;
  }

  if (VAR_5 == *VAR_3) {

   break;
  }
 }

 FUNC_9(VAR_6, VAR_5);

 if (VAR_5 == *VAR_3)
  VAR_6 = VAR_8 - VAR_5;
 else
  VAR_6 = -1;

bail:
 if (VAR_9)
  FUNC_5(VAR_12, VAR_4);

 FUNC_8(*VAR_3,
  FUNC_2(VAR_2->id1.bitmap1.i_total),
  VAR_6, VAR_5);

 return VAR_6;
}
