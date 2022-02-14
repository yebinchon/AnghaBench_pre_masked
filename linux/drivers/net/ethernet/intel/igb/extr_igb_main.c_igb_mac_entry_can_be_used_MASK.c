
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct igb_mac_addr {int state; int addr; } ;


 int VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (int const*,int ) ;

__attribute__((used)) static bool FUNC_1(const struct igb_mac_addr *VAR_2,
          const u8 *VAR_3, const u8 VAR_4)
{
 if (!(VAR_2->state & VAR_0))
  return 1;

 if ((VAR_2->state & VAR_1) !=
     (VAR_4 & VAR_1))
  return 0;

 if (!FUNC_0(VAR_3, VAR_2->addr))
  return 0;

 return 1;
}
