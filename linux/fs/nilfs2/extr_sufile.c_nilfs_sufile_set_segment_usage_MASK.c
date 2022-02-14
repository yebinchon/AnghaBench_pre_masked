
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ time64_t ;
struct nilfs_segment_usage {int su_nblocks; int su_lastmod; } ;
struct inode {int dummy; } ;
struct buffer_head {int b_page; } ;
typedef int __u64 ;
struct TYPE_2__ {int mi_sem; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct nilfs_segment_usage*) ;
 struct nilfs_segment_usage* FUNC_11 (struct inode*,int ,struct buffer_head*,void*) ;
 int FUNC_12 (struct inode*,int ,int ,struct buffer_head**) ;
 int FUNC_13 (int *) ;

int FUNC_14(struct inode *VAR_0, __u64 VAR_1,
       unsigned long VAR_2, time64_t VAR_3)
{
 struct buffer_head *VAR_4;
 struct nilfs_segment_usage *VAR_5;
 void *VAR_6;
 int VAR_7;

 FUNC_5(&FUNC_0(VAR_0)->mi_sem);
 VAR_7 = FUNC_12(VAR_0, VAR_1, 0, &VAR_4);
 if (VAR_7 < 0)
  goto out_sem;

 VAR_6 = FUNC_6(VAR_4->b_page);
 VAR_5 = FUNC_11(VAR_0, VAR_1, VAR_4, VAR_6);
 FUNC_1(FUNC_10(VAR_5));
 if (VAR_3)
  VAR_5->su_lastmod = FUNC_4(VAR_3);
 VAR_5->su_nblocks = FUNC_3(VAR_2);
 FUNC_7(VAR_6);

 FUNC_8(VAR_4);
 FUNC_9(VAR_0);
 FUNC_2(VAR_4);

 out_sem:
 FUNC_13(&FUNC_0(VAR_0)->mi_sem);
 return VAR_7;
}
