
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u32 ;
typedef int u16 ;
struct oid_par_priv {scalar_t__ type_of_oid; int information_buf_len; scalar_t__ information_buf; scalar_t__ adapter_context; } ;
struct bb_reg_param {int value; scalar_t__ offset; } ;
struct _adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct _adapter*,int,int ) ;

uint FUNC_1(struct oid_par_priv *VAR_5)
{
 struct _adapter *VAR_6 = (struct _adapter *)
       (VAR_5->adapter_context);
 struct bb_reg_param *VAR_7;
 u16 VAR_8;
 u32 VAR_9;

 if (VAR_5->type_of_oid != VAR_4)
  return VAR_2;
 if (VAR_5->information_buf_len < sizeof(struct bb_reg_param))
  return VAR_1;
 VAR_7 = (struct bb_reg_param *)(VAR_5->information_buf);
 VAR_8 = (u16)(VAR_7->offset) & 0xFFF;
 if (VAR_8 < VAR_0)
  VAR_8 |= VAR_0;
 VAR_9 = VAR_7->value;
 FUNC_0(VAR_6, VAR_8, VAR_9);
 return VAR_3;
}
