
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct the_nilfs {scalar_t__ ns_last_seq; scalar_t__ ns_prev_seq; int ns_last_segment_lock; int ns_last_cno; int ns_last_pseg; } ;
typedef int sector_t ;
typedef int __u64 ;


 int FUNC_0 (struct the_nilfs*) ;
 int FUNC_1 (struct the_nilfs*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct the_nilfs *VAR_0,
       sector_t VAR_1, u64 VAR_2, __u64 VAR_3)
{
 FUNC_2(&VAR_0->ns_last_segment_lock);
 VAR_0->ns_last_pseg = VAR_1;
 VAR_0->ns_last_seq = VAR_2;
 VAR_0->ns_last_cno = VAR_3;

 if (!FUNC_0(VAR_0)) {
  if (VAR_0->ns_prev_seq == VAR_0->ns_last_seq)
   goto stay_cursor;

  FUNC_1(VAR_0);
 }
 VAR_0->ns_prev_seq = VAR_0->ns_last_seq;

 stay_cursor:
 FUNC_3(&VAR_0->ns_last_segment_lock);
}
