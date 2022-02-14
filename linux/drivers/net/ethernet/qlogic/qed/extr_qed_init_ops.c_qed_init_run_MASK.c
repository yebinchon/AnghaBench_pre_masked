
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int delay; } ;
struct TYPE_5__ {int op_data; } ;
union init_op {int callback; TYPE_3__ delay; int if_phase; int if_mode; int read; int write; TYPE_2__ raw; } ;
typedef size_t u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int * unzip_buf; struct qed_dev* cdev; } ;
struct qed_dev {TYPE_1__* fw_data; } ;
struct TYPE_4__ {size_t init_ops_size; union init_op* init_ops; } ;


 int VAR_0 ;
 int FUNC_0 (size_t,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int VAR_4 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int ) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_ptt*,int *) ;
 size_t FUNC_5 (struct qed_hwfn*,int *,int) ;
 size_t FUNC_6 (struct qed_hwfn*,int *,int,int) ;
 int FUNC_7 (struct qed_hwfn*,struct qed_ptt*,int *) ;
 int FUNC_8 (struct qed_hwfn*,struct qed_ptt*,int *,int) ;
 int FUNC_9 (size_t) ;

int FUNC_10(struct qed_hwfn *VAR_5,
   struct qed_ptt *VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
 struct qed_dev *VAR_10 = VAR_5->cdev;
 u32 VAR_11, VAR_12;
 union init_op *VAR_13;
 bool VAR_14 = 0;
 int VAR_15 = 0;

 VAR_12 = VAR_10->fw_data->init_ops_size;
 VAR_13 = VAR_10->fw_data->init_ops;

 VAR_5->unzip_buf = FUNC_2(VAR_4 * 4, VAR_1);
 if (!VAR_5->unzip_buf)
  return -VAR_0;

 for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
  union init_op *VAR_16 = &VAR_13[VAR_11];
  u32 VAR_17 = FUNC_3(VAR_16->raw.op_data);

  switch (FUNC_0(VAR_17, VAR_2)) {
  case 128:
   VAR_15 = FUNC_8(VAR_5, VAR_6, &VAR_16->write,
          VAR_14);
   break;
  case 129:
   FUNC_7(VAR_5, VAR_6, &VAR_16->read);
   break;
  case 131:
   VAR_11 += FUNC_5(VAR_5, &VAR_16->if_mode,
           VAR_9);
   break;
  case 130:
   VAR_11 += FUNC_6(VAR_5, &VAR_16->if_phase,
            VAR_7, VAR_8);
   VAR_14 = FUNC_0(VAR_17, VAR_3);
   break;
  case 132:



   FUNC_9(FUNC_3(VAR_16->delay.delay));
   break;

  case 133:
   VAR_15 = FUNC_4(VAR_5, VAR_6, &VAR_16->callback);
   break;
  }

  if (VAR_15)
   break;
 }

 FUNC_1(VAR_5->unzip_buf);
 VAR_5->unzip_buf = ((void*)0);
 return VAR_15;
}
