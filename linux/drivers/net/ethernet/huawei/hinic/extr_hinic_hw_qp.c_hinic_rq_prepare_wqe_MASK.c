
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct hinic_sge {int lo_addr; int hi_addr; } ;
struct hinic_rq_ctrl {int ctrl_info; } ;
struct hinic_rq_bufdesc {int lo_addr; int hi_addr; } ;
struct hinic_rq_cqe_sect {int sge; } ;
struct hinic_rq_wqe {struct hinic_rq_ctrl ctrl; struct hinic_rq_bufdesc buf_desc; struct hinic_rq_cqe_sect cqe_sect; } ;
struct hinic_rq_cqe {int dummy; } ;
struct hinic_rq {int * cqe_dma; struct hinic_rq_cqe** cqe; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int) ;

void FUNC_3(struct hinic_rq *VAR_5, u16 VAR_6,
     struct hinic_rq_wqe *VAR_7, struct hinic_sge *VAR_8)
{
 struct hinic_rq_cqe_sect *VAR_9 = &VAR_7->cqe_sect;
 struct hinic_rq_bufdesc *VAR_10 = &VAR_7->buf_desc;
 struct hinic_rq_cqe *VAR_11 = VAR_5->cqe[VAR_6];
 struct hinic_rq_ctrl *VAR_12 = &VAR_7->ctrl;
 dma_addr_t VAR_13 = VAR_5->cqe_dma[VAR_6];

 VAR_12->ctrl_info =
  FUNC_0(FUNC_1(sizeof(*VAR_12)), VAR_3) |
  FUNC_0(FUNC_1(sizeof(*VAR_9)),
      VAR_2) |
  FUNC_0(FUNC_1(sizeof(*VAR_10)),
      VAR_0) |
  FUNC_0(VAR_4, VAR_1);

 FUNC_2(&VAR_9->sge, VAR_13, sizeof(*VAR_11));

 VAR_10->hi_addr = VAR_8->hi_addr;
 VAR_10->lo_addr = VAR_8->lo_addr;
}
