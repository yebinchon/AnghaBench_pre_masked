
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiq_config {int version_min; int version; int max_services; int max_outstanding_bulks; void* bulk_threshold; void* max_msg_size; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_0(struct vchiq_config *VAR_5)
{
 VAR_5->max_msg_size = VAR_0;
 VAR_5->bulk_threshold = VAR_0;
 VAR_5->max_outstanding_bulks = VAR_2;
 VAR_5->max_services = VAR_1;
 VAR_5->version = VAR_3;
 VAR_5->version_min = VAR_4;
}
