
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {scalar_t__ hw_stopped; scalar_t__ stopped; int name; struct slgt_info* driver_data; } ;
struct slgt_info {scalar_t__ tx_count; int lock; int tx_buf; int device_name; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct slgt_info*,int ,char*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (struct slgt_info*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct tty_struct *VAR_0)
{
 struct slgt_info *VAR_1 = VAR_0->driver_data;
 unsigned long VAR_2;

 if (FUNC_1(VAR_1, VAR_0->name, "flush_chars"))
  return;
 FUNC_0(("%s flush_chars entry tx_count=%d\n", VAR_1->device_name, VAR_1->tx_count));

 if (VAR_1->tx_count <= 0 || VAR_0->stopped ||
     VAR_0->hw_stopped || !VAR_1->tx_buf)
  return;

 FUNC_0(("%s flush_chars start transmit\n", VAR_1->device_name));

 FUNC_2(&VAR_1->lock,VAR_2);
 if (VAR_1->tx_count && FUNC_4(VAR_1, VAR_1->tx_buf, VAR_1->tx_count))
  VAR_1->tx_count = 0;
 FUNC_3(&VAR_1->lock,VAR_2);
}
