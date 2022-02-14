
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_tmf_request_hdr {int dummy; } ;
struct iscsi_task_params {int dummy; } ;
struct iscsi_common_hdr {int dummy; } ;
struct data_hdr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct iscsi_task_params*,struct data_hdr*,int ) ;
 int FUNC_1 (struct iscsi_task_params*,int *,int *,struct iscsi_common_hdr*,int *,int ,int) ;

int FUNC_2(struct iscsi_task_params *VAR_1,
        struct iscsi_tmf_request_hdr *VAR_2)
{
 FUNC_0(VAR_1, (struct data_hdr *)VAR_2,
    VAR_0);

 FUNC_1(VAR_1, ((void*)0), ((void*)0),
   (struct iscsi_common_hdr *)VAR_2, ((void*)0),
   VAR_0, 0);

 return 0;
}
