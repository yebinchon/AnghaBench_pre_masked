
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rndis_device {scalar_t__ state; int mcast_work; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct rndis_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct rndis_device *VAR_3)
{
 int VAR_4;

 if (VAR_3->state != VAR_1)
  return 0;


 FUNC_0(&VAR_3->mcast_work);

 VAR_4 = FUNC_1(VAR_3, 0);
 if (VAR_4 == -VAR_0)
  VAR_4 = 0;

 if (VAR_4 == 0)
  VAR_3->state = VAR_2;

 return VAR_4;
}
