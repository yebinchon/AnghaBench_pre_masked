
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct hso_serial* driver_data; } ;
struct hso_serial {int tx_buffer_count; int serial_lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_0)
{
 struct hso_serial *VAR_1 = VAR_0->driver_data;
 int VAR_2;
 unsigned long VAR_3;


 if (VAR_1 == ((void*)0))
  return 0;

 FUNC_0(&VAR_1->serial_lock, VAR_3);
 VAR_2 = VAR_1->tx_buffer_count;
 FUNC_1(&VAR_1->serial_lock, VAR_3);

 return VAR_2;
}
