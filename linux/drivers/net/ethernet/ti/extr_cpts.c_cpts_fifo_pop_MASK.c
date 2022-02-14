
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cpts {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpts*,int ) ;
 int FUNC_1 (struct cpts*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_2(struct cpts *VAR_6, u32 *VAR_7, u32 *VAR_8)
{
 u32 VAR_9 = FUNC_0(VAR_6, VAR_5);

 if (VAR_9 & VAR_1) {
  *VAR_7 = FUNC_0(VAR_6, VAR_2);
  *VAR_8 = FUNC_0(VAR_6, VAR_3);
  FUNC_1(VAR_6, VAR_0, VAR_4);
  return 0;
 }
 return -1;
}
