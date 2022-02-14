
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2400m_msg_hdr {scalar_t__ num_pls; scalar_t__ size; TYPE_1__* pld; } ;
struct i2400m {void* tx_buf; int (* bus_tx_kick ) (struct i2400m*) ;int tx_lock; struct i2400m_msg_hdr* tx_msg; int bus_tx_block_size; } ;
struct device {int dummy; } ;
typedef enum i2400m_pt { ____Placeholder_i2400m_pt } i2400m_pt ;
struct TYPE_2__ {int val; } ;


 size_t FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 int FUNC_1 (int,struct device*,char*,struct i2400m*,void const*,size_t,int,int) ;
 int FUNC_2 (int,struct device*,char*,struct i2400m*,void const*,size_t,int) ;
 int FUNC_3 (int,struct device*,char*,...) ;
 struct device* FUNC_4 (struct i2400m*) ;
 int FUNC_5 (TYPE_1__*,size_t,int) ;
 int FUNC_6 (struct i2400m*) ;
 void* FUNC_7 (struct i2400m*,size_t,int ,int) ;
 int FUNC_8 (struct i2400m*) ;
 int FUNC_9 (struct i2400m*) ;
 int FUNC_10 (struct i2400m*) ;
 void* FUNC_11 (unsigned int) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (void*,void const*,size_t) ;
 int FUNC_15 (void*,int,size_t) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (int *,unsigned long) ;
 int FUNC_18 (struct i2400m*) ;
 scalar_t__ FUNC_19 (int) ;

int FUNC_20(struct i2400m *VAR_7, const void *VAR_8, size_t VAR_9,
       enum i2400m_pt VAR_10)
{
 int VAR_11 = -VAR_0;
 struct device *VAR_12 = FUNC_4(VAR_7);
 unsigned long VAR_13;
 size_t VAR_14;
 void *VAR_15;
 bool VAR_16 = 0;
 unsigned VAR_17 = VAR_10 == VAR_4
  || VAR_10 == VAR_3;

 FUNC_2(3, VAR_12, "(i2400m %p skb %p [%zu bytes] pt %u)\n",
    VAR_7, VAR_8, VAR_9, VAR_10);
 VAR_14 = FUNC_0(VAR_9, VAR_2);
 FUNC_3(5, VAR_12, "padded_len %zd buf_len %zd\n", VAR_14, VAR_9);



 FUNC_16(&VAR_7->tx_lock, VAR_13);

 if (VAR_7->tx_buf == ((void*)0)) {
  VAR_11 = -VAR_1;
  goto error_tx_new;
 }
try_new:
 if (FUNC_19(VAR_7->tx_msg == ((void*)0)))
  FUNC_9(VAR_7);
 else if (FUNC_19(!FUNC_8(VAR_7)
     || (VAR_17 && VAR_7->tx_msg->num_pls != 0))) {
  FUNC_3(2, VAR_12, "closing TX message (fits %u singleton "
    "%u num_pls %u)\n", FUNC_8(VAR_7),
    VAR_17, VAR_7->tx_msg->num_pls);
  FUNC_6(VAR_7);
  FUNC_9(VAR_7);
 }
 if (VAR_7->tx_msg == ((void*)0))
  goto error_tx_new;






 if (VAR_7->tx_msg->size + VAR_14 > VAR_5) {
  FUNC_3(2, VAR_12, "TX: message too big, going new\n");
  FUNC_6(VAR_7);
  FUNC_9(VAR_7);
 }
 if (VAR_7->tx_msg == ((void*)0))
  goto error_tx_new;


 VAR_15 = FUNC_7(VAR_7, VAR_14,
      VAR_7->bus_tx_block_size, VAR_16);
 if (VAR_15 == VAR_6) {
  FUNC_3(2, VAR_12, "pl append: tail full\n");
  FUNC_6(VAR_7);
  FUNC_10(VAR_7);
  VAR_16 = 1;
  goto try_new;
 } else if (VAR_15 == ((void*)0)) {
  VAR_11 = -VAR_0;
  FUNC_3(2, VAR_12, "pl append: all full\n");
 } else {
  struct i2400m_msg_hdr *VAR_18 = VAR_7->tx_msg;
  unsigned VAR_19 = FUNC_11(VAR_18->num_pls);
  FUNC_14(VAR_15, VAR_8, VAR_9);
  FUNC_15(VAR_15 + VAR_9, 0xad, VAR_14 - VAR_9);
  FUNC_5(&VAR_18->pld[VAR_19], VAR_9, VAR_10);
  FUNC_3(3, VAR_12, "pld 0x%08x (type 0x%1x len 0x%04zx\n",
    FUNC_12(VAR_18->pld[VAR_19].val),
    VAR_10, VAR_9);
  VAR_18->num_pls = FUNC_11(VAR_19+1);
  VAR_18->size += VAR_14;
  FUNC_3(2, VAR_12, "TX: appended %zu b (up to %u b) pl #%u\n",
   VAR_14, VAR_18->size, VAR_19+1);
  FUNC_3(2, VAR_12,
    "TX: appended hdr @%zu %zu b pl #%u @%zu %zu/%zu b\n",
    (void *)VAR_18 - VAR_7->tx_buf, (size_t)VAR_18->size,
    VAR_19+1, VAR_15 - VAR_7->tx_buf, VAR_9, VAR_14);
  VAR_11 = 0;
  if (VAR_17)
   FUNC_6(VAR_7);
 }
error_tx_new:
 FUNC_17(&VAR_7->tx_lock, VAR_13);


 if (FUNC_13(VAR_11 != -VAR_1))
  VAR_7->bus_tx_kick(VAR_7);
 FUNC_1(3, VAR_12, "(i2400m %p skb %p [%zu bytes] pt %u) = %d\n",
  VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
 return VAR_11;
}
