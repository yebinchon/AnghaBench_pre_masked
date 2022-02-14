
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct ks_net {scalar_t__* mcast_bits; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ks_net*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct ks_net *VAR_2)
{
 u16 VAR_3, VAR_4;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  VAR_2->mcast_bits[VAR_3] = 0;

 VAR_4 = VAR_0 >> 2;
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
  FUNC_0(VAR_2, VAR_1 + (2*VAR_3), 0);
}
