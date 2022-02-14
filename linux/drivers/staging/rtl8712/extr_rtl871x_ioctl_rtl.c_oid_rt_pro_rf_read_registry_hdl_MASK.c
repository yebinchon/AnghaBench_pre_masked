
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint ;
struct oid_par_priv {scalar_t__ type_of_oid; int information_buf_len; scalar_t__ information_buf; struct _adapter* adapter_context; } ;
struct TYPE_3__ {int bcompleted; unsigned long io_offset; int io_value; int act_type; } ;
struct TYPE_4__ {int act_in_progress; TYPE_1__ workparam; } ;
struct _adapter {TYPE_2__ mppriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct _adapter*,unsigned char,unsigned char*) ;

uint FUNC_1(struct oid_par_priv *VAR_5)
{
 uint VAR_6 = VAR_3;
 struct _adapter *VAR_7 = VAR_5->adapter_context;

 if (VAR_5->type_of_oid != VAR_4)
  return VAR_2;
 if (VAR_5->information_buf_len == (sizeof(unsigned long) *
         3)) {
  if (VAR_7->mppriv.act_in_progress) {
   VAR_6 = VAR_2;
  } else {

   VAR_7->mppriv.act_in_progress = 1;
   VAR_7->mppriv.workparam.bcompleted = 0;
   VAR_7->mppriv.workparam.act_type = VAR_0;
   VAR_7->mppriv.workparam.io_offset = *(unsigned long *)
      VAR_5->information_buf;
   VAR_7->mppriv.workparam.io_value = 0xcccccccc;
   if (FUNC_0(VAR_7,
       *(unsigned char *)VAR_5->information_buf,
       (unsigned char *)&VAR_7->mppriv.workparam.io_value
       ))
    VAR_6 = VAR_2;
  }
 } else {
  VAR_6 = VAR_1;
 }
 return VAR_6;
}
