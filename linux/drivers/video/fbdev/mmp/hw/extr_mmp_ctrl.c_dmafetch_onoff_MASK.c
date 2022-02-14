
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmp_path {int id; } ;
struct mmp_overlay {int access_ok; struct mmp_path* path; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct mmp_path*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct mmp_overlay*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct mmp_overlay *VAR_2, int VAR_3)
{
 u32 VAR_4 = FUNC_6(VAR_2) ? VAR_0 :
     VAR_1;
 u32 VAR_5 = FUNC_6(VAR_2) ? FUNC_0(1) : FUNC_1(1);
 u32 VAR_6;
 struct mmp_path *VAR_7 = VAR_2->path;

 FUNC_4(&VAR_2->access_ok);
 VAR_6 = FUNC_7(FUNC_2(VAR_7) + FUNC_3(0, VAR_7->id));
 VAR_6 &= ~VAR_4;
 VAR_6 |= (VAR_3 ? VAR_5 : 0);
 FUNC_8(VAR_6, FUNC_2(VAR_7) + FUNC_3(0, VAR_7->id));
 FUNC_5(&VAR_2->access_ok);
}
