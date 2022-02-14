
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;
struct mkiss {int mtu; unsigned long buffsize; int flags; int * rbuff; int buflock; scalar_t__ xleft; scalar_t__ rcount; int * xbuff; int * tty; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (unsigned long,int ) ;
 struct mkiss* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_4)
{
 struct mkiss *VAR_5 = FUNC_2(VAR_4);
 unsigned long VAR_6;

 if (VAR_5->tty == ((void*)0))
  return -VAR_1;







 VAR_6 = VAR_4->mtu * 2;






 if (VAR_6 < 576 * 2)
  VAR_6 = 576 * 2;

 if ((VAR_5->rbuff = FUNC_1(VAR_6 + 4, VAR_3)) == ((void*)0))
  goto norbuff;

 if ((VAR_5->xbuff = FUNC_1(VAR_6 + 4, VAR_3)) == ((void*)0))
  goto noxbuff;

 VAR_5->mtu = VAR_4->mtu + 73;
 VAR_5->buffsize = VAR_6;
 VAR_5->rcount = 0;
 VAR_5->xleft = 0;

 VAR_5->flags &= (1 << VAR_0);

 FUNC_3(&VAR_5->buflock);

 return 0;

noxbuff:
 FUNC_0(VAR_5->rbuff);

norbuff:
 return -VAR_2;
}
