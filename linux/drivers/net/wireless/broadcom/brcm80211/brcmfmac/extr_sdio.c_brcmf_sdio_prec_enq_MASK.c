
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct pktq {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct pktq*,int) ;
 struct sk_buff* FUNC_3 (struct pktq*,int*) ;
 struct sk_buff* FUNC_4 (struct pktq*,int,struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct pktq*) ;
 scalar_t__ FUNC_6 (struct pktq*,int) ;

__attribute__((used)) static bool FUNC_7(struct pktq *VAR_0, struct sk_buff *VAR_1, int VAR_2)
{
 struct sk_buff *VAR_3;
 int VAR_4 = -1;




 if (!FUNC_6(VAR_0, VAR_2) && !FUNC_5(VAR_0)) {
  FUNC_4(VAR_0, VAR_2, VAR_1);
  return 1;
 }


 if (FUNC_6(VAR_0, VAR_2)) {
  VAR_4 = VAR_2;
 } else if (FUNC_5(VAR_0)) {
  VAR_3 = FUNC_3(VAR_0, &VAR_4);
  if (VAR_4 > VAR_2)
   return 0;
 }


 if (VAR_4 >= 0) {

  if (VAR_4 == VAR_2)
   return 0;

  VAR_3 = FUNC_2(VAR_0, VAR_4);
  if (VAR_3 == ((void*)0))
   FUNC_0("brcmu_pktq_pdeq_tail() failed\n");
  FUNC_1(VAR_3);
 }


 VAR_3 = FUNC_4(VAR_0, VAR_2, VAR_1);
 if (VAR_3 == ((void*)0))
  FUNC_0("brcmu_pktq_penq() failed\n");

 return VAR_3 != ((void*)0);
}
