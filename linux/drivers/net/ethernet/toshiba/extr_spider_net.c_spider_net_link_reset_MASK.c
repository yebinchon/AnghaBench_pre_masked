
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spider_net_card {int aneg_timer; int medium; scalar_t__ aneg_count; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,scalar_t__) ;
 struct spider_net_card* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct spider_net_card*,int ) ;
 int FUNC_4 (struct spider_net_card*) ;
 int FUNC_5 (struct spider_net_card*,int ,int ) ;

__attribute__((used)) static void
FUNC_6(struct net_device *VAR_5)
{

 struct spider_net_card *VAR_6 = FUNC_2(VAR_5);

 FUNC_0(&VAR_6->aneg_timer);


 FUNC_5(VAR_6, VAR_3,
        FUNC_3(VAR_6, VAR_3));
 FUNC_5(VAR_6, VAR_2, 0);


 VAR_6->aneg_count = 0;
 VAR_6->medium = VAR_0;
 FUNC_4(VAR_6);
 FUNC_1(&VAR_6->aneg_timer, VAR_4 + VAR_1);

}
