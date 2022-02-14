
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_short ;
typedef scalar_t__ u8 ;
struct TYPE_2__ {scalar_t__ fdc_acces_seccount; scalar_t__ dma_mode_status; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;

__attribute__((used)) static u8 FUNC_2(unsigned int VAR_1)
{
 unsigned long VAR_2;
 u8 VAR_3;

 VAR_1 += 0x88;
 FUNC_1(VAR_2);
 VAR_0.dma_mode_status = (u_short)VAR_1;
 VAR_3 = (u8)VAR_0.fdc_acces_seccount;
 FUNC_0(VAR_2);
 return VAR_3;
}
