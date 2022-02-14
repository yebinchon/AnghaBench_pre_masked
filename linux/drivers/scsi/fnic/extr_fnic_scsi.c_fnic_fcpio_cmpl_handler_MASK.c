
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vnic_dev {int dummy; } ;
struct TYPE_6__ {int active_fw_reqs; } ;
struct TYPE_7__ {TYPE_2__ fw_stats; } ;
struct fnic {TYPE_1__* lport; TYPE_3__ fnic_stats; } ;
struct TYPE_8__ {int type; } ;
struct fcpio_fw_req {TYPE_4__ hdr; } ;
struct TYPE_5__ {int host; } ;
 int FUNC_0 (int ,int ,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fnic*,unsigned int,struct fcpio_fw_req*) ;
 int FUNC_3 (struct fnic*,struct fcpio_fw_req*) ;
 int FUNC_4 (struct fnic*,struct fcpio_fw_req*) ;
 int FUNC_5 (struct fnic*,struct fcpio_fw_req*) ;
 int FUNC_6 (struct fnic*,struct fcpio_fw_req*) ;
 struct fnic* FUNC_7 (struct vnic_dev*) ;

__attribute__((used)) static int FUNC_8(struct vnic_dev *VAR_1,
       unsigned int VAR_2,
       struct fcpio_fw_req *VAR_3)
{
 struct fnic *VAR_4 = FUNC_7(VAR_1);

 switch (VAR_3->hdr.type) {
 case 130:
 case 129:
 case 131:
 case 132:
 case 128:
  FUNC_1(&VAR_4->fnic_stats.fw_stats.active_fw_reqs);
  break;
 default:
  break;
 }

 switch (VAR_3->hdr.type) {
 case 133:
  FUNC_2(VAR_4, VAR_2, VAR_3);
  break;

 case 130:
  FUNC_5(VAR_4, VAR_3);
  break;

 case 129:
  FUNC_6(VAR_4, VAR_3);
  break;

 case 131:
 case 132:
  FUNC_3(VAR_4, VAR_3);
  break;

 case 128:
  FUNC_4(VAR_4, VAR_3);
  break;

 default:
  FUNC_0(VAR_0, VAR_4->lport->host,
         "firmware completion type %d\n",
         VAR_3->hdr.type);
  break;
 }

 return 0;
}
