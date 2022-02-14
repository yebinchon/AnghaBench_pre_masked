
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct ucan_can_msg {scalar_t__ dlc; int id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u8 FUNC_2(struct ucan_can_msg *VAR_2, u16 VAR_3)
{
 if (FUNC_1(VAR_2->id) & VAR_0)
  return FUNC_0(VAR_2->dlc);
 else
  return FUNC_0(VAR_3 - (VAR_1 + sizeof(VAR_2->id)));
}
