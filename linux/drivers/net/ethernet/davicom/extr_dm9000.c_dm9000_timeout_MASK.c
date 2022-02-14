
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct board_info {int in_timeout; int lock; int io_addr; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct board_info*) ;
 struct board_info* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static void FUNC_10(struct net_device *VAR_0)
{
 struct board_info *VAR_1 = FUNC_2(VAR_0);
 u8 VAR_2;
 unsigned long VAR_3;


 FUNC_7(&VAR_1->lock, VAR_3);
 VAR_1->in_timeout = 1;
 VAR_2 = FUNC_6(VAR_1->io_addr);

 FUNC_3(VAR_0);
 FUNC_0(VAR_0);
 FUNC_1(VAR_1);

 FUNC_4(VAR_0);
 FUNC_5(VAR_0);


 FUNC_9(VAR_2, VAR_1->io_addr);
 VAR_1->in_timeout = 0;
 FUNC_8(&VAR_1->lock, VAR_3);
}
