
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item_head {int ih_key; } ;
typedef int loff_t ;


 int FUNC_0 (struct item_head const*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static inline loff_t FUNC_2(const struct item_head *VAR_0)
{
 return FUNC_1(FUNC_0(VAR_0), &(VAR_0->ih_key));
}
