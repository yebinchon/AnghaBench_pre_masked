
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_info_freeinode {TYPE_1__* ifi_stat; int ifi_req; } ;
struct TYPE_5__ {int i_used; int i_total; } ;
struct TYPE_6__ {TYPE_2__ bitmap1; } ;
struct ocfs2_dinode {TYPE_3__ id1; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_4__ {void* lfi_free; void* lfi_total; } ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct inode*,struct buffer_head**,int ) ;
 int FUNC_7 (struct inode*,int ) ;
 int FUNC_8 (struct ocfs2_super*,int ,int,struct buffer_head**) ;

__attribute__((used)) static int FUNC_9(struct ocfs2_super *VAR_0,
           struct inode *VAR_1, u64 VAR_2,
           struct ocfs2_info_freeinode *VAR_3,
           u32 VAR_4)
{
 int VAR_5 = 0, VAR_6 = 0;

 struct buffer_head *VAR_7 = ((void*)0);
 struct ocfs2_dinode *VAR_8 = ((void*)0);

 if (VAR_1)
  FUNC_1(VAR_1);

 if (VAR_1 && FUNC_5(&VAR_3->ifi_req)) {
  VAR_5 = FUNC_6(VAR_1, &VAR_7, 0);
  if (VAR_5 < 0) {
   FUNC_4(VAR_5);
   goto bail;
  }
  VAR_6 = 1;
 } else {
  VAR_5 = FUNC_8(VAR_0, VAR_2, 1, &VAR_7);
  if (VAR_5 < 0) {
   FUNC_4(VAR_5);
   goto bail;
  }
 }

 VAR_8 = (struct ocfs2_dinode *)VAR_7->b_data;

 VAR_3->ifi_stat[VAR_4].lfi_total =
  FUNC_3(VAR_8->id1.bitmap1.i_total);
 VAR_3->ifi_stat[VAR_4].lfi_free =
  FUNC_3(VAR_8->id1.bitmap1.i_total) -
  FUNC_3(VAR_8->id1.bitmap1.i_used);

bail:
 if (VAR_6)
  FUNC_7(VAR_1, 0);

 if (VAR_1)
  FUNC_2(VAR_1);

 FUNC_0(VAR_7);

 return VAR_5;
}
