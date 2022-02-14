
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mwifiex_private {int dummy; } ;
struct mwifiex_ds_reg_rw {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 int FUNC_0 (struct mwifiex_private*,int ,int ,int ,struct mwifiex_ds_reg_rw*,int) ;

__attribute__((used)) static int FUNC_1(struct mwifiex_private *VAR_5,
     struct mwifiex_ds_reg_rw *VAR_6,
     u16 VAR_7)
{
 u16 VAR_8;

 switch (VAR_6->type) {
 case 130:
  VAR_8 = VAR_2;
  break;
 case 132:
  VAR_8 = VAR_0;
  break;
 case 128:
  VAR_8 = VAR_4;
  break;
 case 129:
  VAR_8 = VAR_3;
  break;
 case 131:
  VAR_8 = VAR_1;
  break;
 default:
  return -1;
 }

 return FUNC_0(VAR_5, VAR_8, VAR_7, 0, VAR_6, 1);
}
