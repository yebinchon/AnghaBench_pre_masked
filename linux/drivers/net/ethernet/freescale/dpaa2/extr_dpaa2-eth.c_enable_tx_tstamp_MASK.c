
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dpaa2_fd {int dummy; } ;
struct dpaa2_faead {int ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct dpaa2_fd*) ;
 int FUNC_2 (struct dpaa2_fd*) ;
 int FUNC_3 (struct dpaa2_fd*,int) ;
 int FUNC_4 (struct dpaa2_fd*,int) ;
 struct dpaa2_faead* FUNC_5 (void*,int) ;

__attribute__((used)) static void FUNC_6(struct dpaa2_fd *VAR_5, void *VAR_6)
{
 struct dpaa2_faead *VAR_7;
 u32 VAR_8, VAR_9;


 VAR_9 = FUNC_2(VAR_5);
 FUNC_4(VAR_5, VAR_9 | VAR_4);


 VAR_8 = FUNC_1(VAR_5);
 FUNC_3(VAR_5, VAR_8 | VAR_3);




 VAR_8 = VAR_0 | VAR_2 | VAR_1;
 VAR_7 = FUNC_5(VAR_6, 1);
 VAR_7->ctrl = FUNC_0(VAR_8);
}
