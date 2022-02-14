
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {int tx_frame; int rx_frame; int rx_busy; int cycles; } ;
struct TYPE_3__ {int tx_frame; int rx_frame; int rx_busy; int cycles; } ;
struct ath_common {TYPE_2__ cc_survey; TYPE_1__ cc_ani; void* ah; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (void*,int ) ;
 int FUNC_1 (void*,int ,int ) ;

void FUNC_2(struct ath_common *VAR_6)
{
 u32 VAR_7, VAR_8, VAR_9, VAR_10;
 void *VAR_11 = VAR_6->ah;


 FUNC_1(VAR_11, VAR_1, VAR_2);


 VAR_7 = FUNC_0(VAR_11, VAR_0);
 VAR_8 = FUNC_0(VAR_11, VAR_3);
 VAR_9 = FUNC_0(VAR_11, VAR_4);
 VAR_10 = FUNC_0(VAR_11, VAR_5);


 FUNC_1(VAR_11, VAR_0, 0);
 FUNC_1(VAR_11, VAR_4, 0);
 FUNC_1(VAR_11, VAR_3, 0);
 FUNC_1(VAR_11, VAR_5, 0);


 FUNC_1(VAR_11, VAR_1, 0);


 VAR_6->cc_ani.cycles += VAR_7;
 VAR_6->cc_ani.rx_busy += VAR_8;
 VAR_6->cc_ani.rx_frame += VAR_9;
 VAR_6->cc_ani.tx_frame += VAR_10;

 VAR_6->cc_survey.cycles += VAR_7;
 VAR_6->cc_survey.rx_busy += VAR_8;
 VAR_6->cc_survey.rx_frame += VAR_9;
 VAR_6->cc_survey.tx_frame += VAR_10;
}
