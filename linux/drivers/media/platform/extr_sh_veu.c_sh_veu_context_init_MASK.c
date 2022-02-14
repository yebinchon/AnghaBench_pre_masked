
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_veu_dev {scalar_t__ m2m_ctx; int m2m_dev; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,struct sh_veu_dev*,int ) ;

__attribute__((used)) static int FUNC_2(struct sh_veu_dev *VAR_1)
{
 if (VAR_1->m2m_ctx)
  return 0;

 VAR_1->m2m_ctx = FUNC_1(VAR_1->m2m_dev, VAR_1,
      VAR_0);

 return FUNC_0(VAR_1->m2m_ctx);
}
