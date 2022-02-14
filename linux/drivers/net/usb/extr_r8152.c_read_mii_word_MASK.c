
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8152 {int flags; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct r8152* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct r8152*,int) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4, int VAR_5, int VAR_6)
{
 struct r8152 *VAR_7 = FUNC_0(VAR_4);
 int VAR_8;

 if (FUNC_2(VAR_3, &VAR_7->flags))
  return -VAR_1;

 if (VAR_5 != VAR_2)
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_7, VAR_6);

 return VAR_8;
}
