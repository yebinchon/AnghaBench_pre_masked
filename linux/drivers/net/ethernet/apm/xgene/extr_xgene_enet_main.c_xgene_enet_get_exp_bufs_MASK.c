
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_enet_desc_ring {size_t exp_buf_tail; int slots; int * exp_bufs; } ;
typedef int __le64 ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static __le64 *FUNC_1(struct xgene_enet_desc_ring *VAR_1)
{
 __le64 *VAR_2;

 VAR_2 = &VAR_1->exp_bufs[VAR_1->exp_buf_tail * VAR_0];
 FUNC_0(VAR_2, 0, sizeof(__le64) * VAR_0);
 VAR_1->exp_buf_tail = (VAR_1->exp_buf_tail + 1) & ((VAR_1->slots / 2) - 1);

 return VAR_2;
}
