
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpu_key {int dummy; } ;
struct TYPE_2__ {int (* decrement_key ) (struct cpu_key*) ;} ;


 size_t FUNC_0 (struct cpu_key*) ;
 TYPE_1__** VAR_0 ;
 int FUNC_1 (struct cpu_key*) ;

__attribute__((used)) static void FUNC_2(struct cpu_key *VAR_1)
{

 VAR_0[FUNC_0(VAR_1)]->decrement_key(VAR_1);
}
