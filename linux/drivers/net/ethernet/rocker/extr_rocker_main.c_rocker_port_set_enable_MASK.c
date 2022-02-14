
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct rocker_port {unsigned long long pport; int rocker; } ;


 int VAR_0 ;
 unsigned long long FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,unsigned long long) ;

__attribute__((used)) static void FUNC_2(const struct rocker_port *VAR_1,
       bool VAR_2)
{
 u64 VAR_3 = FUNC_0(VAR_1->rocker, VAR_0);

 if (VAR_2)
  VAR_3 |= 1ULL << VAR_1->pport;
 else
  VAR_3 &= ~(1ULL << VAR_1->pport);
 FUNC_1(VAR_1->rocker, VAR_0, VAR_3);
}
