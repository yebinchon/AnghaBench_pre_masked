
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int (* set_chnl_bw_handler ) (struct adapter*,int ,int,int ,int ) ;} ;
struct adapter {TYPE_1__ HalFunc; } ;
typedef enum CHANNEL_WIDTH { ____Placeholder_CHANNEL_WIDTH } CHANNEL_WIDTH ;


 int FUNC_0 (struct adapter*,int ,int,int ,int ) ;

void FUNC_1(struct adapter *VAR_0, u8 VAR_1,
    enum CHANNEL_WIDTH VAR_2, u8 VAR_3, u8 VAR_4)
{
 if (VAR_0->HalFunc.set_chnl_bw_handler)
  VAR_0->HalFunc.set_chnl_bw_handler(VAR_0, VAR_1,
            VAR_2, VAR_3,
            VAR_4);
}
