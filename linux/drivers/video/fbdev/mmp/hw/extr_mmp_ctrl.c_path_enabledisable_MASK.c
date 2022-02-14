
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmp_path {int access_ok; } ;


 scalar_t__ FUNC_0 (struct mmp_path*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct mmp_path*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct mmp_path *VAR_1, int VAR_2)
{
 u32 VAR_3;
 FUNC_2(&VAR_1->access_ok);
 VAR_3 = FUNC_4(FUNC_1(VAR_1) + FUNC_0(VAR_1));
 if (VAR_2)
  VAR_3 &= ~VAR_0;
 else
  VAR_3 |= VAR_0;
 FUNC_5(VAR_3, FUNC_1(VAR_1) + FUNC_0(VAR_1));
 FUNC_3(&VAR_1->access_ok);
}
