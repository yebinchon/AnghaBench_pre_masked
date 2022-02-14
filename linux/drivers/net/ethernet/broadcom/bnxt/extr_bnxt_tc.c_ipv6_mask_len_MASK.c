
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int * s6_addr32; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct in6_addr *VAR_0)
{
 int VAR_1 = 0, VAR_2;

 for (VAR_2 = 0; VAR_2 < 4; VAR_2++)
  VAR_1 += FUNC_0(VAR_0->s6_addr32[VAR_2]);

 return VAR_1;
}
