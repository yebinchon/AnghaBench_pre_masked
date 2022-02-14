
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; int offset; } ;
union init_write_args {TYPE_1__ runtime; int zeros_count; int inline_val; } ;
typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct init_write_op {union init_write_args args; int data; } ;


 int FUNC_0 (struct qed_hwfn*,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_ptt*,struct init_write_op*,int,int) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_ptt*,int,int ,int) ;
 int FUNC_6 (struct qed_hwfn*,struct qed_ptt*,int,int ,int) ;
 int FUNC_7 (struct qed_hwfn*,struct qed_ptt*,int,int ,int ,int) ;
 int FUNC_8 (struct qed_hwfn*,struct qed_ptt*,int,int) ;

__attribute__((used)) static int FUNC_9(struct qed_hwfn *VAR_4,
      struct qed_ptt *VAR_5,
      struct init_write_op *VAR_6, bool VAR_7)
{
 u32 VAR_8 = FUNC_3(VAR_6->data);
 bool VAR_9 = FUNC_1(VAR_8, VAR_3);
 u32 VAR_10 = FUNC_1(VAR_8, VAR_1) << 2;
 union init_write_args *VAR_11 = &VAR_6->args;
 int VAR_12 = 0;


 if (VAR_9 && !VAR_7) {
  FUNC_0(VAR_4,
     "Need to write to %08x for Wide-bus but DMAE isn't allowed\n",
     VAR_10);
  return -VAR_0;
 }

 switch (FUNC_1(VAR_8, VAR_2)) {
 case 130:
  VAR_8 = FUNC_3(VAR_6->args.inline_val);
  FUNC_8(VAR_4, VAR_5, VAR_10, VAR_8);
  break;
 case 128:
  VAR_8 = FUNC_3(VAR_6->args.zeros_count);
  if (VAR_9 || (VAR_7 && (VAR_8 >= 64)))
   VAR_12 = FUNC_6(VAR_4, VAR_5, VAR_10, 0, VAR_8);
  else
   FUNC_5(VAR_4, VAR_5, VAR_10, 0, VAR_8);
  break;
 case 131:
  VAR_12 = FUNC_4(VAR_4, VAR_5, VAR_6,
     VAR_9, VAR_7);
  break;
 case 129:
  FUNC_7(VAR_4, VAR_5, VAR_10,
       FUNC_2(VAR_11->runtime.offset),
       FUNC_2(VAR_11->runtime.size),
       VAR_9);
  break;
 }

 return VAR_12;
}
