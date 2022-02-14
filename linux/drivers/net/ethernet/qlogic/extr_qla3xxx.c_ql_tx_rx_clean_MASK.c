
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ql3_adapter {scalar_t__ rsp_consumer_index; scalar_t__ device_id; struct net_rsp_iocb* rsp_current; struct net_rsp_iocb* rsp_q_virt_addr; int * prsp_producer_index; struct net_device* ndev; } ;
struct ob_mac_iocb_rsp {int dummy; } ;
struct net_rsp_iocb {int opcode; } ;
struct net_device {int dummy; } ;
struct ib_mac_iocb_rsp {int dummy; } ;
struct ib_ip_iocb_rsp {int dummy; } ;


 scalar_t__ VAR_0 ;






 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*,char*,int,unsigned long,unsigned long,unsigned long,unsigned long) ;
 int FUNC_2 (struct ql3_adapter*,struct ib_mac_iocb_rsp*) ;
 int FUNC_3 (struct ql3_adapter*,struct ob_mac_iocb_rsp*) ;
 int FUNC_4 (struct ql3_adapter*,struct ib_ip_iocb_rsp*) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct ql3_adapter *VAR_2, int VAR_3)
{
 struct net_rsp_iocb *VAR_4;
 struct net_device *VAR_5 = VAR_2->ndev;
 int VAR_6 = 0;


 while ((FUNC_0(*(VAR_2->prsp_producer_index)) !=
  VAR_2->rsp_consumer_index) && (VAR_6 < VAR_3)) {

  VAR_4 = VAR_2->rsp_current;
  FUNC_5();




  if (VAR_2->device_id == VAR_1)
   VAR_4->opcode &= 0x7f;
  switch (VAR_4->opcode) {

  case 129:
  case 128:
   FUNC_3(VAR_2, (struct ob_mac_iocb_rsp *)
            VAR_4);
   break;

  case 130:
  case 132:
   FUNC_2(VAR_2, (struct ib_mac_iocb_rsp *)
            VAR_4);
   VAR_6++;
   break;

  case 131:
  case 133:
   FUNC_4(VAR_2, (struct ib_ip_iocb_rsp *)
       VAR_4);
   VAR_6++;
   break;
  default: {
   u32 *VAR_7 = (u32 *)VAR_4;
   FUNC_1(VAR_5,
       "Hit default case, not handled!\n"
       "	dropping the packet, opcode = %x\n"
       "0x%08lx 0x%08lx 0x%08lx 0x%08lx\n",
       VAR_4->opcode,
       (unsigned long int)VAR_7[0],
       (unsigned long int)VAR_7[1],
       (unsigned long int)VAR_7[2],
       (unsigned long int)VAR_7[3]);
  }
  }

  VAR_2->rsp_consumer_index++;

  if (VAR_2->rsp_consumer_index == VAR_0) {
   VAR_2->rsp_consumer_index = 0;
   VAR_2->rsp_current = VAR_2->rsp_q_virt_addr;
  } else {
   VAR_2->rsp_current++;
  }

 }

 return VAR_6;
}
