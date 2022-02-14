
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {scalar_t__ ns_segnum; scalar_t__ ns_nsegments; int ns_sb; void* ns_last_cno; void* ns_cno; void* ns_last_pseg; void* ns_last_seq; void* ns_seg_seq; void* ns_prev_seq; } ;
struct nilfs_super_block {int s_last_seq; int s_last_cno; int s_last_pseg; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct the_nilfs*,void*) ;
 int FUNC_2 (int ,int ,char*,unsigned long long,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct the_nilfs *VAR_2,
      struct nilfs_super_block *VAR_3)
{
 int VAR_4 = 0;

 VAR_2->ns_last_pseg = FUNC_0(VAR_3->s_last_pseg);
 VAR_2->ns_last_cno = FUNC_0(VAR_3->s_last_cno);
 VAR_2->ns_last_seq = FUNC_0(VAR_3->s_last_seq);

 VAR_2->ns_prev_seq = VAR_2->ns_last_seq;
 VAR_2->ns_seg_seq = VAR_2->ns_last_seq;
 VAR_2->ns_segnum =
  FUNC_1(VAR_2, VAR_2->ns_last_pseg);
 VAR_2->ns_cno = VAR_2->ns_last_cno + 1;
 if (VAR_2->ns_segnum >= VAR_2->ns_nsegments) {
  FUNC_2(VAR_2->ns_sb, VAR_1,
     "pointed segment number is out of range: segnum=%llu, nsegments=%lu",
     (unsigned long long)VAR_2->ns_segnum,
     VAR_2->ns_nsegments);
  VAR_4 = -VAR_0;
 }
 return VAR_4;
}
