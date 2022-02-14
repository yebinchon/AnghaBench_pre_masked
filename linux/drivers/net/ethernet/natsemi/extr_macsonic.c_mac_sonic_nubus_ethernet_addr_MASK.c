
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int * dev_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
      unsigned long VAR_2, int VAR_3)
{
 int VAR_4;
 for(VAR_4 = 0; VAR_4 < 6; VAR_4++)
  VAR_1->dev_addr[VAR_4] = FUNC_0(VAR_4);


 if (VAR_3 != VAR_0)
  FUNC_1(VAR_1->dev_addr);

 return 0;
}
