
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned int len; scalar_t__ data; } ;
struct i2400m_msg_hdr {int * pld; int num_pls; } ;
struct i2400m {int rx_pl_num; int rx_pl_max; int rx_pl_min; unsigned int rx_size_acc; unsigned int rx_size_min; unsigned int rx_size_max; int rx_lock; int rx_num; } ;
struct device {int dummy; } ;


 size_t FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int,struct device*,char*,struct i2400m*,struct sk_buff*,unsigned int,int) ;
 int FUNC_3 (int,struct device*,char*,struct i2400m*,struct sk_buff*,unsigned int) ;
 int FUNC_4 (struct device*,char*,unsigned int,unsigned int,int,size_t) ;
 struct device* FUNC_5 (struct i2400m*) ;
 size_t FUNC_6 (int *) ;
 int FUNC_7 (struct i2400m*,struct i2400m_msg_hdr const*,unsigned int) ;
 int FUNC_8 (struct i2400m*,struct sk_buff*,unsigned int,int *,scalar_t__) ;
 int FUNC_9 (struct i2400m*,int *,size_t,unsigned int) ;
 int FUNC_10 (struct sk_buff*) ;
 unsigned int FUNC_11 (int ) ;
 int VAR_2 ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 size_t FUNC_14 (struct i2400m_msg_hdr const*,int ,unsigned int) ;

int FUNC_15(struct i2400m *VAR_3, struct sk_buff *VAR_4)
{
 int VAR_5, VAR_6;
 struct device *VAR_7 = FUNC_5(VAR_3);
 const struct i2400m_msg_hdr *VAR_8;
 size_t VAR_9, VAR_10;
 unsigned long VAR_11;
 unsigned VAR_12, VAR_13, VAR_14;

 VAR_14 = VAR_4->len;
 FUNC_3(4, VAR_7, "(i2400m %p skb %p [size %u])\n",
    VAR_3, VAR_4, VAR_14);
 VAR_8 = (void *) VAR_4->data;
 VAR_6 = FUNC_7(VAR_3, VAR_8, VAR_14);
 if (VAR_6 < 0)
  goto error_msg_hdr_check;
 VAR_6 = -VAR_0;
 VAR_12 = FUNC_11(VAR_8->num_pls);

 VAR_9 = FUNC_14(VAR_8, VAR_2, VAR_12);
 VAR_9 = FUNC_0(VAR_9, VAR_1);
 if (VAR_9 > VAR_14) {
  FUNC_4(VAR_7, "RX: HW BUG? message too short (%u bytes) for "
   "%u payload descriptors (%zu each, total %zu)\n",
   VAR_14, VAR_12, sizeof(VAR_8->pld[0]), VAR_9);
  goto error_pl_descr_short;
 }

 for (VAR_5 = 0; VAR_5 < VAR_12; VAR_5++) {

  VAR_10 = FUNC_6(&VAR_8->pld[VAR_5]);
  VAR_6 = FUNC_9(VAR_3, &VAR_8->pld[VAR_5],
        VAR_9, VAR_14);
  if (VAR_6 < 0)
   goto error_pl_descr_check;
  VAR_13 = VAR_12 == 1 || VAR_5 == VAR_12 - 1;
  FUNC_8(VAR_3, VAR_4, VAR_13, &VAR_8->pld[VAR_5],
      VAR_4->data + VAR_9);
  VAR_9 += FUNC_0(VAR_10, VAR_1);
  FUNC_1();
 }
 FUNC_10(VAR_4);

 FUNC_12(&VAR_3->rx_lock, VAR_11);
 VAR_3->rx_pl_num += VAR_5;
 if (VAR_5 > VAR_3->rx_pl_max)
  VAR_3->rx_pl_max = VAR_5;
 if (VAR_5 < VAR_3->rx_pl_min)
  VAR_3->rx_pl_min = VAR_5;
 VAR_3->rx_num++;
 VAR_3->rx_size_acc += VAR_14;
 if (VAR_14 < VAR_3->rx_size_min)
  VAR_3->rx_size_min = VAR_14;
 if (VAR_14 > VAR_3->rx_size_max)
  VAR_3->rx_size_max = VAR_14;
 FUNC_13(&VAR_3->rx_lock, VAR_11);
error_pl_descr_check:
error_pl_descr_short:
error_msg_hdr_check:
 FUNC_2(4, VAR_7, "(i2400m %p skb %p [size %u]) = %d\n",
  VAR_3, VAR_4, VAR_14, VAR_6);
 return VAR_6;
}
