
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rndis_device {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct rndis_device*,int) ;

__attribute__((used)) static int FUNC_1(struct rndis_device *VAR_5)
{
 int VAR_6;

 if (VAR_5->state != VAR_4)
  return 0;

 VAR_6 = FUNC_0(VAR_5,
      VAR_1 |
      VAR_0 |
      VAR_2);
 if (VAR_6 == 0)
  VAR_5->state = VAR_3;

 return VAR_6;
}
