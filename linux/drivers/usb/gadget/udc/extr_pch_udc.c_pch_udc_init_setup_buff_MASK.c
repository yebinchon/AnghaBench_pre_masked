
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct pch_udc_stp_dma_desc {int status; int request; scalar_t__ reserved; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static void FUNC_1(struct pch_udc_stp_dma_desc *VAR_1)
{
 static u32 VAR_2;

 if (!VAR_1)
  return;
 VAR_1->reserved = ++VAR_2;
 FUNC_0(&VAR_1->request, 0xFF, sizeof VAR_1->request);
 VAR_1->status = VAR_0;
}
