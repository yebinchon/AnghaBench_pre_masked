
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_hwfn {int dummy; } ;
struct qed_bmap {int name; int bitmap; int max_count; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ,int ,char*,char*) ;

int FUNC_4(struct qed_hwfn *VAR_4,
   struct qed_bmap *VAR_5, u32 VAR_6, char *VAR_7)
{
 FUNC_1(VAR_4, VAR_2, "max_count = %08x\n", VAR_6);

 VAR_5->max_count = VAR_6;

 VAR_5->bitmap = FUNC_2(FUNC_0(VAR_6), sizeof(long),
          VAR_1);
 if (!VAR_5->bitmap)
  return -VAR_0;

 FUNC_3(VAR_5->name, VAR_3, "%s", VAR_7);

 FUNC_1(VAR_4, VAR_2, "0\n");
 return 0;
}
