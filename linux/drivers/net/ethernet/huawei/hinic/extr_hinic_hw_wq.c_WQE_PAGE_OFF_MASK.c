
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hinic_wq {int num_wqebbs_per_page; int wqebb_size_shift; } ;
typedef int idx ;



__attribute__((used)) static inline int FUNC_0(struct hinic_wq *VAR_0, u16 VAR_1)
{
 return (((VAR_1) & ((VAR_0)->num_wqebbs_per_page - 1))
  << (VAR_0)->wqebb_size_shift);
}
