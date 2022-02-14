
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u8 ;
typedef int u16 ;
struct oid_par_priv {scalar_t__ type_of_oid; int information_buf_len; int* bytes_rw; scalar_t__ information_buf; scalar_t__ adapter_context; } ;
struct _adapter {int dummy; } ;
struct EFUSE_ACCESS_STRUCT {int start_addr; int cnts; int * data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (struct _adapter*,int,int,int,int *) ;

uint FUNC_2(struct oid_par_priv *VAR_6)
{
 struct _adapter *VAR_7 = (struct _adapter *)
       (VAR_6->adapter_context);

 uint VAR_8 = VAR_5;

 struct EFUSE_ACCESS_STRUCT *VAR_9;
 u8 *VAR_10;
 u16 VAR_11 = 0, VAR_12 = 0;

 if (VAR_6->type_of_oid != VAR_1)
  return VAR_4;
 if (VAR_6->information_buf_len <
     sizeof(struct EFUSE_ACCESS_STRUCT))
  return VAR_3;
 VAR_9 = (struct EFUSE_ACCESS_STRUCT *)VAR_6->information_buf;
 VAR_11 = VAR_9->start_addr;
 VAR_12 = VAR_9->cnts;
 VAR_10 = VAR_9->data;
 FUNC_0(VAR_10, 0xFF, VAR_12);
 if ((VAR_11 > 511) || (VAR_12 < 1) || (VAR_12 > 512) || (VAR_11 + VAR_12) >
      VAR_0)
  return VAR_4;
 if (!FUNC_1(VAR_7, 1, VAR_11, VAR_12, VAR_10))
  VAR_8 = VAR_2;
 *VAR_6->bytes_rw = VAR_6->information_buf_len;
 return VAR_8;
}
