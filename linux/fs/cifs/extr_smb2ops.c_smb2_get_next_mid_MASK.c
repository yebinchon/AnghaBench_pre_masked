
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct TCP_Server_Info {int CurrentMid; } ;
typedef scalar_t__ __u64 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static __u64
FUNC_2(struct TCP_Server_Info *VAR_1)
{
 __u64 VAR_2;

 FUNC_0(&VAR_0);
 VAR_2 = VAR_1->CurrentMid++;
 FUNC_1(&VAR_0);
 return VAR_2;
}
