
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct board_info {int ip_summed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct board_info*,int ,int) ;
 struct board_info* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_9,
          int VAR_10,
          u16 VAR_11)
{
 struct board_info *VAR_12 = FUNC_1(VAR_9);


 if (VAR_12->ip_summed != VAR_10) {
  if (VAR_10 == VAR_0)
   FUNC_0(VAR_12, VAR_1, 0);
  else
   FUNC_0(VAR_12, VAR_1, VAR_5 | VAR_7 | VAR_6);
  VAR_12->ip_summed = VAR_10;
 }


 FUNC_0(VAR_12, VAR_4, VAR_11);
 FUNC_0(VAR_12, VAR_3, VAR_11 >> 8);


 FUNC_0(VAR_12, VAR_2, VAR_8);
}
