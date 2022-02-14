
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct aq_hw_s {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct aq_hw_s*) ;
 int FUNC_1 (struct aq_hw_s*,unsigned int,int ) ;
 int FUNC_2 (struct aq_hw_s*,unsigned int,int ) ;
 int FUNC_3 (struct aq_hw_s*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_4(struct aq_hw_s *VAR_2, u8 *VAR_3)
{
 int VAR_4 = 0;
 unsigned int VAR_5 = 0U;
 unsigned int VAR_6 = 0U;

 if (!VAR_3) {
  VAR_4 = -VAR_0;
  goto err_exit;
 }
 VAR_5 = (VAR_3[0] << 8) | (VAR_3[1]);
 VAR_6 = (VAR_3[2] << 24) | (VAR_3[3] << 16) |
     (VAR_3[4] << 8) | VAR_3[5];

 FUNC_1(VAR_2, 0U, VAR_1);
 FUNC_2(VAR_2, VAR_6, VAR_1);
 FUNC_3(VAR_2, VAR_5, VAR_1);
 FUNC_1(VAR_2, 1U, VAR_1);

 VAR_4 = FUNC_0(VAR_2);

err_exit:
 return VAR_4;
}
