
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cnic_sock {int flags; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct cnic_sock*) ;
 int FUNC_1 (struct cnic_sock*) ;
 int FUNC_2 (struct cnic_sock*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct cnic_sock *VAR_4)
{
 if (!FUNC_2(VAR_4))
  return -VAR_1;

 if (FUNC_0(VAR_4)) {
  VAR_4->state = VAR_2;
  return FUNC_1(VAR_4);
 } else {

  while (FUNC_4(VAR_3, &VAR_4->flags))
   FUNC_3(1);

  return -VAR_0;
 }
 return 0;
}
