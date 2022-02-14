
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_veu_dev {scalar_t__ xaction; int m2m_ctx; int m2m_dev; scalar_t__ aborting; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sh_veu_dev*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct sh_veu_dev *VAR_4 = VAR_3;

 if (VAR_4->xaction == VAR_1 || VAR_4->aborting) {
  FUNC_1(VAR_4->m2m_dev, VAR_4->m2m_ctx);
  VAR_4->xaction = 0;
 } else {
  FUNC_0(VAR_4);
 }

 return VAR_0;
}
