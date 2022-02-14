
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct au1000_private {int lock; } ;


 int FUNC_0 (struct net_device*) ;
 int VAR_0 ;
 struct au1000_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct au1000_private* const,int ,struct net_device*,char*,unsigned int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_1)
{
 struct au1000_private *const VAR_2 = FUNC_1(VAR_1);
 unsigned long VAR_3;

 FUNC_2(VAR_2, VAR_0, VAR_1, "reset mac, aup %x\n",
     (unsigned)VAR_2);

 FUNC_3(&VAR_2->lock, VAR_3);

 FUNC_0(VAR_1);

 FUNC_4(&VAR_2->lock, VAR_3);
}
