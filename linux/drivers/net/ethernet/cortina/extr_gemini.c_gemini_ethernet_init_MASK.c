
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gemini_ethernet {int initialized; int freeq_order; int freeq_frag_order; scalar_t__ base; scalar_t__ port1; scalar_t__ port0; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct gemini_ethernet *VAR_20)
{

 if (VAR_20->initialized)
  return;
 if (VAR_20->port0 && VAR_20->port1)
  VAR_20->initialized = 1;
 else
  return;

 FUNC_0(0, VAR_20->base + VAR_3);
 FUNC_0(0, VAR_20->base + VAR_4);
 FUNC_0(0, VAR_20->base + VAR_5);
 FUNC_0(0, VAR_20->base + VAR_6);
 FUNC_0(0, VAR_20->base + VAR_7);
 FUNC_0(0xCCFC0FC0, VAR_20->base + VAR_8);
 FUNC_0(0x00F00002, VAR_20->base + VAR_9);
 FUNC_0(0xFFFFFFFF, VAR_20->base + VAR_10);
 FUNC_0(0xFFFFFFFF, VAR_20->base + VAR_11);
 FUNC_0(0xFF000003, VAR_20->base + VAR_12);


 FUNC_0(~0, VAR_20->base + VAR_13);
 FUNC_0(~0, VAR_20->base + VAR_14);
 FUNC_0(~0, VAR_20->base + VAR_15);
 FUNC_0(~0, VAR_20->base + VAR_16);
 FUNC_0(~0, VAR_20->base + VAR_17);


 FUNC_0(0, VAR_20->base + VAR_19);
 FUNC_0(0, VAR_20->base + VAR_2);
 FUNC_0(0, VAR_20->base + VAR_18);
 FUNC_0(0, VAR_20->base + VAR_1);

 VAR_20->freeq_frag_order = VAR_0;



 VAR_20->freeq_order = 1;
}
