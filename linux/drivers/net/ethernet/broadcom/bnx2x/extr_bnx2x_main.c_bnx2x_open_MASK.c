
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct bnx2x {int stats_init; int recovery_state; int dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bnx2x*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (struct bnx2x*,int*,int) ;
 int FUNC_4 (struct bnx2x*,int) ;
 int FUNC_5 (struct bnx2x*) ;
 int FUNC_6 (struct bnx2x*,int ) ;
 int FUNC_7 (struct bnx2x*,int) ;
 int FUNC_8 (struct bnx2x*,int ) ;
 int FUNC_9 (struct bnx2x*) ;
 scalar_t__ FUNC_10 (struct bnx2x*) ;
 int FUNC_11 (int ,char*) ;
 struct bnx2x* FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct net_device*) ;

__attribute__((used)) static int FUNC_15(struct net_device *VAR_6)
{
 struct bnx2x *VAR_7 = FUNC_12(VAR_6);
 int VAR_8;

 VAR_7->stats_init = 1;

 FUNC_13(VAR_6);

 FUNC_8(VAR_7, VAR_4);







 if (FUNC_2(VAR_7)) {
  int VAR_9 = FUNC_1(VAR_7) ? 0 : 1;
  bool VAR_10, VAR_11;
  bool VAR_12 = 0;

  VAR_10 = FUNC_4(VAR_7, VAR_9);
  VAR_11 = FUNC_4(VAR_7, FUNC_1(VAR_7));
  if (!FUNC_7(VAR_7, FUNC_1(VAR_7)) ||
      FUNC_3(VAR_7, &VAR_12, 1)) {
   do {





    if (VAR_12)
     FUNC_9(VAR_7);






    if ((!VAR_11 &&
         (!VAR_12 || !VAR_10)) &&
          FUNC_10(VAR_7) &&
          !FUNC_5(VAR_7)) {
     FUNC_11(VAR_7->dev,
          "Recovered in open\n");
     break;
    }


    FUNC_8(VAR_7, VAR_5);
    VAR_7->recovery_state = VAR_1;

    FUNC_0("Recovery flow hasn't been properly completed yet. Try again later.\n"
       "If you still see this message after a few retries then power cycle is required.\n");

    return -VAR_2;
   } while (0);
  }
 }

 VAR_7->recovery_state = VAR_0;
 VAR_8 = FUNC_6(VAR_7, VAR_3);
 if (VAR_8)
  return VAR_8;

 if (FUNC_2(VAR_7))
  FUNC_14(VAR_6);

 return 0;
}
