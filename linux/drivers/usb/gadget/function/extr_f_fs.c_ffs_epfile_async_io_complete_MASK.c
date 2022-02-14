
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {struct ffs_io_data* context; } ;
struct usb_ep {int dummy; } ;
struct ffs_io_data {int work; struct ffs_data* ffs; } ;
struct ffs_data {int io_completion_wq; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct usb_ep *VAR_1,
      struct usb_request *VAR_2)
{
 struct ffs_io_data *VAR_3 = VAR_2->context;
 struct ffs_data *VAR_4 = VAR_3->ffs;

 FUNC_0();

 FUNC_1(&VAR_3->work, VAR_0);
 FUNC_2(VAR_4->io_completion_wq, &VAR_3->work);
}
