
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct arena_info {int * rtt; int nfree; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int,int ) ;

__attribute__((used)) static int FUNC_1(struct arena_info *VAR_2)
{
 VAR_2->rtt = FUNC_0(VAR_2->nfree, sizeof(u32), VAR_1);
 if (VAR_2->rtt == ((void*)0))
  return -VAR_0;

 return 0;
}
