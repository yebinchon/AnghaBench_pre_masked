
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct adapter {int dummy; } ;
typedef enum ctxt_type { ____Placeholder_ctxt_type } ctxt_type ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct adapter*,int) ;
 int FUNC_3 (struct adapter*,int ,int ,int ,int,int) ;
 int FUNC_4 (struct adapter*,int ,int) ;

int FUNC_5(struct adapter *VAR_4, unsigned int VAR_5,
        enum ctxt_type VAR_6, u32 *VAR_7)
{
 int VAR_8, VAR_9;

 FUNC_4(VAR_4, VAR_1, FUNC_0(VAR_5) | FUNC_1(VAR_6));
 VAR_9 = FUNC_3(VAR_4, VAR_1, VAR_0, 0, 3, 1);
 if (!VAR_9)
  for (VAR_8 = VAR_2; VAR_8 <= VAR_3; VAR_8 += 4)
   *VAR_7++ = FUNC_2(VAR_4, VAR_8);
 return VAR_9;
}
