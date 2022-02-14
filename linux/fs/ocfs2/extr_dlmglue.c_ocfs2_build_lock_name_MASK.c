
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
typedef enum ocfs2_lock_type { ____Placeholder_ocfs2_lock_type } ocfs2_lock_type ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int,char*,int,int ,long long,int ) ;

__attribute__((used)) static void FUNC_4(enum ocfs2_lock_type VAR_3,
      u64 VAR_4,
      u32 VAR_5,
      char *VAR_6)
{
 int VAR_7;

 FUNC_0(VAR_3 >= VAR_2);

 VAR_7 = FUNC_3(VAR_6, VAR_0, "%c%s%016llx%08x",
         FUNC_2(VAR_3), VAR_1,
         (long long)VAR_4, VAR_5);

 FUNC_0(VAR_7 != (VAR_0 - 1));

 FUNC_1(0, "built lock resource with name: %s\n", VAR_6);
}
