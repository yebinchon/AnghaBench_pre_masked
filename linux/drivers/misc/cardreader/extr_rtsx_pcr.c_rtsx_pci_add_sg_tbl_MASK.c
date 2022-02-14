
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct rtsx_pcr {int sgi; scalar_t__ host_sg_tbl_ptr; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtsx_pcr*,char*,unsigned int,unsigned int) ;
 int FUNC_1 (int,int*) ;

__attribute__((used)) static void FUNC_2(struct rtsx_pcr *VAR_3,
  dma_addr_t VAR_4, unsigned int VAR_5, int VAR_6)
{
 u64 *VAR_7 = (u64 *)(VAR_3->host_sg_tbl_ptr) + VAR_3->sgi;
 u64 VAR_8;
 u8 VAR_9 = VAR_2 | VAR_1;

 FUNC_0(VAR_3, "DMA addr: 0x%x, Len: 0x%x\n", (unsigned int)VAR_4, VAR_5);

 if (VAR_6)
  VAR_9 |= VAR_0;
 VAR_8 = ((u64)VAR_4 << 32) | ((u64)VAR_5 << 12) | VAR_9;

 FUNC_1(VAR_8, VAR_7);
 VAR_3->sgi++;
}
