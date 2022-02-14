
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_ipaddr {int dummy; } ;
struct qeth_card {int ip_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct qeth_card*,struct qeth_ipaddr*) ;
 int FUNC_3 (struct qeth_card*,struct qeth_ipaddr*) ;

__attribute__((used)) static int FUNC_4(struct qeth_card *VAR_0, struct qeth_ipaddr *VAR_1,
        bool VAR_2)
{
 int VAR_3;

 FUNC_0(&VAR_0->ip_lock);
 VAR_3 = VAR_2 ? FUNC_2(VAR_0, VAR_1) : FUNC_3(VAR_0, VAR_1);
 FUNC_1(&VAR_0->ip_lock);

 return VAR_3;
}
