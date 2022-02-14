
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct hpt_iop_request_get_config* config; } ;
struct TYPE_5__ {TYPE_1__ mvfrey; } ;
struct hptiop_hba {TYPE_2__ u; } ;
struct TYPE_6__ {int size; scalar_t__ type; } ;
struct hpt_iop_request_get_config {int sdram_size; int max_devices; int alignment_mask; int data_transfer_length; int max_sg_count; int request_size; int max_requests; int firmware_version; int interface_version; TYPE_3__ header; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct hptiop_hba *VAR_1,
    struct hpt_iop_request_get_config *VAR_2)
{
 struct hpt_iop_request_get_config *VAR_3 = VAR_1->u.mvfrey.config;

 if (VAR_3->header.size != sizeof(struct hpt_iop_request_get_config) ||
   VAR_3->header.type != VAR_0)
  return -1;

 VAR_2->interface_version = VAR_3->interface_version;
 VAR_2->firmware_version = VAR_3->firmware_version;
 VAR_2->max_requests = VAR_3->max_requests;
 VAR_2->request_size = VAR_3->request_size;
 VAR_2->max_sg_count = VAR_3->max_sg_count;
 VAR_2->data_transfer_length = VAR_3->data_transfer_length;
 VAR_2->alignment_mask = VAR_3->alignment_mask;
 VAR_2->max_devices = VAR_3->max_devices;
 VAR_2->sdram_size = VAR_3->sdram_size;

 return 0;
}
