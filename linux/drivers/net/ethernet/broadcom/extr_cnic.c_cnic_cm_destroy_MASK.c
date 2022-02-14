
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cnic_sock {scalar_t__ flags; int ref_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,scalar_t__*) ;
 int FUNC_2 (struct cnic_sock*) ;
 int FUNC_3 (struct cnic_sock*) ;
 int FUNC_4 (struct cnic_sock*) ;
 int FUNC_5 (struct cnic_sock*) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct cnic_sock *VAR_2)
{
 if (!FUNC_3(VAR_2))
  return -VAR_0;

 FUNC_4(VAR_2);
 FUNC_1(VAR_1, &VAR_2->flags);
 FUNC_7();
 while (FUNC_0(&VAR_2->ref_count) != 1)
  FUNC_6(1);
 FUNC_2(VAR_2);

 VAR_2->flags = 0;
 FUNC_5(VAR_2);
 return 0;
}
