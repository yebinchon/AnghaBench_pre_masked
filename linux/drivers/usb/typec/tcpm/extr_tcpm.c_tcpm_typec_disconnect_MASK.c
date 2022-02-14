
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpm_port {int connected; int * partner; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct tcpm_port *VAR_0)
{
 if (VAR_0->connected) {
  FUNC_0(VAR_0->partner);
  VAR_0->partner = ((void*)0);
  VAR_0->connected = 0;
 }
}
