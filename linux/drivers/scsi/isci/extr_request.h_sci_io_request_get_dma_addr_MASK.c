
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isci_request {scalar_t__ request_daddr; } ;
typedef scalar_t__ dma_addr_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline dma_addr_t
FUNC_1(struct isci_request *VAR_0, void *VAR_1)
{

 char *VAR_2 = (char *)VAR_1;
 char *VAR_3 = (char *)VAR_0;

 FUNC_0(VAR_2 < VAR_3);
 FUNC_0((VAR_2 - VAR_3) >= sizeof(*VAR_0));

 return VAR_0->request_daddr + (VAR_2 - VAR_3);
}
