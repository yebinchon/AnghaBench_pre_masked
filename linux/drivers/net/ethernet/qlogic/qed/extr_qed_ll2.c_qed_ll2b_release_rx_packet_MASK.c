
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qed_hwfn {int cdev; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int ,void*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0,
           u8 VAR_1,
           void *VAR_2,
           dma_addr_t VAR_3,
           bool VAR_4)
{
 struct qed_hwfn *VAR_5 = VAR_0;

 FUNC_0(VAR_5->cdev, VAR_2);
}
