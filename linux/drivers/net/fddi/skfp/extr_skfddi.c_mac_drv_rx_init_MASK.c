
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int protocol; } ;
struct TYPE_2__ {int dev; } ;
struct s_smc {TYPE_1__ os; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct sk_buff*,char*,int) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*,int) ;

int FUNC_7(struct s_smc *VAR_2, int VAR_3, int VAR_4,
      char *VAR_5, int VAR_6)
{
 struct sk_buff *VAR_7;

 FUNC_3("entering mac_drv_rx_init(len=%d)\n", VAR_3);



 if (VAR_3 != VAR_6 || VAR_3 < VAR_0 || !VAR_5) {
  FUNC_3("fddi: Discard invalid local SMT frame\n");
  FUNC_3("  len=%d, la_len=%d, (ULONG) look_ahead=%08lXh.\n",
         VAR_3, VAR_6, (unsigned long) VAR_5);
  return 0;
 }
 VAR_7 = FUNC_0(VAR_3 + 3, VAR_1);
 if (!VAR_7) {
  FUNC_3("fddi: Local SMT: skb memory exhausted.\n");
  return 0;
 }
 FUNC_6(VAR_7, 3);
 FUNC_5(VAR_7, VAR_3);
 FUNC_4(VAR_7, VAR_5, VAR_3);


 VAR_7->protocol = FUNC_1(VAR_7, VAR_2->os.dev);
 FUNC_2(VAR_7);

 return 0;
}
