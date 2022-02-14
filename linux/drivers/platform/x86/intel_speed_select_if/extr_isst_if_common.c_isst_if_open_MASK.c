
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isst_if_cmd_cb {int owner; scalar_t__ registered; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct isst_if_cmd_cb* VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_5, struct file *VAR_6)
{
 int VAR_7, VAR_8 = 0;


 FUNC_1(&VAR_4);
 for (VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7) {
  struct isst_if_cmd_cb *VAR_9 = &VAR_3[VAR_7];

  if (VAR_9->registered && !FUNC_3(VAR_9->owner)) {
   VAR_8 = -VAR_0;
   break;
  }
 }
 if (VAR_8) {
  int VAR_10;

  for (VAR_10 = 0; VAR_10 < VAR_7; ++VAR_10) {
   struct isst_if_cmd_cb *VAR_11;

   VAR_11 = &VAR_3[VAR_10];
   if (VAR_11->registered)
    FUNC_0(VAR_11->owner);
  }
 } else {
  VAR_2++;
 }
 FUNC_2(&VAR_4);

 return VAR_8;
}
