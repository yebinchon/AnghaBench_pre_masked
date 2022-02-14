
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; } ;
struct vpdma_desc_list {int type; TYPE_1__ buf; int next; } ;


 int FUNC_0 (TYPE_1__*,size_t) ;

int FUNC_1(struct vpdma_desc_list *VAR_0, size_t VAR_1, int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_0->buf, VAR_1);
 if (VAR_3)
  return VAR_3;

 VAR_0->next = VAR_0->buf.addr;

 VAR_0->type = VAR_2;

 return 0;
}
