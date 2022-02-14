
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_tx_packet {void (* packet_callback ) (void*,unsigned int) ;void* callback_data; } ;
struct ipw_hardware {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ipw_tx_packet* FUNC_0 (unsigned int,unsigned int,int ) ;
 int FUNC_1 (unsigned char*,unsigned char const*,unsigned int) ;
 int FUNC_2 (struct ipw_hardware*,int ,struct ipw_tx_packet*) ;

int FUNC_3(struct ipw_hardware *VAR_3, unsigned int VAR_4,
       const unsigned char *VAR_5, unsigned int VAR_6,
       void (*VAR_7) (void *VAR_8, unsigned int VAR_9),
       void *VAR_10)
{
 struct ipw_tx_packet *VAR_11;

 VAR_11 = FUNC_0(VAR_6, (VAR_4 + 1),
   VAR_2);
 if (!VAR_11)
  return -VAR_0;
 VAR_11->packet_callback = VAR_7;
 VAR_11->callback_data = VAR_10;
 FUNC_1((unsigned char *) VAR_11 + sizeof(struct ipw_tx_packet), VAR_5,
   VAR_6);

 FUNC_2(VAR_3, VAR_1, VAR_11);
 return 0;
}
