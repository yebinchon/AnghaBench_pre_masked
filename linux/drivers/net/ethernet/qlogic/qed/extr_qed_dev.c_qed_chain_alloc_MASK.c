
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct qed_dev {int dummy; } ;
struct qed_chain_ext_pbl {int dummy; } ;
struct qed_chain {int dummy; } ;
typedef enum qed_chain_use_mode { ____Placeholder_qed_chain_use_mode } qed_chain_use_mode ;
typedef enum qed_chain_mode { ____Placeholder_qed_chain_mode } qed_chain_mode ;
typedef enum qed_chain_cnt_type { ____Placeholder_qed_chain_cnt_type } qed_chain_cnt_type ;


 int FUNC_0 (struct qed_dev*,char*,...) ;



 int FUNC_1 (int,size_t,int) ;
 int FUNC_2 (struct qed_dev*,struct qed_chain*) ;
 int FUNC_3 (struct qed_dev*,struct qed_chain*,struct qed_chain_ext_pbl*) ;
 int FUNC_4 (struct qed_dev*,int,size_t,int) ;
 int FUNC_5 (struct qed_dev*,struct qed_chain*) ;
 int FUNC_6 (struct qed_dev*,struct qed_chain*) ;
 int FUNC_7 (struct qed_chain*,int,int ,int,int,int) ;

int FUNC_8(struct qed_dev *VAR_0,
      enum qed_chain_use_mode VAR_1,
      enum qed_chain_mode VAR_2,
      enum qed_chain_cnt_type VAR_3,
      u32 VAR_4,
      size_t VAR_5,
      struct qed_chain *VAR_6,
      struct qed_chain_ext_pbl *VAR_7)
{
 u32 VAR_8;
 int VAR_9 = 0;

 if (VAR_2 == 128)
  VAR_8 = 1;
 else
  VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_2);

 VAR_9 = FUNC_4(VAR_0, VAR_3, VAR_5, VAR_8);
 if (VAR_9) {
  FUNC_0(VAR_0,
     "Cannot allocate a chain with the given arguments:\n");
  FUNC_0(VAR_0,
     "[use_mode %d, mode %d, cnt_type %d, num_elems %d, elem_size %zu]\n",
     VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
  return VAR_9;
 }

 FUNC_7(VAR_6, VAR_8, (u8) VAR_5, VAR_1,
         VAR_2, VAR_3);

 switch (VAR_2) {
 case 130:
  VAR_9 = FUNC_2(VAR_0, VAR_6);
  break;
 case 128:
  VAR_9 = FUNC_5(VAR_0, VAR_6);
  break;
 case 129:
  VAR_9 = FUNC_3(VAR_0, VAR_6, VAR_7);
  break;
 }
 if (VAR_9)
  goto nomem;

 return 0;

nomem:
 FUNC_6(VAR_0, VAR_6);
 return VAR_9;
}
