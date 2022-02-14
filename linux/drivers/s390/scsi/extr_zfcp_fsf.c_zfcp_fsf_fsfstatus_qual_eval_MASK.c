
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct zfcp_fsf_req {int status; TYPE_5__* adapter; TYPE_3__* qtcb; } ;
struct TYPE_11__ {TYPE_4__* ccw_device; } ;
struct TYPE_10__ {int dev; } ;
struct TYPE_7__ {int* word; } ;
struct TYPE_8__ {TYPE_1__ fsf_status_qual; } ;
struct TYPE_9__ {TYPE_2__ header; } ;
 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_5__*,int ,char*) ;
 int FUNC_2 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_3(struct zfcp_fsf_req *VAR_1)
{
 switch (VAR_1->qtcb->header.fsf_status_qual.word[0]) {
 case 132:
 case 131:
 case 129:
 case 128:
  return;
 case 133:
  break;
 case 130:
  FUNC_0(&VAR_1->adapter->ccw_device->dev,
   "The FCP adapter reported a problem "
   "that cannot be recovered\n");
  FUNC_2(VAR_1->adapter);
  FUNC_1(VAR_1->adapter, 0, "fsfsqe1");
  break;
 }

 VAR_1->status |= VAR_0;
}
