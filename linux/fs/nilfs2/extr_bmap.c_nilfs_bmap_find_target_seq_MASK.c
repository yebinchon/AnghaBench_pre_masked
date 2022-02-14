
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_bmap {scalar_t__ b_last_allocated_key; scalar_t__ b_last_allocated_ptr; } ;
typedef scalar_t__ __u64 ;
typedef scalar_t__ __s64 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__u64 FUNC_1(const struct nilfs_bmap *VAR_2, __u64 VAR_3)
{
 __s64 VAR_4;

 VAR_4 = VAR_3 - VAR_2->b_last_allocated_key;
 if ((FUNC_0(VAR_4) < VAR_1) &&
     (VAR_2->b_last_allocated_ptr != VAR_0) &&
     (VAR_2->b_last_allocated_ptr + VAR_4 > 0))
  return VAR_2->b_last_allocated_ptr + VAR_4;
 else
  return VAR_0;
}
