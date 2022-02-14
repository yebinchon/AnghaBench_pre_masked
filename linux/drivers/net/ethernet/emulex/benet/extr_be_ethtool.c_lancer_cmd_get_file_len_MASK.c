
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct be_dma_mem {int dummy; } ;
struct be_adapter {int dummy; } ;
typedef int data_len_cmd ;


 int FUNC_0 (struct be_adapter*,struct be_dma_mem*,int ,int ,int *,int *,int *,int *) ;
 int FUNC_1 (struct be_dma_mem*,int ,int) ;

__attribute__((used)) static u32 FUNC_2(struct be_adapter *VAR_0, u8 *VAR_1)
{
 u32 VAR_2 = 0, VAR_3;
 u8 VAR_4;
 struct be_dma_mem VAR_5;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));

 FUNC_0(VAR_0, &VAR_5, 0, 0, VAR_1,
          &VAR_2, &VAR_3, &VAR_4);

 return VAR_2;
}
