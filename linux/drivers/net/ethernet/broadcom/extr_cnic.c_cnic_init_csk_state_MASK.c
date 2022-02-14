
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cnic_sock {int flags; scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct cnic_sock *VAR_2)
{
 VAR_2->state = 0;
 FUNC_0(VAR_1, &VAR_2->flags);
 FUNC_0(VAR_0, &VAR_2->flags);
}
