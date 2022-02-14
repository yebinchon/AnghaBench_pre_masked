
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pkt_attrib {int ta; int ra; } ;
struct xmit_frame {scalar_t__ buf_addr; struct pkt_attrib attrib; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ) ;

void FUNC_3(struct adapter *VAR_2, struct xmit_frame *VAR_3)
{
 u8 *VAR_4;
 struct pkt_attrib *VAR_5 = &VAR_3->attrib;

 VAR_4 = (u8 *)(VAR_3->buf_addr) + VAR_1;

 FUNC_2(VAR_5->ra, FUNC_0(VAR_4), VAR_0);
 FUNC_2(VAR_5->ta, FUNC_1(VAR_4), VAR_0);
}
