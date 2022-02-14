
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmci_host_dev {scalar_t__ ct_type; struct vmci_ctx* context; } ;
struct TYPE_2__ {int wait_queue; } ;
struct vmci_ctx {scalar_t__ pending_datagrams; int lock; int pending_doorbell_array; TYPE_1__ host_context; } ;
struct file {struct vmci_host_dev* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct file*,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static __poll_t FUNC_4(struct file *VAR_2, poll_table *VAR_3)
{
 struct vmci_host_dev *VAR_4 = VAR_2->private_data;
 struct vmci_ctx *VAR_5 = VAR_4->context;
 __poll_t VAR_6 = 0;

 if (VAR_4->ct_type == VAR_1) {

  if (VAR_3)
   FUNC_0(VAR_2, &VAR_5->host_context.wait_queue,
      VAR_3);

  FUNC_1(&VAR_5->lock);
  if (VAR_5->pending_datagrams > 0 ||
      FUNC_3(
    VAR_5->pending_doorbell_array) > 0) {
   VAR_6 = VAR_0;
  }
  FUNC_2(&VAR_5->lock);
 }
 return VAR_6;
}
