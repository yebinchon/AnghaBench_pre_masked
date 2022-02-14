
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint ;
struct xfs_log_vec {int dummy; } ;
struct xfs_log_iovec {int dummy; } ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static inline int
FUNC_1(
 uint VAR_0)
{
 return FUNC_0((sizeof(struct xfs_log_vec) +
     VAR_0 * sizeof(struct xfs_log_iovec)),
   sizeof(uint64_t));
}
