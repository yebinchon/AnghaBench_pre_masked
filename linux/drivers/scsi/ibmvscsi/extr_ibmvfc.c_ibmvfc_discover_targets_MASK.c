
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ibmvfc_host {int disc_buf_sz; int disc_buf_dma; } ;
struct TYPE_6__ {void* len; int va; } ;
struct TYPE_5__ {int length; void* opcode; void* version; } ;
struct ibmvfc_discover_targets {TYPE_3__ buffer; void* bufflen; TYPE_2__ common; } ;
struct TYPE_4__ {struct ibmvfc_discover_targets discover_targets; } ;
struct ibmvfc_event {TYPE_1__ iu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (struct ibmvfc_host*,char*) ;
 int VAR_5 ;
 struct ibmvfc_event* FUNC_4 (struct ibmvfc_host*) ;
 int FUNC_5 (struct ibmvfc_event*,int ,int ) ;
 int FUNC_6 (struct ibmvfc_host*,int ) ;
 int FUNC_7 (struct ibmvfc_event*,struct ibmvfc_host*,int ) ;
 int FUNC_8 (struct ibmvfc_host*,int ) ;
 int FUNC_9 (struct ibmvfc_discover_targets*,int ,int) ;

__attribute__((used)) static void FUNC_10(struct ibmvfc_host *VAR_6)
{
 struct ibmvfc_discover_targets *VAR_7;
 struct ibmvfc_event *VAR_8 = FUNC_4(VAR_6);

 FUNC_5(VAR_8, VAR_5, VAR_3);
 VAR_7 = &VAR_8->iu.discover_targets;
 FUNC_9(VAR_7, 0, sizeof(*VAR_7));
 VAR_7->common.version = FUNC_1(1);
 VAR_7->common.opcode = FUNC_1(VAR_0);
 VAR_7->common.length = FUNC_0(sizeof(*VAR_7));
 VAR_7->bufflen = FUNC_1(VAR_6->disc_buf_sz);
 VAR_7->buffer.va = FUNC_2(VAR_6->disc_buf_dma);
 VAR_7->buffer.len = FUNC_1(VAR_6->disc_buf_sz);
 FUNC_8(VAR_6, VAR_1);

 if (!FUNC_7(VAR_8, VAR_6, VAR_4))
  FUNC_3(VAR_6, "Sent discover targets\n");
 else
  FUNC_6(VAR_6, VAR_2);
}
