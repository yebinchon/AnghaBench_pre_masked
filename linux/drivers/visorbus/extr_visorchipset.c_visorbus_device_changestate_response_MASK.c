
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct visor_segment_state {int dummy; } ;
struct visor_device {int * pending_msg_hdr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct visor_device*,int,struct visor_segment_state) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct visor_device *VAR_1,
       int VAR_2,
       struct visor_segment_state VAR_3)
{
 if (!VAR_1->pending_msg_hdr)
  return;

 FUNC_0(VAR_0, VAR_1,
         VAR_2, VAR_3);
 FUNC_1(VAR_1->pending_msg_hdr);
 VAR_1->pending_msg_hdr = ((void*)0);
}
