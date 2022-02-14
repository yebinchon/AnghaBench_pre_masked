
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_adapter {int ref; } ;
struct ccw_device {int dev; } ;


 struct zfcp_adapter* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int VAR_0 ;

struct zfcp_adapter *FUNC_4(struct ccw_device *VAR_1)
{
 struct zfcp_adapter *VAR_2;
 unsigned long VAR_3;

 FUNC_2(&VAR_0, VAR_3);
 VAR_2 = FUNC_0(&VAR_1->dev);
 if (VAR_2)
  FUNC_1(&VAR_2->ref);
 FUNC_3(&VAR_0, VAR_3);
 return VAR_2;
}
