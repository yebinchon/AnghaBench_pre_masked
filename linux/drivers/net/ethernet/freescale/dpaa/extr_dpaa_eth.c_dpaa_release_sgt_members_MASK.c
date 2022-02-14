
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qm_sg_entry {scalar_t__ bpid; } ;
struct dpaa_bp {int dummy; } ;
struct bm_buffer {int dummy; } ;
typedef int bmb ;


 int FUNC_0 (struct bm_buffer*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bm_buffer*,int ) ;
 int FUNC_3 (struct dpaa_bp*,struct bm_buffer*,int) ;
 struct dpaa_bp* FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct bm_buffer*,int ,int) ;
 int FUNC_6 (struct qm_sg_entry*) ;
 int FUNC_7 (struct qm_sg_entry*) ;
 int FUNC_8 (struct qm_sg_entry*) ;

__attribute__((used)) static void FUNC_9(struct qm_sg_entry *VAR_1)
{
 struct bm_buffer VAR_2[VAR_0];
 struct dpaa_bp *VAR_3;
 int VAR_4 = 0, VAR_5;

 FUNC_5(VAR_2, 0, sizeof(VAR_2));

 do {
  VAR_3 = FUNC_4(VAR_1[VAR_4].bpid);
  if (!VAR_3)
   return;

  VAR_5 = 0;
  do {
   FUNC_1(FUNC_7(&VAR_1[VAR_4]));

   FUNC_2(&VAR_2[VAR_5], FUNC_6(&VAR_1[VAR_4]));

   VAR_5++; VAR_4++;
  } while (VAR_5 < FUNC_0(VAR_2) &&
    !FUNC_8(&VAR_1[VAR_4 - 1]) &&
    VAR_1[VAR_4 - 1].bpid == VAR_1[VAR_4].bpid);

  FUNC_3(VAR_3, VAR_2, VAR_5);
 } while (!FUNC_8(&VAR_1[VAR_4 - 1]));
}
