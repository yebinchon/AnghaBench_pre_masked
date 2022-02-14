
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct visor_device {int device; scalar_t__ pending_msg_hdr; int list_all; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct visor_device*,int ,int ) ;

void FUNC_4(struct visor_device *VAR_1)
{
 FUNC_1(&VAR_1->list_all);
 FUNC_2(&VAR_1->device);
 if (VAR_1->pending_msg_hdr)
  FUNC_3(VAR_1, 0, VAR_0);
 FUNC_0(&VAR_1->device);
}
