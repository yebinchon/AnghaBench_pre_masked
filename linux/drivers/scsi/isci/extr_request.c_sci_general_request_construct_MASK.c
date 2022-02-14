
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isci_request {int post_context; scalar_t__ scu_status; int sci_status; int saved_rx_frame_index; int protocol; struct isci_remote_device* target_device; int sm; } ;
struct isci_remote_device {int dummy; } ;
struct isci_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_1(struct isci_host *VAR_5,
       struct isci_remote_device *VAR_6,
       struct isci_request *VAR_7)
{
 FUNC_0(&VAR_7->sm, VAR_4, VAR_1);

 VAR_7->target_device = VAR_6;
 VAR_7->protocol = VAR_0;
 VAR_7->saved_rx_frame_index = VAR_3;

 VAR_7->sci_status = VAR_2;
 VAR_7->scu_status = 0;
 VAR_7->post_context = 0xFFFFFFFF;
}
