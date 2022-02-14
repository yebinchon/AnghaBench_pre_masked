
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct ena_common_mem_addr {scalar_t__ mem_addr_high; int mem_addr_low; } ;
struct ena_com_dev {scalar_t__ dma_addr_bits; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct ena_com_dev *VAR_1,
           struct ena_common_mem_addr *VAR_2,
           dma_addr_t VAR_3)
{
 if ((VAR_3 & FUNC_0(VAR_1->dma_addr_bits - 1, 0)) != VAR_3) {
  FUNC_2("dma address has more bits that the device supports\n");
  return -VAR_0;
 }

 VAR_2->mem_addr_low = FUNC_1(VAR_3);
 VAR_2->mem_addr_high = (u16)FUNC_3(VAR_3);

 return 0;
}
