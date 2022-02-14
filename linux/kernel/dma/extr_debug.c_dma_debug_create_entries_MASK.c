
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_debug_entry {int list; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(gfp_t VAR_5)
{
 struct dma_debug_entry *VAR_6;
 int VAR_7;

 VAR_6 = (void *)FUNC_0(VAR_5);
 if (!VAR_6)
  return -VAR_1;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  FUNC_1(&VAR_6[VAR_7].list, &VAR_2);

 VAR_4 += VAR_0;
 VAR_3 += VAR_0;

 return 0;
}
