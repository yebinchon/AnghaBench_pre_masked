
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hinic_wq {int wqebbs_per_page_shift; int num_q_pages; } ;



__attribute__((used)) static inline int FUNC_0(struct hinic_wq *VAR_0, u16 VAR_1)
{
 return (((VAR_1) >> ((VAR_0)->wqebbs_per_page_shift))
  & ((VAR_0)->num_q_pages - 1));
}
