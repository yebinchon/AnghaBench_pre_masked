
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isst_if_cmd_cb {int owner; scalar_t__ registered; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct isst_if_cmd_cb* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_4, struct file *VAR_5)
{
 int VAR_6;

 FUNC_1(&VAR_3);
 VAR_1--;
 for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6) {
  struct isst_if_cmd_cb *VAR_7 = &VAR_2[VAR_6];

  if (VAR_7->registered)
   FUNC_0(VAR_7->owner);
 }
 FUNC_2(&VAR_3);

 return 0;
}
