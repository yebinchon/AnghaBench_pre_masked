
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_4, struct file *VAR_5)
{
 if (VAR_1 == 42) {
  FUNC_3();
  FUNC_2("Watchdog disabled\n");
 } else {
  FUNC_4(VAR_0, VAR_3);
  FUNC_1("Unexpected close!, timeout = %d min(s)\n", VAR_3);
 }
 FUNC_0(0, &VAR_2);
 VAR_1 = 0;

 return 0;
}
