
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenfb_page {scalar_t__ in_cons; scalar_t__ in_prod; } ;
struct xenfb_info {int irq; struct xenfb_page* page; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct xenfb_info*,int ,int ,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{





 struct xenfb_info *VAR_4 = VAR_3;
 struct xenfb_page *VAR_5 = VAR_4->page;

 if (VAR_5->in_cons != VAR_5->in_prod) {
  VAR_4->page->in_cons = VAR_4->page->in_prod;
  FUNC_0(VAR_4->irq);
 }


 FUNC_1(VAR_4, VAR_0, VAR_0, -VAR_0, -VAR_0);

 return VAR_1;
}
