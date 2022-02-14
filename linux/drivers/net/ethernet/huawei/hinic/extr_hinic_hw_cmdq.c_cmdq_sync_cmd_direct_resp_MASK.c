
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct hinic_wq {int wqebb_size; int q_depth; } ;
struct TYPE_2__ {int direct_resp; } ;
struct hinic_cmdq_wqe_lcmd {TYPE_1__ completion; } ;
struct hinic_cmdq_wqe {struct hinic_cmdq_wqe_lcmd wqe_lcmd; } ;
struct hinic_hw_wqe {struct hinic_cmdq_wqe cmdq_wqe; } ;
struct hinic_cmdq_buf {int dummy; } ;
struct hinic_cmdq {int wrapped; int** errcode; int cmdq_lock; struct completion** done; struct hinic_wq* wq; } ;
struct completion {int dummy; } ;
typedef enum hinic_mod_type { ____Placeholder_hinic_mod_type } hinic_mod_type ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct hinic_hw_wqe*) ;
 int VAR_7 ;
 int FUNC_2 (struct hinic_cmdq*,int ,int) ;
 int FUNC_3 (struct hinic_cmdq_wqe*,int ,struct hinic_cmdq_buf*,int *,int,int ,int,int ,int) ;
 int FUNC_4 (struct hinic_cmdq_wqe*,struct hinic_cmdq_wqe*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct hinic_cmdq_wqe*,int ) ;
 struct hinic_hw_wqe* FUNC_7 (struct hinic_wq*,int ,int*) ;
 int FUNC_8 (struct completion*) ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct completion*,int ) ;

__attribute__((used)) static int FUNC_13(struct hinic_cmdq *VAR_8,
         enum hinic_mod_type VAR_9, u8 VAR_10,
         struct hinic_cmdq_buf *VAR_11,
         u64 *VAR_12)
{
 struct hinic_cmdq_wqe *VAR_13, VAR_14;
 u16 VAR_15, VAR_16;
 int VAR_17, VAR_18, VAR_19;
 struct hinic_wq *VAR_20 = VAR_8->wq;
 struct hinic_hw_wqe *VAR_21;
 struct completion VAR_22;


 FUNC_10(&VAR_8->cmdq_lock);


 VAR_21 = FUNC_7(VAR_20, VAR_7, &VAR_15);
 if (FUNC_1(VAR_21)) {
  FUNC_11(&VAR_8->cmdq_lock);
  return -VAR_2;
 }

 VAR_13 = &VAR_21->cmdq_wqe;

 VAR_18 = VAR_8->wrapped;

 VAR_19 = FUNC_0(VAR_7, VAR_20->wqebb_size) / VAR_20->wqebb_size;
 VAR_16 = VAR_15 + VAR_19;
 if (VAR_16 >= VAR_20->q_depth) {
  VAR_8->wrapped = !VAR_8->wrapped;
  VAR_16 -= VAR_20->q_depth;
 }

 VAR_8->errcode[VAR_15] = &VAR_17;

 FUNC_8(&VAR_22);
 VAR_8->done[VAR_15] = &VAR_22;

 FUNC_3(&VAR_14, VAR_0, VAR_11, ((void*)0),
     VAR_18, VAR_6, VAR_9, VAR_10,
     VAR_15);


 FUNC_6(&VAR_14, VAR_7);


 FUNC_4(VAR_13, &VAR_14);

 FUNC_2(VAR_8, VAR_5, VAR_16);

 FUNC_11(&VAR_8->cmdq_lock);

 if (!FUNC_12(&VAR_22, VAR_1)) {
  FUNC_10(&VAR_8->cmdq_lock);

  if (VAR_8->errcode[VAR_15] == &VAR_17)
   VAR_8->errcode[VAR_15] = ((void*)0);

  if (VAR_8->done[VAR_15] == &VAR_22)
   VAR_8->done[VAR_15] = ((void*)0);

  FUNC_11(&VAR_8->cmdq_lock);

  return -VAR_4;
 }

 FUNC_9();

 if (VAR_12) {
  struct hinic_cmdq_wqe_lcmd *VAR_23 = &VAR_13->wqe_lcmd;

  *VAR_12 = FUNC_5(VAR_23->completion.direct_resp);
 }

 if (VAR_17 != 0)
  return -VAR_3;

 return 0;
}
