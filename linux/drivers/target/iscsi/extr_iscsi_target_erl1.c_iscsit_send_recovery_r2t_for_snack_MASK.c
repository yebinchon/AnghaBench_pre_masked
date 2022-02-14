
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_r2t {scalar_t__ sent_r2t; } ;
struct iscsi_cmd {int conn; int r2t_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct iscsi_cmd*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(
 struct iscsi_cmd *VAR_1,
 struct iscsi_r2t *VAR_2)
{





 FUNC_1(&VAR_1->r2t_lock);
 if (!VAR_2->sent_r2t) {
  FUNC_2(&VAR_1->r2t_lock);
  return 0;
 }
 VAR_2->sent_r2t = 0;
 FUNC_2(&VAR_1->r2t_lock);

 FUNC_0(VAR_1, VAR_1->conn, VAR_0);

 return 0;
}
