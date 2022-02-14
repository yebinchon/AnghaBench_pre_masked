
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,struct sk_buff*) ;

__attribute__((used)) static void FUNC_5(struct sk_buff *VAR_3)
{


 FUNC_1(VAR_3);


 if (!VAR_1) {
  FUNC_2(VAR_3);
  return;
 }


 if (!VAR_0 ||
     FUNC_3(&VAR_2) < VAR_0) {
  FUNC_4(&VAR_2, VAR_3);
  return;
 }


 FUNC_0("kauditd hold queue overflow");
 FUNC_2(VAR_3);
}
