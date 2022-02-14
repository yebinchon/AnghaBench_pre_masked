
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int index; } ;
struct TYPE_3__ {TYPE_2__ vb2_buf; } ;
struct saa7134_buf {TYPE_1__ vb2; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;

int FUNC_2(struct saa7134_buf *VAR_0)
{
 return FUNC_0(FUNC_1(&VAR_0->vb2.vb2_buf, 0))
   * VAR_0->vb2.vb2_buf.index;
}
