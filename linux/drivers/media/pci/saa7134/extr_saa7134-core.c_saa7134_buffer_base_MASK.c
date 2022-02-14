
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sg_table {TYPE_2__* sgl; } ;
struct TYPE_3__ {int vb2_buf; } ;
struct saa7134_buf {TYPE_1__ vb2; } ;
struct TYPE_4__ {scalar_t__ offset; } ;


 int FUNC_0 (struct saa7134_buf*) ;
 struct sg_table* FUNC_1 (int *,int ) ;

unsigned long FUNC_2(struct saa7134_buf *VAR_0)
{
 unsigned long VAR_1;
 struct sg_table *VAR_2 = FUNC_1(&VAR_0->vb2.vb2_buf, 0);

 VAR_1 = FUNC_0(VAR_0) * 4096;
 VAR_1 += VAR_2->sgl[0].offset;
 return VAR_1;
}
