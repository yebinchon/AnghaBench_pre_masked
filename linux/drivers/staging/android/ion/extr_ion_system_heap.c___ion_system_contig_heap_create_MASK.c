
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ion_heap {char* name; int type; int * ops; } ;


 int VAR_0 ;
 struct ion_heap* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ion_heap* FUNC_1 (int,int ) ;

__attribute__((used)) static struct ion_heap *FUNC_2(void)
{
 struct ion_heap *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);
 VAR_4->ops = &VAR_3;
 VAR_4->type = VAR_2;
 VAR_4->name = "ion_system_contig_heap";

 return VAR_4;
}
