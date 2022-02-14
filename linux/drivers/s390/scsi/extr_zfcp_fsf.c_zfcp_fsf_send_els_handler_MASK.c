
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zfcp_fsf_req {int status; TYPE_2__* qtcb; struct zfcp_fsf_ct_els* data; } ;
struct zfcp_fsf_ct_els {int handler_data; int (* handler ) (int ) ;int status; } ;
struct TYPE_3__ {int * word; } ;
struct fsf_qtcb_header {int fsf_status; TYPE_1__ fsf_status_qual; } ;
struct TYPE_4__ {struct fsf_qtcb_header header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,struct zfcp_fsf_req*) ;
 int FUNC_2 (struct zfcp_fsf_req*) ;

__attribute__((used)) static void FUNC_3(struct zfcp_fsf_req *VAR_2)
{
 struct zfcp_fsf_ct_els *VAR_3 = VAR_2->data;
 struct fsf_qtcb_header *VAR_4 = &VAR_2->qtcb->header;

 VAR_3->status = -VAR_0;

 if (VAR_2->status & VAR_1)
  goto skip_fsfstatus;

 switch (VAR_4->fsf_status) {
 case 136:
  VAR_3->status = 0;
  FUNC_1("fsselh1", VAR_2);
  break;
 case 131:
  FUNC_2(VAR_2);
  break;
 case 138:
  switch (VAR_4->fsf_status_qual.word[0]){
  case 130:
  case 128:
  case 129:
   VAR_2->status |= VAR_1;
   break;
  }
  break;
 case 137:
 case 135:
 case 134:
 case 133:
  break;
 case 132:


 default:
  VAR_2->status |= VAR_1;
  break;
 }
skip_fsfstatus:
 if (VAR_3->handler)
  VAR_3->handler(VAR_3->handler_data);
}
