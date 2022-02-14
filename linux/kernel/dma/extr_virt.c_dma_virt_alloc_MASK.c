
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int gfp_t ;
typedef uintptr_t dma_addr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (size_t) ;

__attribute__((used)) static void *FUNC_2(struct device *VAR_1, size_t VAR_2,
       dma_addr_t *VAR_3, gfp_t VAR_4,
       unsigned long VAR_5)
{
 void *VAR_6;

 VAR_6 = (void *)FUNC_0(VAR_4 | VAR_0, FUNC_1(VAR_2));
 if (VAR_6)
  *VAR_3 = (uintptr_t)VAR_6;
 return VAR_6;
}
