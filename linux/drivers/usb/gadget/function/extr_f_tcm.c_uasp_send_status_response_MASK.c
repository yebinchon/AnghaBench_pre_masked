
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sense_iu {int tag; } ;
struct usbg_cmd {struct f_uas* fu; int tag; struct sense_iu sense_iu; struct uas_stream* stream; } ;
struct uas_stream {TYPE_1__* req_status; } ;
struct f_uas {int ep_status; } ;
struct TYPE_2__ {struct usbg_cmd* context; int complete; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct usbg_cmd*) ;
 int VAR_1 ;
 int FUNC_2 (int ,TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_3(struct usbg_cmd *VAR_2)
{
 struct f_uas *VAR_3 = VAR_2->fu;
 struct uas_stream *VAR_4 = VAR_2->stream;
 struct sense_iu *VAR_5 = &VAR_2->sense_iu;

 VAR_5->tag = FUNC_0(VAR_2->tag);
 VAR_4->req_status->complete = VAR_1;
 VAR_4->req_status->context = VAR_2;
 VAR_2->fu = VAR_3;
 FUNC_1(VAR_2);
 return FUNC_2(VAR_3->ep_status, VAR_4->req_status, VAR_0);
}
