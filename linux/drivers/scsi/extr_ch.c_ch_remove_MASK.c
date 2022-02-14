
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_3__ {int ref; int minor; } ;
typedef TYPE_1__ scsi_changer ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_5)
{
 scsi_changer *VAR_6 = FUNC_1(VAR_5);

 FUNC_5(&VAR_3);
 FUNC_3(&VAR_2, VAR_6->minor);
 FUNC_6(&VAR_3);

 FUNC_2(VAR_4, FUNC_0(VAR_0,VAR_6->minor));
 FUNC_4(&VAR_6->ref, VAR_1);
 return 0;
}
