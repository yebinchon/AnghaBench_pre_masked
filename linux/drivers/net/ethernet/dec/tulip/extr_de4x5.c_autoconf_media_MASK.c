
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct net_device {int base_addr; } ;
struct de4x5_private {int media; int timer; scalar_t__ tcount; int c_media; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 struct de4x5_private* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int
FUNC_4(struct net_device *VAR_3)
{
 struct de4x5_private *VAR_4 = FUNC_3(VAR_3);
 u_long VAR_5 = VAR_3->base_addr;

 FUNC_1(VAR_3);

 VAR_4->c_media = VAR_0;
 FUNC_2(VAR_1);
 VAR_4->media = VAR_2;
 VAR_4->tcount = 0;

 FUNC_0(&VAR_4->timer);

 return VAR_4->media;
}
