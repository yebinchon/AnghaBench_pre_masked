
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {int mite_channel_lock; int soft_reg_copy_lock; int window_lock; } ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;
 struct ni_private* FUNC_0 (struct comedi_device*,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_1)
{
 struct ni_private *VAR_2;

 VAR_2 = FUNC_0(VAR_1, sizeof(*VAR_2));
 if (!VAR_2)
  return -VAR_0;

 FUNC_1(&VAR_2->window_lock);
 FUNC_1(&VAR_2->soft_reg_copy_lock);
 FUNC_1(&VAR_2->mite_channel_lock);

 return 0;
}
