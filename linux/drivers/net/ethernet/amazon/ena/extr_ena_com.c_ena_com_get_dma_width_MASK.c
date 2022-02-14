
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ena_com_dev {int dma_addr_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ena_com_dev*,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct ena_com_dev *VAR_7)
{
 u32 VAR_8 = FUNC_0(VAR_7, VAR_5);
 int VAR_9;

 if (FUNC_3(VAR_8 == VAR_2)) {
  FUNC_2("Reg read timeout occurred\n");
  return -VAR_6;
 }

 VAR_9 = (VAR_8 & VAR_3) >>
  VAR_4;

 FUNC_1("ENA dma width: %d\n", VAR_9);

 if ((VAR_9 < 32) || VAR_9 > VAR_1) {
  FUNC_2("DMA width illegal value: %d\n", VAR_9);
  return -VAR_0;
 }

 VAR_7->dma_addr_bits = VAR_9;

 return VAR_9;
}
