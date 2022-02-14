
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7134_dmasound {int nr_pages; int * vaddr; int * sglist; } ;
struct saa7134_dev {struct saa7134_dmasound dmasound; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,struct page*,int,int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int) ;
 struct page* FUNC_7 (int *) ;
 int * FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct saa7134_dev *VAR_3, int VAR_4)
{
 struct saa7134_dmasound *VAR_5 = &VAR_3->dmasound;
 struct page *VAR_6;
 int VAR_7;

 VAR_5->vaddr = FUNC_6(VAR_4 << VAR_1);
 if (((void*)0) == VAR_5->vaddr) {
  FUNC_2("vmalloc_32(%d pages) failed\n", VAR_4);
  return -VAR_0;
 }

 FUNC_2("vmalloc is at addr %p, size=%d\n",
   *VAR_5->vaddr, VAR_4 << VAR_1);

 FUNC_1(VAR_5->vaddr, 0, VAR_4 << VAR_1);
 VAR_5->nr_pages = VAR_4;

 VAR_5->sglist = FUNC_8(FUNC_0(sizeof(*VAR_5->sglist), VAR_5->nr_pages));
 if (((void*)0) == VAR_5->sglist)
  goto vzalloc_err;

 FUNC_3(VAR_5->sglist, VAR_5->nr_pages);
 for (VAR_7 = 0; VAR_7 < VAR_5->nr_pages; VAR_7++) {
  VAR_6 = FUNC_7(VAR_5->vaddr + VAR_7 * VAR_2);
  if (((void*)0) == VAR_6)
   goto vmalloc_to_page_err;
  FUNC_4(&VAR_5->sglist[VAR_7], VAR_6, VAR_2, 0);
 }
 return 0;

vmalloc_to_page_err:
 FUNC_5(VAR_5->sglist);
 VAR_5->sglist = ((void*)0);
vzalloc_err:
 FUNC_5(VAR_5->vaddr);
 VAR_5->vaddr = ((void*)0);
 return -VAR_0;
}
