
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef scalar_t__ u8 ;
typedef int u32 ;
struct rf_reg_param {int value; scalar_t__ offset; scalar_t__ path; } ;
struct oid_par_priv {scalar_t__ type_of_oid; int information_buf_len; int* bytes_rw; scalar_t__ information_buf; scalar_t__ adapter_context; } ;
struct _adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct _adapter*,scalar_t__,scalar_t__) ;

uint FUNC_1(struct oid_par_priv *VAR_5)
{
 struct _adapter *VAR_6 = (struct _adapter *)
       (VAR_5->adapter_context);
 struct rf_reg_param *VAR_7;
 u8 VAR_8;
 u8 VAR_9;
 u32 VAR_10;

 if (VAR_5->type_of_oid != VAR_0)
  return VAR_3;
 if (VAR_5->information_buf_len < sizeof(struct rf_reg_param))
  return VAR_2;
 VAR_7 = (struct rf_reg_param *)(VAR_5->information_buf);
 VAR_8 = (u8)VAR_7->path;
 if (VAR_8 > VAR_1)
  return VAR_3;
 VAR_9 = (u8)VAR_7->offset;
 VAR_10 = FUNC_0(VAR_6, VAR_8, VAR_9);
 VAR_7->value = VAR_10;
 *VAR_5->bytes_rw = VAR_5->information_buf_len;
 return VAR_4;
}
