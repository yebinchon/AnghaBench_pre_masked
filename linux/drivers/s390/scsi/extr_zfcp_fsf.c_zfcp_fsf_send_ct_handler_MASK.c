
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zfcp_fsf_req {int status; TYPE_1__* qtcb; struct zfcp_fsf_ct_els* data; struct zfcp_adapter* adapter; } ;
struct zfcp_fsf_ct_els {int handler_data; int (* handler ) (int ) ;int status; } ;
struct zfcp_adapter {int dummy; } ;
struct TYPE_4__ {int * word; } ;
struct fsf_qtcb_header {int fsf_status; TYPE_2__ fsf_status_qual; } ;
struct TYPE_3__ {struct fsf_qtcb_header header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,struct zfcp_fsf_req*) ;
 int FUNC_2 (struct zfcp_adapter*,int ,char*) ;
 int FUNC_3 (struct zfcp_fsf_req*) ;

__attribute__((used)) static void FUNC_4(struct zfcp_fsf_req *VAR_2)
{
 struct zfcp_adapter *VAR_3 = VAR_2->adapter;
 struct zfcp_fsf_ct_els *VAR_4 = VAR_2->data;
 struct fsf_qtcb_header *VAR_5 = &VAR_2->qtcb->header;

 VAR_4->status = -VAR_0;

 if (VAR_2->status & VAR_1)
  goto skip_fsfstatus;

 switch (VAR_5->fsf_status) {
        case 137:
  VAR_4->status = 0;
  FUNC_1("fsscth2", VAR_2);
  break;
        case 130:
  FUNC_3(VAR_2);
  break;
        case 139:
                switch (VAR_5->fsf_status_qual.word[0]){
                case 129:
                case 128:
   VAR_2->status |= VAR_1;
   break;
                }
                break;
        case 135:
  VAR_2->status |= VAR_1;
  break;
 case 134:
  FUNC_2(VAR_3, 0, "fsscth1");

 case 138:
 case 136:
 case 133:
 case 132:
 case 131:
  VAR_2->status |= VAR_1;
  break;
 }

skip_fsfstatus:
 if (VAR_4->handler)
  VAR_4->handler(VAR_4->handler_data);
}
