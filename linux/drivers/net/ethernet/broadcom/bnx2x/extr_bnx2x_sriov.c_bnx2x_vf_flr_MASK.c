
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_virtf {int malicious; int abs_vfid; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (char*,int ,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct bnx2x*,int ) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_virtf*) ;
 int FUNC_4 (struct bnx2x*,struct bnx2x_virtf*) ;
 int FUNC_5 (struct bnx2x*,struct bnx2x_virtf*,int *,int ,int) ;
 int FUNC_6 (struct bnx2x*,struct bnx2x_virtf*,int) ;
 int FUNC_7 (struct bnx2x_virtf*) ;

__attribute__((used)) static void FUNC_8(struct bnx2x *VAR_1, struct bnx2x_virtf *VAR_2)
{
 int VAR_3, VAR_4;

 FUNC_1(VAR_0, "vf[%d]\n", VAR_2->abs_vfid);




 for (VAR_4 = 0; VAR_4 < FUNC_7(VAR_2); VAR_4++) {
  VAR_3 = FUNC_6(VAR_1, VAR_2, VAR_4);
  if (VAR_3)
   goto out;
 }


 FUNC_5(VAR_1, VAR_2, ((void*)0), 0, 1);


 FUNC_3(VAR_1, VAR_2);


 FUNC_4(VAR_1, VAR_2);

 VAR_2->malicious = 0;


 FUNC_2(VAR_1, VAR_2->abs_vfid);
 return;
out:
 FUNC_0("vf[%d:%d] failed flr: rc %d\n",
    VAR_2->abs_vfid, VAR_4, VAR_3);
}
