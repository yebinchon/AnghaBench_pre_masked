
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct xfs_buf_log_format {int blf_flags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline uint16_t
FUNC_0(struct xfs_buf_log_format *VAR_2)
{
 return (VAR_2->blf_flags & VAR_0) >> VAR_1;
}
