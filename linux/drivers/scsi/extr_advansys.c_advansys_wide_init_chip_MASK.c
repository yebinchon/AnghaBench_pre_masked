
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adv_dvc_var {int max_host_qng; scalar_t__ chip_type; int err_code; void* carrier; int carrier_addr; } ;
struct TYPE_2__ {struct adv_dvc_var adv_dvc_var; } ;
struct asc_board {int adv_reqp_size; int adv_sgblk_pool; int dev; void* adv_reqp; int adv_reqp_addr; TYPE_1__ dvc_var; } ;
struct Scsi_Host {int dummy; } ;
typedef int adv_sgblk_t ;
typedef int adv_req_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (struct adv_dvc_var*) ;
 int FUNC_3 (struct adv_dvc_var*) ;
 int FUNC_4 (struct adv_dvc_var*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_5 (int ,int,int *,int ) ;
 int FUNC_6 (char*,int ,size_t,int,int ) ;
 int FUNC_7 (int ,struct Scsi_Host*,char*,...) ;
 struct asc_board* FUNC_8 (struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_9(struct Scsi_Host *VAR_8)
{
 struct asc_board *VAR_9 = FUNC_8(VAR_8);
 struct adv_dvc_var *VAR_10 = &VAR_9->dvc_var.adv_dvc_var;
 size_t VAR_11;
 int VAR_12, VAR_13;





 VAR_10->carrier = FUNC_5(VAR_9->dev,
  VAR_0, &VAR_10->carrier_addr, VAR_5);
 FUNC_1(1, "carrier 0x%p\n", VAR_10->carrier);

 if (!VAR_10->carrier)
  goto kmalloc_failed;






 VAR_9->adv_reqp_size = VAR_10->max_host_qng * sizeof(adv_req_t);
 if (VAR_9->adv_reqp_size & 0x1f) {
  FUNC_1(1, "unaligned reqp %lu bytes\n", sizeof(adv_req_t));
  VAR_9->adv_reqp_size = FUNC_0(VAR_9->adv_reqp_size);
 }
 VAR_9->adv_reqp = FUNC_5(VAR_9->dev, VAR_9->adv_reqp_size,
  &VAR_9->adv_reqp_addr, VAR_5);

 if (!VAR_9->adv_reqp)
  goto kmalloc_failed;

 FUNC_1(1, "reqp 0x%p, req_cnt %d, bytes %lu\n", VAR_9->adv_reqp,
  VAR_10->max_host_qng, VAR_9->adv_reqp_size);





 VAR_11 = sizeof(adv_sgblk_t) * VAR_4;
 VAR_9->adv_sgblk_pool = FUNC_6("adv_sgblk", VAR_9->dev,
      VAR_11, 32, 0);

 FUNC_1(1, "sg_cnt %d * %lu = %lu bytes\n", VAR_4,
  sizeof(adv_sgblk_t), VAR_11);

 if (!VAR_9->adv_sgblk_pool)
  goto kmalloc_failed;

 if (VAR_10->chip_type == VAR_1) {
  FUNC_1(2, "AdvInitAsc3550Driver()\n");
  VAR_12 = FUNC_2(VAR_10);
 } else if (VAR_10->chip_type == VAR_2) {
  FUNC_1(2, "AdvInitAsc38C0800Driver()\n");
  VAR_12 = FUNC_3(VAR_10);
 } else {
  FUNC_1(2, "AdvInitAsc38C1600Driver()\n");
  VAR_12 = FUNC_4(VAR_10);
 }
 VAR_13 = VAR_10->err_code;

 if (VAR_12 || VAR_13) {
  FUNC_7(VAR_7, VAR_8, "error: warn 0x%x, error "
   "0x%x\n", VAR_12, VAR_13);
 }

 goto exit;

 kmalloc_failed:
 FUNC_7(VAR_6, VAR_8, "error: kmalloc() failed\n");
 VAR_13 = VAR_3;
 exit:
 return VAR_13;
}
