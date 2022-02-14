
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_driver_state {int dummy; } ;
struct vcc_port {int lock; struct vio_driver_state vio; } ;


 int VAR_0 ;



 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct vcc_port*) ;
 int FUNC_4 (struct vio_driver_state*) ;
 int FUNC_5 (struct vio_driver_state*,int) ;

__attribute__((used)) static void FUNC_6(void *VAR_1, int VAR_2)
{
 struct vio_driver_state *VAR_3;
 struct vcc_port *VAR_4;
 unsigned long VAR_5;
 int VAR_6;

 VAR_4 = VAR_1;
 VAR_3 = &VAR_4->vio;

 FUNC_1(&VAR_4->lock, VAR_5);

 switch (VAR_2) {
 case 129:
 case 128:
  FUNC_5(VAR_3, VAR_2);
  break;

 case 130:
  VAR_6 = FUNC_3(VAR_4);
  if (VAR_6 == -VAR_0)
   FUNC_4(VAR_3);
  break;

 default:
  FUNC_0("VCC: unexpected LDC event(%d)\n", VAR_2);
 }

 FUNC_2(&VAR_4->lock, VAR_5);
}
