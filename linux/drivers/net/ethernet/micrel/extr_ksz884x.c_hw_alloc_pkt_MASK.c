
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int avail; TYPE_5__* cur; } ;
struct ksz_hw {scalar_t__ tx_size; TYPE_4__ tx_desc_info; scalar_t__ tx_int_mask; scalar_t__ tx_int_cnt; } ;
struct TYPE_6__ {int first_seg; } ;
struct TYPE_7__ {TYPE_1__ tx; } ;
struct TYPE_8__ {TYPE_2__ buf; } ;
struct TYPE_10__ {TYPE_3__ sw; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*,TYPE_5__**) ;

__attribute__((used)) static int FUNC_1(struct ksz_hw *VAR_1, int VAR_2, int VAR_3)
{

 if (VAR_1->tx_desc_info.avail <= 1)
  return 0;


 FUNC_0(&VAR_1->tx_desc_info, &VAR_1->tx_desc_info.cur);
 VAR_1->tx_desc_info.cur->sw.buf.tx.first_seg = 1;


 ++VAR_1->tx_int_cnt;
 VAR_1->tx_size += VAR_2;


 if (VAR_1->tx_size >= VAR_0)
  VAR_1->tx_int_cnt = VAR_1->tx_int_mask + 1;

 if (VAR_3 > VAR_1->tx_desc_info.avail)
  return 1;

 return VAR_1->tx_desc_info.avail;
}
