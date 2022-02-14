
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_buf_log_format {int blf_flags; } ;
typedef enum xfs_blft { ____Placeholder_xfs_blft } xfs_blft ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline void
FUNC_1(struct xfs_buf_log_format *VAR_4, enum xfs_blft VAR_5)
{
 FUNC_0(VAR_5 > VAR_3 && VAR_5 < VAR_1);
 VAR_4->blf_flags &= ~VAR_0;
 VAR_4->blf_flags |= ((VAR_5 << VAR_2) & VAR_0);
}
