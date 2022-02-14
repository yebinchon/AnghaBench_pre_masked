
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct enic {int vdev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int *,int) ;

int FUNC_1(struct enic *VAR_1, dma_addr_t VAR_2, u64 VAR_3)
{
 u64 VAR_4 = (u64)VAR_2, VAR_5 = VAR_3;
 int VAR_6 = 1000;

 return FUNC_0(VAR_1->vdev, VAR_0, &VAR_4, &VAR_5, VAR_6);
}
