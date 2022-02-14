
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fnic {int vdev; TYPE_1__* lport; } ;
struct TYPE_2__ {int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int ,int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct fnic *VAR_3)
{
 int VAR_4;

 switch (FUNC_1(VAR_3->vdev)) {
 case 130:
  VAR_4 = FUNC_2(VAR_3->vdev, VAR_0);
  break;
 case 129:
  VAR_4 = FUNC_2(VAR_3->vdev, -1);
  break;
 case 128:
  VAR_4 = FUNC_2(VAR_3->vdev, VAR_1);
  break;
 default:
  FUNC_0(VAR_2, VAR_3->lport->host,
        "Interrupt mode should be set up"
        " before devcmd notify set %d\n",
        FUNC_1(VAR_3->vdev));
  VAR_4 = -1;
  break;
 }

 return VAR_4;
}
