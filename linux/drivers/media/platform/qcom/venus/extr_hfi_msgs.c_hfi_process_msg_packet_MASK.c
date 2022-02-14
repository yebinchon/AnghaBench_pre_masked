
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct venus_inst {int dummy; } ;
struct venus_core {struct device* dev; } ;
struct TYPE_2__ {int session_id; } ;
struct hfi_session_pkt {TYPE_1__ shdr; } ;
struct hfi_pkt_hdr {scalar_t__ size; int pkt_type; } ;
struct hfi_done_handler {scalar_t__ pkt_sz; scalar_t__ pkt_sz2; int (* done ) (struct venus_core*,struct venus_inst*,struct hfi_pkt_hdr*) ;int pkt; scalar_t__ is_sys_pkt; } ;
struct device {int dummy; } ;


 unsigned int FUNC_0 (struct hfi_done_handler*) ;
 int VAR_0 ;
 int FUNC_1 (struct device*,char*,scalar_t__,...) ;
 int FUNC_2 (struct device*,char*,int ,int ) ;
 struct hfi_done_handler* VAR_1 ;
 int FUNC_3 (struct venus_core*,struct venus_inst*,struct hfi_pkt_hdr*) ;
 struct venus_inst* FUNC_4 (struct venus_core*,int ) ;

u32 FUNC_5(struct venus_core *VAR_2, struct hfi_pkt_hdr *VAR_3)
{
 const struct hfi_done_handler *VAR_4;
 struct device *VAR_5 = VAR_2->dev;
 struct venus_inst *VAR_6;
 bool VAR_7 = 0;
 unsigned int VAR_8;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_1); VAR_8++) {
  VAR_4 = &VAR_1[VAR_8];
  if (VAR_4->pkt != VAR_3->pkt_type)
   continue;
  VAR_7 = 1;
  break;
 }

 if (!VAR_7)
  return VAR_3->pkt_type;

 if (VAR_3->size && VAR_3->size < VAR_4->pkt_sz &&
     VAR_3->size < VAR_4->pkt_sz2) {
  FUNC_1(VAR_5, "bad packet size (%d should be %d, pkt type:%x)\n",
   VAR_3->size, VAR_4->pkt_sz, VAR_3->pkt_type);

  return VAR_3->pkt_type;
 }

 if (VAR_4->is_sys_pkt) {
  VAR_6 = ((void*)0);
 } else {
  struct hfi_session_pkt *VAR_9;

  VAR_9 = (struct hfi_session_pkt *)VAR_3;
  VAR_6 = FUNC_4(VAR_2, VAR_9->shdr.session_id);

  if (!VAR_6)
   FUNC_2(VAR_5, "no valid instance(pkt session_id:%x, pkt:%x)\n",
     VAR_9->shdr.session_id,
     VAR_4 ? VAR_4->pkt : 0);





  if (!VAR_6 && VAR_3->pkt_type != VAR_0) {
   FUNC_1(VAR_5, "got invalid session id:%x\n",
    VAR_9->shdr.session_id);
   goto invalid_session;
  }
 }

 VAR_4->done(VAR_2, VAR_6, VAR_3);

invalid_session:
 return VAR_3->pkt_type;
}
