
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpdma_buf {size_t size; int mapped; scalar_t__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (size_t,int ) ;

int FUNC_2(struct vpdma_buf *VAR_3, size_t VAR_4)
{
 VAR_3->size = VAR_4;
 VAR_3->mapped = 0;
 VAR_3->addr = FUNC_1(VAR_4, VAR_1);
 if (!VAR_3->addr)
  return -VAR_0;

 FUNC_0(((unsigned long)VAR_3->addr & VAR_2) != 0);

 return 0;
}
