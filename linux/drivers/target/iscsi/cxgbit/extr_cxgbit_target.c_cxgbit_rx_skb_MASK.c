
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_4__ {TYPE_1__* cdev; } ;
struct cxgbit_sock {TYPE_2__ com; } ;
struct cxgb4_lld_info {int adapter_type; } ;
struct TYPE_3__ {struct cxgb4_lld_info lldi; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct cxgbit_sock*,struct sk_buff*) ;
 int FUNC_2 (struct cxgbit_sock*,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct cxgbit_sock *VAR_1, struct sk_buff *VAR_2)
{
 struct cxgb4_lld_info *VAR_3 = &VAR_1->com.cdev->lldi;
 int VAR_4 = -1;

 if (FUNC_5(FUNC_3(VAR_2) & VAR_0)) {
  if (FUNC_4(VAR_3->adapter_type))
   VAR_4 = FUNC_2(VAR_1, VAR_2);
  else
   VAR_4 = FUNC_1(VAR_1, VAR_2);
 }

 FUNC_0(VAR_2);
 return VAR_4;
}
