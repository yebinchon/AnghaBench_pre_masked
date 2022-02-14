
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunxi_sid {scalar_t__ value_offset; scalar_t__ base; } ;


 int FUNC_0 (void*,scalar_t__,size_t) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, unsigned int VAR_1,
     void *VAR_2, size_t VAR_3)
{
 struct sunxi_sid *VAR_4 = VAR_0;

 FUNC_0(VAR_2, VAR_4->base + VAR_4->value_offset + VAR_1, VAR_3);

 return 0;
}
