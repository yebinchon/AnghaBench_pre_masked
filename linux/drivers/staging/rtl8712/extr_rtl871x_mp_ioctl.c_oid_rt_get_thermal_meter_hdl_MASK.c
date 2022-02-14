
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint ;
typedef int u8 ;
typedef int u32 ;
struct oid_par_priv {scalar_t__ type_of_oid; int information_buf_len; int* bytes_rw; scalar_t__ information_buf; scalar_t__ adapter_context; } ;
struct TYPE_3__ {int bcompleted; int io_value; scalar_t__ io_offset; int act_type; } ;
struct TYPE_4__ {int act_in_progress; TYPE_1__ workparam; } ;
struct _adapter {TYPE_2__ mppriv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct _adapter*,int*) ;

uint FUNC_1(struct oid_par_priv *VAR_5)
{
 struct _adapter *VAR_6 = (struct _adapter *)
       (VAR_5->adapter_context);

 if (VAR_5->type_of_oid != VAR_1)
  return VAR_3;

 if (VAR_6->mppriv.act_in_progress)
  return VAR_3;

 if (VAR_5->information_buf_len < sizeof(u8))
  return VAR_2;

 VAR_6->mppriv.act_in_progress = 1;
 VAR_6->mppriv.workparam.bcompleted = 0;
 VAR_6->mppriv.workparam.act_type = VAR_0;
 VAR_6->mppriv.workparam.io_offset = 0;
 VAR_6->mppriv.workparam.io_value = 0xFFFFFFFF;
 FUNC_0(VAR_6, &VAR_6->mppriv.workparam.io_value);
 VAR_6->mppriv.workparam.bcompleted = 1;
 VAR_6->mppriv.act_in_progress = 0;
 *(u32 *)VAR_5->information_buf =
     VAR_6->mppriv.workparam.io_value;
 *VAR_5->bytes_rw = sizeof(u32);
 return VAR_4;
}
