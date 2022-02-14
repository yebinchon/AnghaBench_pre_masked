
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct hinic_wq {int wqebb_size; scalar_t__ q_depth; } ;
struct hinic_cmdq_wqe {int dummy; } ;
struct hinic_hw_wqe {struct hinic_cmdq_wqe cmdq_wqe; } ;
struct hinic_cmdq {int wrapped; int cmdq_lock; struct hinic_wq* wq; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct hinic_hw_wqe*) ;
 int VAR_6 ;
 int FUNC_2 (struct hinic_cmdq*,int ,scalar_t__) ;
 int FUNC_3 (struct hinic_cmdq_wqe*,int ,void*,scalar_t__,int *,int,int ,int ,int ,scalar_t__) ;
 int FUNC_4 (struct hinic_cmdq_wqe*,struct hinic_cmdq_wqe*) ;
 int FUNC_5 (struct hinic_cmdq_wqe*,int ) ;
 struct hinic_hw_wqe* FUNC_6 (struct hinic_wq*,int ,scalar_t__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct hinic_cmdq *VAR_7, void *VAR_8,
       u16 VAR_9)
{
 struct hinic_cmdq_wqe *VAR_10, VAR_11;
 u16 VAR_12, VAR_13;
 struct hinic_wq *VAR_14 = VAR_7->wq;
 struct hinic_hw_wqe *VAR_15;
 int VAR_16, VAR_17;


 FUNC_7(&VAR_7->cmdq_lock);


 VAR_15 = FUNC_6(VAR_14, VAR_6, &VAR_12);
 if (FUNC_1(VAR_15)) {
  FUNC_8(&VAR_7->cmdq_lock);
  return -VAR_2;
 }

 VAR_10 = &VAR_15->cmdq_wqe;

 VAR_16 = VAR_7->wrapped;

 VAR_17 = FUNC_0(VAR_6, VAR_14->wqebb_size) / VAR_14->wqebb_size;
 VAR_13 = VAR_12 + VAR_17;
 if (VAR_13 >= VAR_14->q_depth) {
  VAR_7->wrapped = !VAR_7->wrapped;
  VAR_13 -= VAR_14->q_depth;
 }

 FUNC_3(&VAR_11, VAR_0, VAR_8,
       VAR_9, ((void*)0), VAR_16, VAR_4,
       VAR_5, VAR_1, VAR_12);


 FUNC_5(&VAR_11, VAR_6);


 FUNC_4(VAR_10, &VAR_11);

 FUNC_2(VAR_7, VAR_3, VAR_13);

 FUNC_8(&VAR_7->cmdq_lock);
 return 0;
}
