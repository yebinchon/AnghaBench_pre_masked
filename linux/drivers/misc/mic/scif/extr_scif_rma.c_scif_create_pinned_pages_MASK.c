
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scif_pinned_pages {int prot; int magic; void* pages; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct scif_pinned_pages*,int) ;
 void* FUNC_2 (int) ;

__attribute__((used)) static struct scif_pinned_pages *
FUNC_3(int VAR_1, int VAR_2)
{
 struct scif_pinned_pages *VAR_3;

 FUNC_0();
 VAR_3 = FUNC_2(sizeof(*VAR_3));
 if (!VAR_3)
  goto error;

 VAR_3->pages = FUNC_2(VAR_1 * sizeof(*VAR_3->pages));
 if (!VAR_3->pages)
  goto error_free_pinned_pages;

 VAR_3->prot = VAR_2;
 VAR_3->magic = VAR_0;
 return VAR_3;

error_free_pinned_pages:
 FUNC_1(VAR_3, sizeof(*VAR_3));
error:
 return ((void*)0);
}
