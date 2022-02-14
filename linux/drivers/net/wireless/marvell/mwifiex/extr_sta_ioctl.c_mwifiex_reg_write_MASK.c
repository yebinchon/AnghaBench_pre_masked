
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct mwifiex_private {int dummy; } ;
struct mwifiex_ds_reg_rw {void* value; void* offset; void* type; } ;


 int VAR_0 ;
 int FUNC_0 (struct mwifiex_private*,struct mwifiex_ds_reg_rw*,int ) ;

int
FUNC_1(struct mwifiex_private *VAR_1, u32 VAR_2,
    u32 VAR_3, u32 VAR_4)
{
 struct mwifiex_ds_reg_rw VAR_5;

 VAR_5.type = VAR_2;
 VAR_5.offset = VAR_3;
 VAR_5.value = VAR_4;

 return FUNC_0(VAR_1, &VAR_5, VAR_0);
}
