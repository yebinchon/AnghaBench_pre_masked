
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct channel_data* private_data; } ;
struct cosa_data {int nchannels; int lock; int usage; struct channel_data* chan; } ;
struct channel_data {scalar_t__ usage; int rx_done; int setup_rx; int tx_done; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct cosa_data* VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct file*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_8 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_9, struct file *VAR_10)
{
 struct cosa_data *VAR_11;
 struct channel_data *VAR_12;
 unsigned long VAR_13;
 int VAR_14;
 int VAR_15 = 0;

 FUNC_2(&VAR_7);
 if ((VAR_14=FUNC_1(FUNC_0(VAR_10))>>VAR_0)
  >= VAR_8) {
  VAR_15 = -VAR_2;
  goto out;
 }
 VAR_11 = VAR_6+VAR_14;

 if ((VAR_14=FUNC_1(FUNC_0(VAR_10))
  & ((1<<VAR_0)-1)) >= VAR_11->nchannels) {
  VAR_15 = -VAR_2;
  goto out;
 }
 VAR_12 = VAR_11->chan + VAR_14;

 VAR_10->private_data = VAR_12;

 FUNC_4(&VAR_11->lock, VAR_13);

 if (VAR_12->usage < 0) {
  FUNC_5(&VAR_11->lock, VAR_13);
  VAR_15 = -VAR_1;
  goto out;
 }
 VAR_11->usage++;
 VAR_12->usage++;

 VAR_12->tx_done = VAR_5;
 VAR_12->setup_rx = VAR_4;
 VAR_12->rx_done = VAR_3;
 FUNC_5(&VAR_11->lock, VAR_13);
out:
 FUNC_3(&VAR_7);
 return VAR_15;
}
