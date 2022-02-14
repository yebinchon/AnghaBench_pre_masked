
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct cas {int link_cntl; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cas*,int *) ;
 struct cas* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2)
{
 struct cas *VAR_3 = FUNC_1(VAR_2);
 unsigned long VAR_4;

 if ((VAR_3->link_cntl & VAR_0) == 0)
  return -VAR_1;


 FUNC_2(&VAR_3->lock, VAR_4);
 FUNC_0(VAR_3, ((void*)0));
 FUNC_3(&VAR_3->lock, VAR_4);

 return 0;
}
