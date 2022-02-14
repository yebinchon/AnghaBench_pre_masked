
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bit_rate; } ;
struct pi433_instance {TYPE_1__ tx_cfg; struct pi433_device* device; } ;
struct pi433_device {int dummy; } ;
struct inode {int dummy; } ;
struct file {struct pi433_instance* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pi433_device* FUNC_0 (int *,int ) ;
 int FUNC_1 (struct inode*) ;
 struct pi433_instance* FUNC_2 (int,int ) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_5, struct file *VAR_6)
{
 struct pi433_device *VAR_7;
 struct pi433_instance *VAR_8;

 FUNC_3(&VAR_3);
 VAR_7 = FUNC_0(&VAR_4, FUNC_1(VAR_5));
 FUNC_4(&VAR_3);
 if (!VAR_7) {
  FUNC_5("device: minor %d unknown.\n", FUNC_1(VAR_5));
  return -VAR_0;
 }

 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;


 VAR_8->device = VAR_7;
 VAR_8->tx_cfg.bit_rate = 4711;



 VAR_6->private_data = VAR_8;
 FUNC_6(VAR_5, VAR_6);

 return 0;
}
