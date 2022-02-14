
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct gb_loopback {int requests_completed; int requests_per_second; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ) ;

__attribute__((used)) static void FUNC_1(struct gb_loopback *VAR_1, u32 VAR_2)
{
 u64 VAR_3 = VAR_1->requests_completed * VAR_0;

 FUNC_0(&VAR_1->requests_per_second, VAR_3, VAR_2);
}
