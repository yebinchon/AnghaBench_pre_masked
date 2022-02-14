
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ ip_summed; scalar_t__ csum_offset; } ;
typedef scalar_t__ __sum16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static inline int FUNC_3(struct sk_buff *VAR_1)
{

 if (VAR_1->ip_summed != VAR_0)
  return 0;


 if (FUNC_2(FUNC_1(VAR_1, 0)))
  return -1;





 *(__sum16 *)(FUNC_0(VAR_1) + VAR_1->csum_offset) = 0;
 return 0;
}
