
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct bnx2x {int msg_enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int VAR_2 ;
 int FUNC_1 (struct bnx2x*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct bnx2x* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_3, u32 VAR_4)
{
 struct bnx2x *VAR_5 = FUNC_3(VAR_3);

 if (FUNC_2(VAR_1)) {

  if (FUNC_0(VAR_5) && (VAR_4 & VAR_0))
   FUNC_1(VAR_5, VAR_2);
  VAR_5->msg_enable = VAR_4;
 }
}
