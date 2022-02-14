
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int ,int *) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_5, struct file *VAR_6)
{
 if (VAR_3) {
  FUNC_1();
  FUNC_3(VAR_0);
 } else {
  FUNC_4("Unexpected close - watchdog is not stopping\n");
  FUNC_2();

  FUNC_5(VAR_2, &VAR_4);
 }

 FUNC_0(VAR_1, &VAR_4);
 VAR_3 = 0;
 return 0;
}
