
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct adapter {int bSurpriseRemoved; int bDriverStopped; } ;
typedef int off_t ;


 scalar_t__ FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (char*,int,char*,int,int) ;

int FUNC_2(char *VAR_0, char **VAR_1,
     off_t VAR_2, int VAR_3,
     int *VAR_4, void *VAR_5)
{
 struct net_device *VAR_6 = VAR_5;
 struct adapter *VAR_7 = (struct adapter *)FUNC_0(VAR_6);
 int VAR_8 = 0;

 VAR_8 += FUNC_1(VAR_0 + VAR_8, VAR_3 - VAR_8, "bSurpriseRemoved=%d, bDriverStopped=%d\n",
      VAR_7->bSurpriseRemoved, VAR_7->bDriverStopped);

 *VAR_4 = 1;
 return VAR_8;
}
