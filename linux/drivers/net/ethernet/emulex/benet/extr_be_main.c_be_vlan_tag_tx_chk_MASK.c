
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct be_adapter {scalar_t__ qnq_vid; scalar_t__ pvid; } ;


 scalar_t__ FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_1(struct be_adapter *VAR_0, struct sk_buff *VAR_1)
{
 return FUNC_0(VAR_1) || VAR_0->pvid || VAR_0->qnq_vid;
}
