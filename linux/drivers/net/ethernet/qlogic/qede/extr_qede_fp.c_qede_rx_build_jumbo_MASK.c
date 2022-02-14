
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct sw_rx_data {int data; int mapping; } ;
struct sk_buff {int len; int data_len; int truesize; } ;
struct qede_rx_queue {scalar_t__ rx_buf_size; scalar_t__ sw_rx_cons; int rx_headroom; int dev; struct sw_rx_data* sw_rx_ring; } ;
struct qede_dev {int dummy; } ;
struct eth_fast_path_rx_reg_cqe {scalar_t__ bd_num; int pkt_len; } ;
struct TYPE_2__ {int nr_frags; } ;


 int VAR_0 ;
 int FUNC_0 (struct qede_dev*,char*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct qede_rx_queue*,int) ;
 int FUNC_4 (struct qede_rx_queue*) ;
 int FUNC_5 (struct sk_buff*,int ,int ,int ,scalar_t__) ;
 TYPE_1__* FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct qede_dev *VAR_3,
          struct qede_rx_queue *VAR_4,
          struct sk_buff *VAR_5,
          struct eth_fast_path_rx_reg_cqe *VAR_6,
          u16 VAR_7)
{
 u16 VAR_8 = FUNC_2(VAR_6->pkt_len);
 struct sw_rx_data *VAR_9;
 u16 VAR_10;
 u8 VAR_11;

 VAR_8 -= VAR_7;


 for (VAR_11 = VAR_6->bd_num - 1; VAR_11 > 0; VAR_11--) {
  u16 VAR_12 = VAR_8 > VAR_4->rx_buf_size ? VAR_4->rx_buf_size :
      VAR_8;

  if (FUNC_7(!VAR_12)) {
   FUNC_0(VAR_3,
          "Still got %d BDs for mapping jumbo, but length became 0\n",
          VAR_11);
   goto out;
  }


  if (FUNC_7(FUNC_3(VAR_4, 1)))
   goto out;




  VAR_10 = VAR_4->sw_rx_cons & VAR_1;
  VAR_9 = &VAR_4->sw_rx_ring[VAR_10];
  FUNC_4(VAR_4);

  FUNC_1(VAR_4->dev, VAR_9->mapping,
          VAR_2, VAR_0);

  FUNC_5(VAR_5, FUNC_6(VAR_5)->nr_frags++,
       VAR_9->data, VAR_4->rx_headroom, VAR_12);

  VAR_5->truesize += VAR_2;
  VAR_5->data_len += VAR_12;
  VAR_5->len += VAR_12;
  VAR_8 -= VAR_12;
 }

 if (FUNC_7(VAR_8))
  FUNC_0(VAR_3,
         "Mapped all BDs of jumbo, but still have %d bytes\n",
         VAR_8);

out:
 return VAR_11;
}
