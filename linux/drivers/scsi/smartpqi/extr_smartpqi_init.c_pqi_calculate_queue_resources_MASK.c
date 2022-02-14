
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pqi_sg_descriptor {int dummy; } ;
struct pqi_ctrl_info {int max_inbound_queues; int max_outbound_queues; int max_msix_vectors; int num_queue_groups; int max_hw_queue_index; int max_inbound_iu_length; int max_inbound_iu_length_per_firmware; int max_elements_per_iq; int max_elements_per_oq; int num_elements_per_iq; int num_elements_per_oq; scalar_t__ max_sg_per_iu; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 () ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_2(struct pqi_ctrl_info *VAR_4)
{
 int VAR_5;
 u16 VAR_6;
 u16 VAR_7;

 if (VAR_3) {
  VAR_5 = 1;
 } else {
  int VAR_8;
  int VAR_9;

  VAR_9 = FUNC_0(VAR_4->max_inbound_queues / 2,
   VAR_4->max_outbound_queues - 1);
  VAR_9 = FUNC_0(VAR_9, VAR_1);

  VAR_8 = FUNC_1();
  VAR_5 = FUNC_0(VAR_8, VAR_4->max_msix_vectors);
  VAR_5 = FUNC_0(VAR_5, VAR_9);
 }

 VAR_4->num_queue_groups = VAR_5;
 VAR_4->max_hw_queue_index = VAR_5 - 1;





 VAR_4->max_inbound_iu_length =
  (VAR_4->max_inbound_iu_length_per_firmware /
  VAR_2) *
  VAR_2;

 VAR_6 =
  (VAR_4->max_inbound_iu_length /
  VAR_2);


 VAR_6++;

 VAR_6 = FUNC_0(VAR_6,
  VAR_4->max_elements_per_iq);

 VAR_7 = ((VAR_6 - 1) * 2) + 1;
 VAR_7 = FUNC_0(VAR_7,
  VAR_4->max_elements_per_oq);

 VAR_4->num_elements_per_iq = VAR_6;
 VAR_4->num_elements_per_oq = VAR_7;

 VAR_4->max_sg_per_iu =
  ((VAR_4->max_inbound_iu_length -
  VAR_2) /
  sizeof(struct pqi_sg_descriptor)) +
  VAR_0;
}
