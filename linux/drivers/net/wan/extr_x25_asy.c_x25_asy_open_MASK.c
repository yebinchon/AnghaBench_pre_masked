
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x25_asy {unsigned long buffsize; int flags; int * rbuff; int * xbuff; scalar_t__ xleft; scalar_t__ rcount; int * tty; } ;
struct net_device {int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (struct net_device*,int *) ;
 struct x25_asy* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_6)
{
 struct x25_asy *VAR_7 = FUNC_3(VAR_6);
 unsigned long VAR_8;
 int VAR_9;

 if (VAR_7->tty == ((void*)0))
  return -VAR_0;
 VAR_8 = VAR_6->mtu * 2;

 VAR_7->rbuff = FUNC_1(VAR_8 + 4, VAR_2);
 if (VAR_7->rbuff == ((void*)0))
  goto norbuff;
 VAR_7->xbuff = FUNC_1(VAR_8 + 4, VAR_2);
 if (VAR_7->xbuff == ((void*)0))
  goto noxbuff;

 VAR_7->buffsize = VAR_8;
 VAR_7->rcount = 0;
 VAR_7->xleft = 0;
 VAR_7->flags &= (1 << VAR_4);

 FUNC_4(VAR_6);




 VAR_9 = FUNC_2(VAR_6, &VAR_5);
 if (VAR_9 == VAR_3)
  return 0;


 FUNC_0(VAR_7->xbuff);
 VAR_7->xbuff = ((void*)0);
noxbuff:
 FUNC_0(VAR_7->rbuff);
 VAR_7->rbuff = ((void*)0);
norbuff:
 return -VAR_1;
}
