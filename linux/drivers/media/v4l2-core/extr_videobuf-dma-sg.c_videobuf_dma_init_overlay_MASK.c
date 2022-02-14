
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_dmabuf {int direction; int nr_pages; scalar_t__ bus_addr; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int,unsigned long) ;

__attribute__((used)) static int FUNC_1(struct videobuf_dmabuf *VAR_1, int VAR_2,
         dma_addr_t VAR_3, int VAR_4)
{
 FUNC_0(1, "init overlay [%d pages @ bus 0x%lx]\n",
  VAR_4, (unsigned long)VAR_3);
 VAR_1->direction = VAR_2;

 if (0 == VAR_3)
  return -VAR_0;

 VAR_1->bus_addr = VAR_3;
 VAR_1->nr_pages = VAR_4;

 return 0;
}
