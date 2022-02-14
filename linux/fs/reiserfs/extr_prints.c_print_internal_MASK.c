
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reiserfs_key {int dummy; } ;
struct disk_child {int dummy; } ;
struct buffer_head {int b_blocknr; } ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 struct disk_child* FUNC_2 (struct buffer_head*,int) ;
 int FUNC_3 (struct buffer_head*) ;
 struct reiserfs_key* FUNC_4 (struct buffer_head*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int,struct buffer_head*,...) ;

__attribute__((used)) static int FUNC_7(struct buffer_head *VAR_0, int VAR_1, int VAR_2)
{
 struct reiserfs_key *VAR_3;
 struct disk_child *VAR_4;
 int VAR_5;
 int VAR_6, VAR_7;

 if (!FUNC_0(VAR_0))
  return 1;

 FUNC_3(VAR_0);

 if (VAR_1 == -1) {
  VAR_6 = 0;
  VAR_7 = FUNC_1(VAR_0);
 } else {
  VAR_6 = VAR_1;
  VAR_7 = VAR_2 < FUNC_1(VAR_0) ? VAR_2 : FUNC_1(VAR_0);
 }

 FUNC_6("INTERNAL NODE (%ld) contains %z\n", VAR_0->b_blocknr, VAR_0);

 VAR_4 = FUNC_2(VAR_0, VAR_6);
 FUNC_6("PTR %d: %y ", VAR_6, VAR_4);

 for (VAR_5 = VAR_6, VAR_3 = FUNC_4(VAR_0, VAR_6), VAR_4++; VAR_5 < VAR_7;
      VAR_5++, VAR_3++, VAR_4++) {
  FUNC_6("KEY %d: %k PTR %d: %y ", VAR_5, VAR_3, VAR_5 + 1, VAR_4);
  if (VAR_5 && VAR_5 % 4 == 0)
   FUNC_5("\n");
 }
 FUNC_5("\n");
 return 0;
}
