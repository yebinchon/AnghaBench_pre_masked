
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 void* FUNC_1 (struct device*,size_t,int *,int ) ;
 int FUNC_2 (struct device*,int) ;

__attribute__((used)) static void *FUNC_3(struct device *VAR_1, size_t VAR_2,
     dma_addr_t *VAR_3, int VAR_4)
{
 void *VAR_5;
 int VAR_6 = FUNC_0(VAR_1);

 FUNC_2(VAR_1, VAR_4);
 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_0);
 FUNC_2(VAR_1, VAR_6);

 if (!VAR_5)
  VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_0);

 return VAR_5;
}
