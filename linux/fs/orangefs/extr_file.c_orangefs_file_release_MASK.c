
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int i_data; scalar_t__ i_mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct file*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_4, struct file *VAR_5)
{
 FUNC_3(VAR_0,
       "orangefs_file_release: called on %pD\n",
       VAR_5);






 if (FUNC_0(VAR_5) &&
     FUNC_0(VAR_5)->i_mapping &&
     FUNC_4(&FUNC_0(VAR_5)->i_data)) {
  if (VAR_3 & VAR_2) {
   FUNC_3(VAR_1,
       "calling flush_racache on %pU\n",
       FUNC_2(VAR_4));
   FUNC_1(VAR_4);
   FUNC_3(VAR_1,
       "flush_racache finished\n");
  }

 }
 return 0;
}
