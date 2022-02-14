
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2400m_msg_hdr {int size; int offset; int padding; int num_pls; } ;
struct i2400m {struct i2400m_msg_hdr* tx_msg; int tx_out; int tx_in; int tx_buf; int bus_tx_block_size; } ;
struct device {int dummy; } ;


 size_t FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (struct device*,char*,unsigned long,size_t,int ,int ,int ) ;
 struct device* FUNC_4 (struct i2400m*) ;
 void* FUNC_5 (struct i2400m*,size_t,int ,int ) ;
 unsigned int FUNC_6 (int ) ;
 int FUNC_7 (struct i2400m_msg_hdr*,struct i2400m_msg_hdr*,size_t) ;
 int FUNC_8 (void*,int,size_t) ;
 int VAR_4 ;
 size_t FUNC_9 (struct i2400m_msg_hdr*,int ,unsigned int) ;

__attribute__((used)) static
void FUNC_10(struct i2400m *VAR_5)
{
 struct device *VAR_6 = FUNC_4(VAR_5);
 struct i2400m_msg_hdr *VAR_7 = VAR_5->tx_msg;
 struct i2400m_msg_hdr *VAR_8;
 size_t VAR_9, VAR_10, VAR_11;
 void *VAR_12;
 unsigned VAR_13;

 if (VAR_7->size & VAR_2)
  goto out;
 VAR_13 = FUNC_6(VAR_7->num_pls);



 if (VAR_13 == 0) {
  VAR_7->size |= VAR_2;
  goto out;
 }
 VAR_11 = FUNC_9(VAR_7, VAR_4, FUNC_6(VAR_7->num_pls));
 VAR_11 = FUNC_0(VAR_11, VAR_0);
 VAR_7->offset = VAR_1 - VAR_11;
 VAR_8 = (void *) VAR_7 + VAR_7->offset;
 FUNC_7(VAR_8, VAR_7, VAR_11);
 VAR_8->size -= VAR_7->offset;




 VAR_9 = FUNC_0(VAR_8->size, VAR_5->bus_tx_block_size);
 VAR_10 = VAR_9 - VAR_8->size;
 if (VAR_10 > 0) {
  VAR_12 = FUNC_5(VAR_5, VAR_10, 0, 0);
  if (FUNC_1(VAR_12 == ((void*)0) || VAR_12 == VAR_3)) {



   FUNC_3(VAR_6,
    "SW BUG! Possible data leakage from memory the "
    "device should not read for padding - "
    "size %lu aligned_size %zu tx_buf %p in "
    "%zu out %zu\n",
    (unsigned long) VAR_8->size,
    VAR_9, VAR_5->tx_buf, VAR_5->tx_in,
    VAR_5->tx_out);
  } else
   FUNC_8(VAR_12, 0xad, VAR_10);
 }
 VAR_8->padding = FUNC_2(VAR_10);
 VAR_8->size += VAR_10;
 if (VAR_7 != VAR_8)
  VAR_7->size += VAR_10;
out:
 VAR_5->tx_msg = ((void*)0);
}
