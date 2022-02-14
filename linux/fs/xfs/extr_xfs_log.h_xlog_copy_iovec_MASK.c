
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct xfs_log_vec {int dummy; } ;
struct xfs_log_iovec {int dummy; } ;


 int FUNC_0 (void*,void*,int) ;
 int FUNC_1 (struct xfs_log_vec*,struct xfs_log_iovec*,int) ;
 void* FUNC_2 (struct xfs_log_vec*,struct xfs_log_iovec**,int ) ;

__attribute__((used)) static inline void *
FUNC_3(struct xfs_log_vec *VAR_0, struct xfs_log_iovec **VAR_1,
  uint VAR_2, void *VAR_3, int VAR_4)
{
 void *VAR_5;

 VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2);
 FUNC_0(VAR_5, VAR_3, VAR_4);
 FUNC_1(VAR_0, *VAR_1, VAR_4);
 return VAR_5;
}
