
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mantis_pci {scalar_t__ buf_dma; scalar_t__ risc_dma; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int ,int,char*,...) ;

__attribute__((used)) static inline void FUNC_4(struct mantis_pci *VAR_8)
{
 u32 VAR_9 = 0;
 u32 VAR_10, VAR_11;
 u32 VAR_12;

 FUNC_3(VAR_2, 1, "Mantis create RISC program");
 FUNC_0(VAR_12);

 FUNC_3(VAR_2, 1, "risc len lines %u, bytes per line %u, bytes per DMA tr %u",
  VAR_1, VAR_0, VAR_3);

 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
   FUNC_3(VAR_2, 1, "RISC PROG line=[%d], step=[%d]", VAR_10, VAR_11);
   if (VAR_11 == 0) {
    FUNC_1(VAR_12, VAR_7 |
        VAR_5 |
        FUNC_2(VAR_10) |
        VAR_3);
   } else {
    FUNC_1(VAR_12, VAR_7 | VAR_3);
   }
   FUNC_1(VAR_12, VAR_8->buf_dma + VAR_9);
   VAR_9 += VAR_3;
    }
 }
 FUNC_1(VAR_12, VAR_6);
 FUNC_1(VAR_12, VAR_8->risc_dma);
}
