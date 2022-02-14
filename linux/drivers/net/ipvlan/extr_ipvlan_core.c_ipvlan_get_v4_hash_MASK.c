
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct in_addr {int s_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static u8 FUNC_1(const void *VAR_2)
{
 const struct in_addr *VAR_3 = VAR_2;

 return FUNC_0(VAR_3->s_addr, VAR_1) &
        VAR_0;
}
