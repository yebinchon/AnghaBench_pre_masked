
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nicvf {scalar_t__ rb_pageref; int rb_page; } ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct nicvf *VAR_0)
{
 if (!VAR_0->rb_pageref || !VAR_0->rb_page)
  return;

 FUNC_0(VAR_0->rb_page, VAR_0->rb_pageref);
 VAR_0->rb_pageref = 0;
}
