
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct aq_rxpage {unsigned int order; int * page; int daddr; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (struct device*,int ,unsigned int,int ) ;

__attribute__((used)) static inline void FUNC_2(struct aq_rxpage *VAR_2, struct device *VAR_3)
{
 unsigned int VAR_4 = VAR_1 << VAR_2->order;

 FUNC_1(VAR_3, VAR_2->daddr, VAR_4, VAR_0);


 FUNC_0(VAR_2->page, VAR_2->order);
 VAR_2->page = ((void*)0);
}
