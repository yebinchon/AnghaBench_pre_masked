
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmmdev_request_header {int rc; } ;
struct vbg_dev {scalar_t__ io_port; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned long,scalar_t__) ;
 unsigned long FUNC_2 (void*) ;

int FUNC_3(struct vbg_dev *VAR_1, void *VAR_2)
{
 unsigned long VAR_3 = FUNC_2(VAR_2);

 FUNC_1(VAR_3, VAR_1->io_port + VAR_0);




 FUNC_0();

 return ((struct vmmdev_request_header *)VAR_2)->rc;
}
