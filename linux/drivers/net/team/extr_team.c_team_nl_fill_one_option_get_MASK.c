
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct team_option_inst_info {int array_index; TYPE_2__* port; } ;
struct team_option_inst {int changed; scalar_t__ removed; struct team_option* option; struct team_option_inst_info info; } ;
struct team_option {int type; scalar_t__ array_size; int name; } ;
struct TYPE_7__ {int ptr; int len; } ;
struct TYPE_8__ {int s32_val; int bool_val; TYPE_3__ bin_val; int str_val; int u32_val; } ;
struct team_gsetter_ctx {TYPE_4__ data; struct team_option_inst_info* info; } ;
struct team {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_6__ {TYPE_1__* dev; } ;
struct TYPE_5__ {int ifindex; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;





 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ) ;
 int FUNC_6 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int ) ;
 int FUNC_9 (struct sk_buff*,int ,int ) ;
 int FUNC_10 (struct team*,struct team_option_inst*,struct team_gsetter_ctx*) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_14, struct team *VAR_15,
           struct team_option_inst *VAR_16)
{
 struct nlattr *VAR_17;
 struct team_option *VAR_18 = VAR_16->option;
 struct team_option_inst_info *VAR_19 = &VAR_16->info;
 struct team_gsetter_ctx VAR_20;
 int VAR_21;

 VAR_20.info = VAR_19;
 VAR_21 = FUNC_10(VAR_15, VAR_16, &VAR_20);
 if (VAR_21)
  return VAR_21;

 VAR_17 = FUNC_3(VAR_14, VAR_6);
 if (!VAR_17)
  return -VAR_0;

 if (FUNC_7(VAR_14, VAR_10, VAR_18->name))
  goto nest_cancel;
 if (VAR_19->port &&
     FUNC_8(VAR_14, VAR_11,
   VAR_19->port->dev->ifindex))
  goto nest_cancel;
 if (VAR_16->option->array_size &&
     FUNC_8(VAR_14, VAR_7,
   VAR_19->array_index))
  goto nest_cancel;

 switch (VAR_18->type) {
 case 128:
  if (FUNC_9(VAR_14, VAR_13, VAR_5))
   goto nest_cancel;
  if (FUNC_8(VAR_14, VAR_9, VAR_20.data.u32_val))
   goto nest_cancel;
  break;
 case 129:
  if (FUNC_9(VAR_14, VAR_13, VAR_4))
   goto nest_cancel;
  if (FUNC_7(VAR_14, VAR_9,
       VAR_20.data.str_val))
   goto nest_cancel;
  break;
 case 132:
  if (FUNC_9(VAR_14, VAR_13, VAR_1))
   goto nest_cancel;
  if (FUNC_4(VAR_14, VAR_9, VAR_20.data.bin_val.len,
       VAR_20.data.bin_val.ptr))
   goto nest_cancel;
  break;
 case 131:
  if (FUNC_9(VAR_14, VAR_13, VAR_2))
   goto nest_cancel;
  if (VAR_20.data.bool_val &&
      FUNC_5(VAR_14, VAR_9))
   goto nest_cancel;
  break;
 case 130:
  if (FUNC_9(VAR_14, VAR_13, VAR_3))
   goto nest_cancel;
  if (FUNC_6(VAR_14, VAR_9, VAR_20.data.s32_val))
   goto nest_cancel;
  break;
 default:
  FUNC_0();
 }
 if (VAR_16->removed && FUNC_5(VAR_14, VAR_12))
  goto nest_cancel;
 if (VAR_16->changed) {
  if (FUNC_5(VAR_14, VAR_8))
   goto nest_cancel;
  VAR_16->changed = 0;
 }
 FUNC_2(VAR_14, VAR_17);
 return 0;

nest_cancel:
 FUNC_1(VAR_14, VAR_17);
 return -VAR_0;
}
