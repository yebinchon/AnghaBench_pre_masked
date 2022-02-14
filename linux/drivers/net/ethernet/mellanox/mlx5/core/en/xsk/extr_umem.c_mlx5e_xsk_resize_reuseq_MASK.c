
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdp_umem_fq_reuse {int dummy; } ;
struct xdp_umem {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 struct xdp_umem_fq_reuse* FUNC_2 (int ) ;
 int FUNC_3 (struct xdp_umem*,struct xdp_umem_fq_reuse*) ;

int FUNC_4(struct xdp_umem *VAR_1, u32 VAR_2)
{
 struct xdp_umem_fq_reuse *VAR_3;

 VAR_3 = FUNC_2(VAR_2);
 if (FUNC_0(!VAR_3))
  return -VAR_0;
 FUNC_1(FUNC_3(VAR_1, VAR_3));

 return 0;
}
