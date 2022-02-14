
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct nilfs_segment_usage {scalar_t__ su_flags; scalar_t__ su_nblocks; int su_lastmod; } ;
struct inode {int dummy; } ;
struct buffer_head {int b_page; } ;
typedef int __u64 ;
struct TYPE_2__ {int ncleansegs; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct nilfs_segment_usage*) ;
 int FUNC_9 (struct nilfs_segment_usage*) ;
 struct nilfs_segment_usage* FUNC_10 (struct inode*,int ,struct buffer_head*,void*) ;
 int FUNC_11 (struct buffer_head*,int ,int) ;

void FUNC_12(struct inode *VAR_1, __u64 VAR_2,
      struct buffer_head *VAR_3,
      struct buffer_head *VAR_4)
{
 struct nilfs_segment_usage *VAR_5;
 void *VAR_6;
 int VAR_7, VAR_8;

 VAR_6 = FUNC_4(VAR_4->b_page);
 VAR_5 = FUNC_10(VAR_1, VAR_2, VAR_4, VAR_6);
 if (VAR_5->su_flags == FUNC_2(FUNC_0(VAR_0)) &&
     VAR_5->su_nblocks == FUNC_2(0)) {
  FUNC_5(VAR_6);
  return;
 }
 VAR_7 = FUNC_8(VAR_5);
 VAR_8 = FUNC_9(VAR_5);


 VAR_5->su_lastmod = FUNC_3(0);
 VAR_5->su_nblocks = FUNC_2(0);
 VAR_5->su_flags = FUNC_2(FUNC_0(VAR_0));
 FUNC_5(VAR_6);

 FUNC_11(VAR_3, VAR_7 ? (u64)-1 : 0, VAR_8 ? 0 : 1);
 FUNC_1(VAR_1)->ncleansegs -= VAR_7;

 FUNC_6(VAR_4);
 FUNC_7(VAR_1);
}
