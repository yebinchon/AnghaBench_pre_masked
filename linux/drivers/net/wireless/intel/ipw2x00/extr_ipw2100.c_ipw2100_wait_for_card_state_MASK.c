
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipw2100_priv {int status; } ;
typedef int card_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ipw2100_priv*,int ,int*,int*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct ipw2100_priv *VAR_6, int VAR_7)
{
 int VAR_8;
 u32 VAR_9;
 u32 VAR_10 = sizeof(VAR_9);
 int VAR_11;

 for (VAR_8 = 0; VAR_8 <= VAR_1 * 1000; VAR_8 += 50) {
  VAR_11 = FUNC_1(VAR_6, VAR_4,
       &VAR_9, &VAR_10);
  if (VAR_11) {
   FUNC_0("Query of CARD_DISABLED ordinal "
           "failed.\n");
   return 0;
  }




  if ((VAR_9 == VAR_7) ||
      ((VAR_6->status & VAR_5) ?
       VAR_3 : VAR_2) == VAR_7) {
   if (VAR_7 == VAR_3)
    VAR_6->status |= VAR_5;
   else
    VAR_6->status &= ~VAR_5;

   return 0;
  }

  FUNC_2(50);
 }

 FUNC_0("ipw2100_wait_for_card_state to %s state timed out\n",
         VAR_7 ? "DISABLED" : "ENABLED");
 return -VAR_0;
}
