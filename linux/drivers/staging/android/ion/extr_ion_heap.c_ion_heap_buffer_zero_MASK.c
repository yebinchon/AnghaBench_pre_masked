
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_table {int nents; int sgl; } ;
struct ion_buffer {int flags; struct sg_table* sg_table; } ;
typedef int pgprot_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct ion_buffer *VAR_2)
{
 struct sg_table *VAR_3 = VAR_2->sg_table;
 pgprot_t VAR_4;

 if (VAR_2->flags & VAR_0)
  VAR_4 = VAR_1;
 else
  VAR_4 = FUNC_1(VAR_1);

 return FUNC_0(VAR_3->sgl, VAR_3->nents, VAR_4);
}
