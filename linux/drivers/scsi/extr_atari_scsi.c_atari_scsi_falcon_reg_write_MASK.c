
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u_short ;
typedef scalar_t__ u8 ;
struct TYPE_2__ {void* fdc_acces_seccount; void* dma_mode_status; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_1, u8 VAR_2)
{
 unsigned long VAR_3;

 VAR_1 += 0x88;
 FUNC_1(VAR_3);
 VAR_0.dma_mode_status = (u_short)VAR_1;
 VAR_0.fdc_acces_seccount = (u_short)VAR_2;
 FUNC_0(VAR_3);
}
