
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucsi_connector {int * partner; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ucsi_connector*,int ) ;

__attribute__((used)) static void FUNC_2(struct ucsi_connector *VAR_1)
{
 if (!VAR_1->partner)
  return;

 FUNC_1(VAR_1, VAR_0);
 FUNC_0(VAR_1->partner);
 VAR_1->partner = ((void*)0);
}
