
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lbtf_private {int dummy; } ;
struct TYPE_2__ {void* size; } ;
struct cmd_ds_set_mode {TYPE_1__ hdr; void* mode; } ;
typedef enum lbtf_mode { ____Placeholder_lbtf_mode } lbtf_mode ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct lbtf_private*,int ,TYPE_1__*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int) ;

void FUNC_5(struct lbtf_private *VAR_2, enum lbtf_mode VAR_3)
{
 struct cmd_ds_set_mode VAR_4;
 FUNC_2(VAR_1);

 VAR_4.hdr.size = FUNC_0(sizeof(VAR_4));
 VAR_4.mode = FUNC_0(VAR_3);
 FUNC_4("Switching to mode: 0x%x\n", VAR_3);
 FUNC_1(VAR_2, VAR_0, &VAR_4.hdr, sizeof(VAR_4));

 FUNC_3(VAR_1);
}
