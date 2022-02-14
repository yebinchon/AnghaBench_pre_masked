
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u8 ;
typedef int u16 ;
struct oid_par_priv {scalar_t__ type_of_oid; scalar_t__ information_buf; scalar_t__ adapter_context; } ;
struct _adapter {int dummy; } ;
struct EFUSE_ACCESS_STRUCT {int start_addr; int cnts; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct _adapter*,int,int,int,int *) ;
 int FUNC_1 (struct _adapter*) ;

uint FUNC_2(struct oid_par_priv *VAR_4)
{
 struct _adapter *VAR_5 = (struct _adapter *)
       (VAR_4->adapter_context);

 uint VAR_6 = VAR_2;

 struct EFUSE_ACCESS_STRUCT *VAR_7;
 u8 *VAR_8;
 u16 VAR_9 = 0, VAR_10 = 0;

 if (VAR_4->type_of_oid != VAR_3)
  return VAR_1;

 VAR_7 = (struct EFUSE_ACCESS_STRUCT *)VAR_4->information_buf;
 VAR_9 = VAR_7->start_addr;
 VAR_10 = VAR_7->cnts;
 VAR_8 = VAR_7->data;

 if ((VAR_9 > 511) || (VAR_10 < 1) || (VAR_10 > 512) ||
     (VAR_9 + VAR_10) > FUNC_1(VAR_5))
  return VAR_1;
 if (!FUNC_0(VAR_5, 0, VAR_9, VAR_10, VAR_8))
  VAR_6 = VAR_0;
 return VAR_6;
}
