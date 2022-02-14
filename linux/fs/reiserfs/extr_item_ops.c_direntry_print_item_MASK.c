
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reiserfs_de_head {int dummy; } ;
struct item_head {int dummy; } ;
typedef int namebuf ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct reiserfs_de_head*) ;
 int FUNC_3 (struct reiserfs_de_head*) ;
 int FUNC_4 (struct reiserfs_de_head*) ;
 int FUNC_5 (struct reiserfs_de_head*) ;
 int FUNC_6 (struct reiserfs_de_head*) ;
 int FUNC_7 (struct item_head*) ;
 int FUNC_8 (struct item_head*) ;
 int FUNC_9 (char*,char*,int) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,char*,int) ;

__attribute__((used)) static void FUNC_13(struct item_head *VAR_0, char *VAR_1)
{
 int VAR_2;
 int VAR_3;
 struct reiserfs_de_head *VAR_4;
 char *VAR_5;
 static char VAR_6[80];

 FUNC_10("\n # %-15s%-30s%-15s%-15s%-15s\n", "Name",
        "Key of pointed object", "Hash", "Gen number", "Status");

 VAR_4 = (struct reiserfs_de_head *)VAR_1;

 for (VAR_2 = 0; VAR_2 < FUNC_7(VAR_0); VAR_2++, VAR_4++) {
  VAR_3 =
      (VAR_2 ? (FUNC_4(VAR_4 - 1)) : FUNC_8(VAR_0)) -
      FUNC_4(VAR_4);
  VAR_5 = VAR_1 + FUNC_4(VAR_4);
  if (VAR_5[VAR_3 - 1] == 0)
   VAR_3 = FUNC_11(VAR_5);
  VAR_6[0] = '"';
  if (VAR_3 > sizeof(VAR_6) - 3) {
   FUNC_12(VAR_6 + 1, VAR_5, sizeof(VAR_6) - 3);
   VAR_6[sizeof(VAR_6) - 2] = '"';
   VAR_6[sizeof(VAR_6) - 1] = 0;
  } else {
   FUNC_9(VAR_6 + 1, VAR_5, VAR_3);
   VAR_6[VAR_3 + 1] = '"';
   VAR_6[VAR_3 + 2] = 0;
  }

  FUNC_10("%d:  %-15s%-15d%-15d%-15lld%-15lld(%s)\n",
         VAR_2, VAR_6,
         FUNC_3(VAR_4), FUNC_5(VAR_4),
         FUNC_1(FUNC_6(VAR_4)),
         FUNC_0((FUNC_6(VAR_4))),
         (FUNC_2(VAR_4)) ? "HIDDEN" : "VISIBLE");
 }
}
