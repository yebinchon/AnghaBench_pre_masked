
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct xfs_log_vec {int lv_bytes; int lv_buf_len; } ;
struct xfs_log_iovec {int i_len; } ;


 scalar_t__ FUNC_0 (int,int) ;

__attribute__((used)) static inline void
FUNC_1(struct xfs_log_vec *VAR_0, struct xfs_log_iovec *VAR_1, int VAR_2)
{
 VAR_0->lv_buf_len += FUNC_0(VAR_2, sizeof(uint64_t));
 VAR_0->lv_bytes += VAR_2;
 VAR_1->i_len = VAR_2;
}
