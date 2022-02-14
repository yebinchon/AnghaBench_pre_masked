
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slave {int speed; } ;
typedef long long s64 ;
struct TYPE_2__ {int load; } ;


 TYPE_1__ FUNC_0 (struct slave*) ;

__attribute__((used)) static long long FUNC_1(struct slave *VAR_0)
{
 return (s64) (VAR_0->speed << 20) -
        (s64) (FUNC_0(VAR_0).load << 3);
}
