
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8152 {int flags; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct r8152* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct r8152*,int,int) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static
void FUNC_3(struct net_device *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 struct r8152 *VAR_6 = FUNC_0(VAR_2);

 if (FUNC_2(VAR_1, &VAR_6->flags))
  return;

 if (VAR_3 != VAR_0)
  return;

 FUNC_1(VAR_6, VAR_4, VAR_5);
}
