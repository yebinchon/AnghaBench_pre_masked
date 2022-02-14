
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct oid_par_priv {scalar_t__ type_of_oid; int information_buf_len; int * bytes_rw; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

uint FUNC_0(struct oid_par_priv *VAR_3)
{
 if (VAR_3->type_of_oid != VAR_0)
  return VAR_1;
 *VAR_3->bytes_rw = VAR_3->information_buf_len;
 return VAR_2;
}
