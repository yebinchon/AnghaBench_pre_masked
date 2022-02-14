
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_seg_seq; scalar_t__ ns_pseg_offset; int ns_nextnum; int ns_segnum; } ;



__attribute__((used)) static inline void FUNC_0(struct the_nilfs *VAR_0)
{

 VAR_0->ns_segnum = VAR_0->ns_nextnum;
 VAR_0->ns_pseg_offset = 0;
 VAR_0->ns_seg_seq++;
}
