
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int priority; int seq_num; int frag_num; } ;
struct TYPE_6__ {TYPE_1__ attrib; } ;
struct TYPE_5__ {TYPE_3__ hdr; } ;
union recv_frame {TYPE_2__ u; } ;
typedef int u8 ;
typedef scalar_t__ u16 ;
struct stainfo_rxcache {scalar_t__* tid_rxseq; } ;
typedef int sint ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

sint FUNC_1(union recv_frame *VAR_4, u8 VAR_5, struct stainfo_rxcache *VAR_6)
{
 sint VAR_7 = VAR_4->u.hdr.attrib.priority;

 u16 VAR_8 = ((VAR_4->u.hdr.attrib.seq_num&0xffff) << 4) |
  (VAR_4->u.hdr.attrib.frag_num & 0xf);

 if (VAR_7 > 15) {
  FUNC_0(VAR_3, VAR_2, ("recv_decache, (tid>15)! seq_ctrl = 0x%x, tid = 0x%x\n", VAR_8, VAR_7));

  return VAR_0;
 }

 if (1) {
  if (VAR_8 == VAR_6->tid_rxseq[VAR_7]) {
   FUNC_0(VAR_3, VAR_2, ("recv_decache, seq_ctrl = 0x%x, tid = 0x%x, tid_rxseq = 0x%x\n", VAR_8, VAR_7, VAR_6->tid_rxseq[VAR_7]));

   return VAR_0;
  }
 }

 VAR_6->tid_rxseq[VAR_7] = VAR_8;

 return VAR_1;

}
