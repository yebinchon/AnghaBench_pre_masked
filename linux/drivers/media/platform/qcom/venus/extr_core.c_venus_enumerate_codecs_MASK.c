
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct venus_inst {int lock; scalar_t__ session_type; struct venus_core* core; } ;
struct venus_core {scalar_t__ dec_codecs; scalar_t__ enc_codecs; TYPE_1__* res; } ;
struct hfi_inst_ops {int dummy; } ;
struct TYPE_2__ {scalar_t__ hfi_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct venus_inst*,struct hfi_inst_ops const*) ;
 int FUNC_1 (struct venus_inst*) ;
 int FUNC_2 (struct venus_inst*) ;
 int FUNC_3 (struct venus_inst*,int ) ;
 int FUNC_4 (struct venus_inst*) ;
 struct venus_inst* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct venus_core *VAR_5, u32 VAR_6)
{
 const struct hfi_inst_ops VAR_7 = {};
 struct venus_inst *VAR_8;
 u32 VAR_9, VAR_10;
 unsigned int VAR_11;
 int VAR_12;

 if (VAR_5->res->hfi_version != VAR_2)
  return 0;

 VAR_8 = FUNC_5(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 FUNC_7(&VAR_8->lock);
 VAR_8->core = VAR_5;
 VAR_8->session_type = VAR_6;
 if (VAR_6 == VAR_4)
  VAR_10 = VAR_5->dec_codecs;
 else
  VAR_10 = VAR_5->enc_codecs;

 VAR_12 = FUNC_0(VAR_8, &VAR_7);
 if (VAR_12)
  goto err;

 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
  VAR_9 = (1UL << VAR_11) & VAR_10;
  if (!VAR_9)
   continue;

  VAR_12 = FUNC_3(VAR_8, FUNC_8(VAR_9));
  if (VAR_12)
   goto done;

  VAR_12 = FUNC_1(VAR_8);
  if (VAR_12)
   goto done;
 }

done:
 FUNC_2(VAR_8);
err:
 FUNC_6(&VAR_8->lock);
 FUNC_4(VAR_8);

 return VAR_12;
}
