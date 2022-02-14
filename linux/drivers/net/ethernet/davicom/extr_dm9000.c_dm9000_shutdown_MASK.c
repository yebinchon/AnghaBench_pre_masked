
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct board_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct board_info*) ;
 int FUNC_1 (struct net_device*,int ,int ,int ) ;
 int FUNC_2 (struct board_info*,int ,int) ;
 struct board_info* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void
FUNC_4(struct net_device *VAR_4)
{
 struct board_info *VAR_5 = FUNC_3(VAR_4);


 FUNC_1(VAR_4, 0, VAR_3, VAR_0);
 FUNC_2(VAR_5, VAR_1, 0x01);
 FUNC_0(VAR_5);
 FUNC_2(VAR_5, VAR_2, 0x00);
}
