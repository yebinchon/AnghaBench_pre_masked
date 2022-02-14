
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct lio {int msg_enable; } ;


 struct lio* FUNC_0 (struct net_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct net_device*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_3, u32 VAR_4)
{
 struct lio *VAR_5 = FUNC_0(VAR_3);

 if ((VAR_4 ^ VAR_5->msg_enable) & VAR_0) {
  if (VAR_4 & VAR_0)
   FUNC_1(VAR_3,
          VAR_2, 0);
  else
   FUNC_1(VAR_3,
          VAR_1, 0);
 }

 VAR_5->msg_enable = VAR_4;
}
