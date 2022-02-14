
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,char*,int ) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;

__attribute__((used)) static void FUNC_4(struct inode *VAR_1)
{
 if (FUNC_2(VAR_1)) {





  FUNC_1(VAR_0,
        "*** NOT making bad root inode %pU\n",
        FUNC_0(VAR_1));
 } else {
  FUNC_1(VAR_0,
        "*** making bad inode %pU\n",
        FUNC_0(VAR_1));
  FUNC_3(VAR_1);
 }
}
