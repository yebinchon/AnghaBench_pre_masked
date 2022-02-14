
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printer_dev {int tx_reqs_active; int tx_flush_wait; int lock; int tx_reqs; } ;
struct inode {int dummy; } ;
struct file {struct printer_dev* private_data; } ;
typedef int loff_t ;


 struct inode* FUNC_0 (struct file*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static int
FUNC_8(struct file *VAR_0, loff_t VAR_1, loff_t VAR_2, int VAR_3)
{
 struct printer_dev *VAR_4 = VAR_0->private_data;
 struct inode *VAR_5 = FUNC_0(VAR_0);
 unsigned long VAR_6;
 int VAR_7;

 FUNC_1(VAR_5);
 FUNC_5(&VAR_4->lock, VAR_6);
 VAR_7 = (FUNC_3(FUNC_4(&VAR_4->tx_reqs)));
 FUNC_6(&VAR_4->lock, VAR_6);

 if (!VAR_7) {

  FUNC_7(VAR_4->tx_flush_wait,
    (FUNC_3(FUNC_4(&VAR_4->tx_reqs_active))));
 }
 FUNC_2(VAR_5);

 return 0;
}
