
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcnss_ctrl {int probe_work; int cbc; int ack; int channel; int * dev; } ;
struct rpmsg_device {int dev; int ept; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,struct wcnss_ctrl*) ;
 struct wcnss_ctrl* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct rpmsg_device *VAR_3)
{
 struct wcnss_ctrl *VAR_4;

 VAR_4 = FUNC_2(&VAR_3->dev, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->dev = &VAR_3->dev;
 VAR_4->channel = VAR_3->ept;

 FUNC_3(&VAR_4->ack);
 FUNC_3(&VAR_4->cbc);
 FUNC_0(&VAR_4->probe_work, VAR_2);

 FUNC_1(&VAR_3->dev, VAR_4);

 FUNC_4(&VAR_4->probe_work);

 return 0;
}
