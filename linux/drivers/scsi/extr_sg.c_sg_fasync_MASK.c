
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {scalar_t__ private_data; } ;
struct TYPE_2__ {int async_qp; int * parentdp; } ;
typedef TYPE_1__ Sg_fd ;
typedef int Sg_device ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,struct file*,int,int *) ;
 int FUNC_2 (int ,int *,char*,int) ;

__attribute__((used)) static int
FUNC_3(int VAR_2, struct file *VAR_3, int VAR_4)
{
 Sg_device *VAR_5;
 Sg_fd *VAR_6;

 if ((!(VAR_6 = (Sg_fd *) VAR_3->private_data)) || (!(VAR_5 = VAR_6->parentdp)))
  return -VAR_0;
 FUNC_0(3, FUNC_2(VAR_1, VAR_5,
          "sg_fasync: mode=%d\n", VAR_4));

 return FUNC_1(VAR_2, VAR_3, VAR_4, &VAR_6->async_qp);
}
