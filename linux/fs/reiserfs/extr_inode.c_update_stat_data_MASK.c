
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct treepath {int dummy; } ;
struct item_head {int dummy; } ;
struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;
typedef int loff_t ;


 int FUNC_0 (struct inode*) ;
 struct buffer_head* FUNC_1 (struct treepath*) ;
 int FUNC_2 (struct buffer_head*,struct item_head*) ;
 int FUNC_3 (int ,struct inode*,int ) ;
 int FUNC_4 (int ,struct inode*,int ) ;
 int FUNC_5 (struct item_head*) ;
 int FUNC_6 (int ,char*,char*,int ,struct item_head*) ;
 scalar_t__ FUNC_7 (struct item_head*) ;
 struct item_head* FUNC_8 (struct treepath*) ;

__attribute__((used)) static void FUNC_9(struct treepath *VAR_0, struct inode *VAR_1,
        loff_t VAR_2)
{
 struct buffer_head *VAR_3;
 struct item_head *VAR_4;

 VAR_3 = FUNC_1(VAR_0);
 VAR_4 = FUNC_8(VAR_0);

 if (!FUNC_5(VAR_4))
  FUNC_6(VAR_1->i_sb, "vs-13065", "key %k, found item %h",
          FUNC_0(VAR_1), VAR_4);


 if (FUNC_7(VAR_4)) {
  FUNC_4(FUNC_2(VAR_3, VAR_4), VAR_1, VAR_2);
 } else {
  FUNC_3(FUNC_2(VAR_3, VAR_4), VAR_1, VAR_2);
 }

 return;
}
