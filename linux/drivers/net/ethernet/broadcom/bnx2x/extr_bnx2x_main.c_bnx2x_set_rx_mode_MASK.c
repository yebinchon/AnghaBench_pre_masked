
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct bnx2x {scalar_t__ state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 (struct bnx2x*,int ,int ) ;
 struct bnx2x* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_3)
{
 struct bnx2x *VAR_4 = FUNC_2(VAR_3);

 if (VAR_4->state != VAR_1) {
  FUNC_0(VAR_2, "state is %x, returning\n", VAR_4->state);
  return;
 } else {

  FUNC_1(VAR_4, VAR_0,
           VAR_2);
 }
}
