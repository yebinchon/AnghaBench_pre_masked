
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xfs_fileoff_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct xfs_iext_rec {scalar_t__ lo; scalar_t__ hi; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline int
FUNC_0(
 struct xfs_iext_rec *VAR_2,
 xfs_fileoff_t VAR_3)
{
 uint64_t VAR_4 = VAR_2->lo & VAR_1;
 uint32_t VAR_5 = VAR_2->hi & VAR_0;

 if (VAR_4 > VAR_3)
  return 1;
 if (VAR_4 + VAR_5 <= VAR_3)
  return -1;
 return 0;
}
