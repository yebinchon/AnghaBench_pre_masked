
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int identity; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_5, struct file *VAR_6)
{
 if (VAR_1 == 42) {
  FUNC_0(0, VAR_4);
  FUNC_2(VAR_0);
 } else {
  FUNC_3("%s: Unexpected close, not stopping watchdog!\n",
   VAR_2.identity);
  FUNC_4(VAR_4);
 }
 FUNC_1(0, &VAR_3);
 VAR_1 = 0;

 return 0;
}
