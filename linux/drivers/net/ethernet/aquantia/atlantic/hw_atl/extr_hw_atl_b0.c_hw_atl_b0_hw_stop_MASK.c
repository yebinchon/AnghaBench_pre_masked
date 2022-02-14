
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct aq_hw_s {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct aq_hw_s*) ;
 int FUNC_1 (struct aq_hw_s*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct aq_hw_s*) ;
 int FUNC_3 (int ,struct aq_hw_s*,int,int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct aq_hw_s *VAR_2)
{
 int VAR_3;
 u32 VAR_4;

 FUNC_1(VAR_2, VAR_0);




 FUNC_2(VAR_2);

 VAR_3 = FUNC_0(VAR_2);

 if (VAR_3)
  goto err_exit;

 FUNC_3(VAR_1,
      VAR_2, VAR_4, VAR_4 == 1, 1000U, 10000U);

err_exit:
 return VAR_3;
}
