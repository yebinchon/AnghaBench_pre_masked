
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ lpm; int external_id_pin_ctl; int host_dma; } ;
struct dwc2_hsotg {TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct dwc2_hsotg*) ;
 int FUNC_1 (struct dwc2_hsotg*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct dwc2_hsotg *VAR_11)
{
 u32 VAR_12;


 FUNC_1(VAR_11, 0xffffffff, VAR_10);


 FUNC_1(VAR_11, 0xffffffff, VAR_1);


 VAR_12 = VAR_4 | VAR_5;

 if (!VAR_11->params.host_dma)
  VAR_12 |= VAR_6;
 if (!VAR_11->params.external_id_pin_ctl)
  VAR_12 |= VAR_2;

 VAR_12 |= VAR_9 | VAR_8 |
    VAR_7;

 if (FUNC_0(VAR_11) && VAR_11->params.lpm)
  VAR_12 |= VAR_3;

 FUNC_1(VAR_11, VAR_12, VAR_0);
}
