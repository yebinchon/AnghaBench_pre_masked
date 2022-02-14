
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct venus_inst {scalar_t__ state; int hfi_codec; int session_type; int done; struct venus_core* core; } ;
struct venus_core {struct hfi_ops* ops; } ;
struct hfi_ops {int (* session_init ) (struct venus_inst*,int ,int ) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct venus_inst*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct venus_inst*) ;

int FUNC_4(struct venus_inst *VAR_3, u32 VAR_4)
{
 struct venus_core *VAR_5 = VAR_3->core;
 const struct hfi_ops *VAR_6 = VAR_5->ops;
 int VAR_7;

 if (VAR_3->state != VAR_2)
  return -VAR_0;

 VAR_3->hfi_codec = FUNC_2(VAR_4);
 FUNC_0(&VAR_3->done);

 VAR_7 = VAR_6->session_init(VAR_3, VAR_3->session_type, VAR_3->hfi_codec);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_3(VAR_3);
 if (VAR_7)
  return VAR_7;

 VAR_3->state = VAR_1;

 return 0;
}
