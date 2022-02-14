
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int priority; int seq_num; int frag_num; } ;
struct TYPE_5__ {TYPE_1__ attrib; } ;
struct TYPE_6__ {TYPE_2__ hdr; } ;
union recv_frame {TYPE_3__ u; } ;
typedef int u8 ;
typedef scalar_t__ u16 ;
struct stainfo_rxcache {scalar_t__* tid_rxseq; } ;
typedef int sint ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static sint FUNC_0(union recv_frame *VAR_2, u8 VAR_3,
    struct stainfo_rxcache *VAR_4)
{
 sint VAR_5 = VAR_2->u.hdr.attrib.priority;
 u16 VAR_6 = ((VAR_2->u.hdr.attrib.seq_num & 0xffff) << 4) |
   (VAR_2->u.hdr.attrib.frag_num & 0xf);

 if (VAR_5 > 15)
  return VAR_0;
 if (VAR_6 == VAR_4->tid_rxseq[VAR_5])
  return VAR_0;
 VAR_4->tid_rxseq[VAR_5] = VAR_6;
 return VAR_1;
}
