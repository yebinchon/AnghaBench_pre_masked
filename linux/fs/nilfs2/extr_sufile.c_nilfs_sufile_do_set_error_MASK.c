
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_segment_usage {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int b_page; } ;
typedef int __u64 ;
struct TYPE_2__ {int ncleansegs; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct nilfs_segment_usage*) ;
 scalar_t__ FUNC_6 (struct nilfs_segment_usage*) ;
 int FUNC_7 (struct nilfs_segment_usage*) ;
 struct nilfs_segment_usage* FUNC_8 (struct inode*,int ,struct buffer_head*,void*) ;
 int FUNC_9 (struct buffer_head*,int,int ) ;

void FUNC_10(struct inode *VAR_0, __u64 VAR_1,
          struct buffer_head *VAR_2,
          struct buffer_head *VAR_3)
{
 struct nilfs_segment_usage *VAR_4;
 void *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_3->b_page);
 VAR_4 = FUNC_8(VAR_0, VAR_1, VAR_3, VAR_5);
 if (FUNC_6(VAR_4)) {
  FUNC_2(VAR_5);
  return;
 }
 VAR_6 = FUNC_5(VAR_4);
 FUNC_7(VAR_4);
 FUNC_2(VAR_5);

 if (VAR_6) {
  FUNC_9(VAR_2, -1, 0);
  FUNC_0(VAR_0)->ncleansegs--;
 }
 FUNC_3(VAR_3);
 FUNC_4(VAR_0);
}
