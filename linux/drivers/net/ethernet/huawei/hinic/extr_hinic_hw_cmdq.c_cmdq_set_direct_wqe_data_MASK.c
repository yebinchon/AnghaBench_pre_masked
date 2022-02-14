
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int data; int buf_len; } ;
struct hinic_cmdq_wqe_scmd {TYPE_1__ buf_desc; } ;
struct hinic_cmdq_direct_wqe {struct hinic_cmdq_wqe_scmd wqe_scmd; } ;


 int FUNC_0 (int ,void*,int ) ;

__attribute__((used)) static void FUNC_1(struct hinic_cmdq_direct_wqe *VAR_0,
         void *VAR_1, u32 VAR_2)
{
 struct hinic_cmdq_wqe_scmd *VAR_3 = &VAR_0->wqe_scmd;

 VAR_3->buf_desc.buf_len = VAR_2;
 FUNC_0(VAR_3->buf_desc.data, VAR_1, VAR_2);
}
