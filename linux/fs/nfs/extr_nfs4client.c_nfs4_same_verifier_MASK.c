
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data; } ;
typedef TYPE_1__ nfs4_verifier ;


 scalar_t__ FUNC_0 (int ,int ,int) ;

__attribute__((used)) static bool FUNC_1(nfs4_verifier *VAR_0, nfs4_verifier *VAR_1)
{
 return FUNC_0(VAR_0->data, VAR_1->data, sizeof(VAR_0->data)) == 0;
}
