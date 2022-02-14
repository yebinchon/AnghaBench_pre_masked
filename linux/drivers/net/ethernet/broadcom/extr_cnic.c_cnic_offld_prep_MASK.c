
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cnic_sock {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct cnic_sock *VAR_2)
{
 if (FUNC_1(VAR_1, &VAR_2->flags))
  return 0;

 if (!FUNC_2(VAR_0, &VAR_2->flags)) {
  FUNC_0(VAR_1, &VAR_2->flags);
  return 0;
 }

 return 1;
}
