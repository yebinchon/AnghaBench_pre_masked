
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {struct ksz_desc* cur; } ;
struct ksz_hw {scalar_t__ tx_int_cnt; scalar_t__ tx_int_mask; scalar_t__ io; int dst_ports; scalar_t__ tx_size; TYPE_3__ tx_desc_info; } ;
struct TYPE_8__ {int last_seg; int intr; int dest_port; } ;
struct TYPE_5__ {TYPE_4__ tx; } ;
struct TYPE_6__ {TYPE_1__ buf; } ;
struct ksz_desc {TYPE_2__ sw; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ksz_desc*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ksz_hw *VAR_1)
{
 struct ksz_desc *VAR_2 = VAR_1->tx_desc_info.cur;

 VAR_2->sw.buf.tx.last_seg = 1;


 if (VAR_1->tx_int_cnt > VAR_1->tx_int_mask) {
  VAR_2->sw.buf.tx.intr = 1;
  VAR_1->tx_int_cnt = 0;
  VAR_1->tx_size = 0;
 }


 VAR_2->sw.buf.tx.dest_port = VAR_1->dst_ports;

 FUNC_0(VAR_2);

 FUNC_1(0, VAR_1->io + VAR_0);
}
