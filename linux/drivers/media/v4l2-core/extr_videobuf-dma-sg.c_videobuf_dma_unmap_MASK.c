
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_dmabuf {scalar_t__ sglen; int * sglist; int direction; int nr_pages; int magic; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct device*,int *,int ,int ) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct device *VAR_1, struct videobuf_dmabuf *VAR_2)
{
 FUNC_0(VAR_2->magic, VAR_0);

 if (!VAR_2->sglen)
  return 0;

 FUNC_1(VAR_1, VAR_2->sglist, VAR_2->nr_pages, VAR_2->direction);

 FUNC_2(VAR_2->sglist);
 VAR_2->sglist = ((void*)0);
 VAR_2->sglen = 0;

 return 0;
}
