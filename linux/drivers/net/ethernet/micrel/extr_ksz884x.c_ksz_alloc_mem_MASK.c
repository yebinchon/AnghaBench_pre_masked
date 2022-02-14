
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ksz_hw_desc {int dummy; } ;
struct TYPE_2__ {int alloc; int size; } ;
struct ksz_hw {int tx_int_cnt; int tx_int_mask; TYPE_1__ tx_desc_info; TYPE_1__ rx_desc_info; } ;
struct dev_info {struct ksz_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct dev_info*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct dev_info *VAR_3)
{
 struct ksz_hw *VAR_4 = &VAR_3->hw;


 VAR_4->rx_desc_info.alloc = VAR_1;
 VAR_4->tx_desc_info.alloc = VAR_2;


 VAR_4->tx_int_cnt = 0;
 VAR_4->tx_int_mask = VAR_2 / 4;
 if (VAR_4->tx_int_mask > 8)
  VAR_4->tx_int_mask = 8;
 while (VAR_4->tx_int_mask) {
  VAR_4->tx_int_cnt++;
  VAR_4->tx_int_mask >>= 1;
 }
 if (VAR_4->tx_int_cnt) {
  VAR_4->tx_int_mask = (1 << (VAR_4->tx_int_cnt - 1)) - 1;
  VAR_4->tx_int_cnt = 0;
 }


 VAR_4->rx_desc_info.size =
  (((sizeof(struct ksz_hw_desc) + VAR_0 - 1) /
  VAR_0) * VAR_0);
 VAR_4->tx_desc_info.size =
  (((sizeof(struct ksz_hw_desc) + VAR_0 - 1) /
  VAR_0) * VAR_0);
 if (VAR_4->rx_desc_info.size != sizeof(struct ksz_hw_desc))
  FUNC_2("Hardware descriptor size not right!\n");
 FUNC_1(&VAR_4->rx_desc_info);
 FUNC_1(&VAR_4->tx_desc_info);


 if (FUNC_0(VAR_3))
  return 1;

 return 0;
}
