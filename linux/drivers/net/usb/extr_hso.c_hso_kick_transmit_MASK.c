
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hso_serial {int tx_urb_used; int (* write_data ) (struct hso_serial*) ;int serial_lock; scalar_t__ tx_data; scalar_t__ tx_buffer_count; scalar_t__ tx_data_count; int tx_buffer; int parent; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct hso_serial*) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct hso_serial *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;

 FUNC_1(&VAR_1->serial_lock, VAR_2);
 if (!VAR_1->tx_buffer_count)
  goto out;

 if (VAR_1->tx_urb_used)
  goto out;


 if (FUNC_0(VAR_1->parent) == -VAR_0)
  goto out;


 FUNC_4(VAR_1->tx_buffer, VAR_1->tx_data);
 VAR_1->tx_data_count = VAR_1->tx_buffer_count;
 VAR_1->tx_buffer_count = 0;


 if (VAR_1->tx_data && VAR_1->write_data) {
  VAR_3 = VAR_1->write_data(VAR_1);
  if (VAR_3 >= 0)
   VAR_1->tx_urb_used = 1;
 }
out:
 FUNC_2(&VAR_1->serial_lock, VAR_2);
}
