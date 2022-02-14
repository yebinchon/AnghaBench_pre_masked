
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time64_t ;
struct key {int dummy; } ;
struct afs_volume {scalar_t__ update_at; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct afs_volume*,struct key*) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *,int ) ;

int FUNC_10(struct afs_volume *VAR_6, struct key *VAR_7)
{
 time64_t VAR_8 = FUNC_4();
 int VAR_9, VAR_10 = 0;

 FUNC_0("");

 if (VAR_6->update_at <= VAR_8)
  FUNC_5(VAR_0, &VAR_6->flags);

retry:
 if (!FUNC_7(VAR_0, &VAR_6->flags) &&
     !FUNC_7(VAR_2, &VAR_6->flags)) {
  FUNC_1(" = 0");
  return 0;
 }

 if (!FUNC_6(VAR_1, &VAR_6->flags)) {
  VAR_9 = FUNC_2(VAR_6, VAR_7);
  FUNC_3(VAR_2, &VAR_6->flags);
  FUNC_3(VAR_1, &VAR_6->flags);
  FUNC_9(&VAR_6->flags, VAR_2);
  FUNC_1(" = %d", VAR_9);
  return VAR_9;
 }

 if (!FUNC_7(VAR_2, &VAR_6->flags)) {
  FUNC_1(" = 0 [no wait]");
  return 0;
 }

 VAR_9 = FUNC_8(&VAR_6->flags, VAR_2, VAR_5);
 if (VAR_9 == -VAR_3) {
  FUNC_1(" = %d", VAR_9);
  return VAR_9;
 }

 VAR_10++;
 if (VAR_10 == 4) {
  FUNC_1(" = -ESTALE");
  return -VAR_4;
 }
 goto retry;
}
