
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2400m {scalar_t__ bus_tx_block_size; int tx_lock; void* tx_buf; int * tx_msg; scalar_t__ tx_msg_size; scalar_t__ tx_out; scalar_t__ tx_in; scalar_t__ tx_sequence; int wake_tx_ws; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int ) ;
 int VAR_4 ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(struct i2400m *VAR_5)
{
 int VAR_6 = 0;
 void *VAR_7;
 unsigned long VAR_8;




 FUNC_2(&VAR_5->wake_tx_ws, VAR_4);

 VAR_7 = FUNC_3(VAR_2, VAR_1);
 if (VAR_7 == ((void*)0)) {
  VAR_6 = -VAR_0;
  goto error_kmalloc;
 }





 FUNC_1(2 * VAR_3 > VAR_2);
 FUNC_4(&VAR_5->tx_lock, VAR_8);
 VAR_5->tx_sequence = 0;
 VAR_5->tx_in = 0;
 VAR_5->tx_out = 0;
 VAR_5->tx_msg_size = 0;
 VAR_5->tx_msg = ((void*)0);
 VAR_5->tx_buf = VAR_7;
 FUNC_5(&VAR_5->tx_lock, VAR_8);

 FUNC_0(VAR_5->bus_tx_block_size == 0);
error_kmalloc:
 return VAR_6;

}
