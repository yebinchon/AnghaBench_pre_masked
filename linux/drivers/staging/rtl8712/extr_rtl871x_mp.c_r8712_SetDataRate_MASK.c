
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int curr_rateidx; } ;
struct _adapter {TYPE_1__ mppriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct _adapter*,int ,int ,int) ;

void FUNC_1(struct _adapter *VAR_2)
{
 u8 VAR_3 = VAR_0;
 u8 VAR_4 = VAR_1;
 u32 VAR_5;

 VAR_5 = (VAR_2->mppriv.curr_rateidx < 4) ? 0x4440 : 0xF200;
 FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
}
