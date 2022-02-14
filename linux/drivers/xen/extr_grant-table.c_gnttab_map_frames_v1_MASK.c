
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xen_pfn_t ;
struct TYPE_2__ {int addr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned int,int ,int *) ;
 int FUNC_2 () ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_3(xen_pfn_t *VAR_1, unsigned int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2,
        FUNC_2(),
        &VAR_0.addr);
 FUNC_0(VAR_3);

 return 0;
}
