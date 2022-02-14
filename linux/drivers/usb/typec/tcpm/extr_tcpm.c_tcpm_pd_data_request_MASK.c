
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpm_port {unsigned int nr_source_caps; unsigned int negotiated_rev; unsigned int nr_sink_caps; void* bist_request; int state; void** sink_caps; void* sink_request; int pwr_role; void** source_caps; } ;
struct pd_message {int * payload; int header; } ;
typedef enum pd_data_msg_type { ____Placeholder_pd_data_msg_type } pd_data_msg_type ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct tcpm_port*,int *,unsigned int) ;
 int FUNC_5 (struct tcpm_port*,int *,unsigned int) ;
 int FUNC_6 (struct tcpm_port*,char*,int) ;
 int FUNC_7 (struct tcpm_port*) ;
 int FUNC_8 (struct tcpm_port*,int ) ;
 int FUNC_9 (struct tcpm_port*,int ,int ) ;
 int FUNC_10 (struct tcpm_port*,void**,unsigned int) ;

__attribute__((used)) static void FUNC_11(struct tcpm_port *VAR_11,
     const struct pd_message *VAR_12)
{
 enum pd_data_msg_type VAR_13 = FUNC_3(VAR_12->header);
 unsigned int VAR_14 = FUNC_1(VAR_12->header);
 unsigned int VAR_15 = FUNC_2(VAR_12->header);
 unsigned int VAR_16;

 switch (VAR_13) {
 case 129:
  if (VAR_11->pwr_role != VAR_9)
   break;

  for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++)
   VAR_11->source_caps[VAR_16] = FUNC_0(VAR_12->payload[VAR_16]);

  VAR_11->nr_source_caps = VAR_14;

  FUNC_7(VAR_11);

  FUNC_10(VAR_11, VAR_11->source_caps,
       VAR_11->nr_source_caps);






  if (VAR_15 == VAR_4)
   break;

  if (VAR_15 < VAR_1)
   VAR_11->negotiated_rev = VAR_15;
  FUNC_9(VAR_11, VAR_5, 0);
  break;
 case 131:
  if (VAR_11->pwr_role != VAR_10 ||
      VAR_14 != 1) {
   FUNC_8(VAR_11, VAR_3);
   break;
  }






  if (VAR_15 == VAR_4) {
   FUNC_8(VAR_11, VAR_3);
   break;
  }

  if (VAR_15 < VAR_1)
   VAR_11->negotiated_rev = VAR_15;

  VAR_11->sink_request = FUNC_0(VAR_12->payload[0]);
  FUNC_9(VAR_11, VAR_7, 0);
  break;
 case 130:

  for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++)
   VAR_11->sink_caps[VAR_16] = FUNC_0(VAR_12->payload[VAR_16]);
  VAR_11->nr_sink_caps = VAR_14;
  break;
 case 128:
  FUNC_5(VAR_11, VAR_12->payload, VAR_14);
  break;
 case 133:
  if (VAR_11->state == VAR_8 || VAR_11->state == VAR_6) {
   VAR_11->bist_request = FUNC_0(VAR_12->payload[0]);
   FUNC_9(VAR_11, VAR_0, 0);
  }
  break;
 case 135:
  FUNC_4(VAR_11, VAR_12->payload, VAR_14);
  break;
 case 134:
 case 132:

  FUNC_8(VAR_11, VAR_2);
  break;
 default:
  FUNC_6(VAR_11, "Unhandled data message type %#x", VAR_13);
  break;
 }
}
