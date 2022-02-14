
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3_ep {int name; } ;
struct dentry {int dummy; } ;


 struct dentry* FUNC_0 (int ,struct dentry*) ;
 int FUNC_1 (struct dwc3_ep*,struct dentry*) ;

__attribute__((used)) static void FUNC_2(struct dwc3_ep *VAR_0,
  struct dentry *VAR_1)
{
 struct dentry *VAR_2;

 VAR_2 = FUNC_0(VAR_0->name, VAR_1);
 FUNC_1(VAR_0, VAR_2);
}
