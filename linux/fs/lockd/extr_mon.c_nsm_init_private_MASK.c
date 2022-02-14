
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int data; } ;
struct nsm_handle {TYPE_1__ sm_priv; } ;
typedef unsigned long s64 ;


 unsigned long FUNC_0 () ;
 int FUNC_1 (unsigned long,int *) ;

__attribute__((used)) static void FUNC_2(struct nsm_handle *VAR_0)
{
 u64 *VAR_1 = (u64 *)&VAR_0->sm_priv.data;
 s64 VAR_2;

 VAR_2 = FUNC_0();
 FUNC_1(VAR_2, VAR_1);
 FUNC_1((unsigned long)VAR_0, VAR_1 + 1);
}
