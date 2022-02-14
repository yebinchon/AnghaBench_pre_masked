
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmveth_adapter {int rx_no_buffer; int * buffer_list_addr; } ;
typedef int __be64 ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ibmveth_adapter *VAR_0)
{
 __be64 *VAR_1 = VAR_0->buffer_list_addr + 4096 - 8;

 VAR_0->rx_no_buffer = FUNC_0(VAR_1);
}
