
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int name; struct slgt_info* driver_data; } ;
struct slgt_info {int lock; scalar_t__ tx_count; int device_name; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct slgt_info*,int ,char*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_5(struct tty_struct *VAR_0)
{
 struct slgt_info *VAR_1 = VAR_0->driver_data;
 unsigned long VAR_2;

 if (FUNC_1(VAR_1, VAR_0->name, "flush_buffer"))
  return;
 FUNC_0(("%s flush_buffer\n", VAR_1->device_name));

 FUNC_2(&VAR_1->lock, VAR_2);
 VAR_1->tx_count = 0;
 FUNC_3(&VAR_1->lock, VAR_2);

 FUNC_4(VAR_0);
}
