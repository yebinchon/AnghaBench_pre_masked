
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3_ep {int dummy; } ;
struct dwc3 {int num_eps; struct dwc3_ep** eps; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (struct dwc3_ep*,struct dentry*) ;

__attribute__((used)) static void FUNC_1(struct dwc3 *VAR_0,
  struct dentry *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_eps; VAR_2++) {
  struct dwc3_ep *VAR_3 = VAR_0->eps[VAR_2];

  if (!VAR_3)
   continue;

  FUNC_0(VAR_3, VAR_1);
 }
}
