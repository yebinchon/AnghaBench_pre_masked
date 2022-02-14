
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int * destructor_arg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (struct sk_buff*,scalar_t__) ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static inline struct sk_buff *FUNC_4(unsigned int VAR_4)
{
 struct sk_buff *VAR_5 =
  FUNC_0(VAR_4 + VAR_2 + VAR_1,
     VAR_0 | VAR_3);
 if (FUNC_3(VAR_5 == ((void*)0)))
  return ((void*)0);


 FUNC_1(VAR_5, VAR_2 + VAR_1);


 FUNC_2(VAR_5)->destructor_arg = ((void*)0);

 return VAR_5;
}
