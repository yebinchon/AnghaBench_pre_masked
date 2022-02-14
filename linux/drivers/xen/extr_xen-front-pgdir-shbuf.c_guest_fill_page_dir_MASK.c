
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_page_directory {int gref; int gref_dir_next_page; } ;
struct xen_front_pgdir_shbuf {unsigned char* directory; int num_pages; int * grefs; } ;
typedef int grant_ref_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xen_front_pgdir_shbuf*) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static void FUNC_2(struct xen_front_pgdir_shbuf *VAR_3)
{
 unsigned char *VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_4 = VAR_3->directory;
 VAR_9 = FUNC_0(VAR_3);





 VAR_5 = VAR_9;
 VAR_6 = VAR_3->num_pages;
 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  struct xen_page_directory *VAR_10 =
   (struct xen_page_directory *)VAR_4;

  if (VAR_6 <= VAR_2) {
   VAR_7 = VAR_6;
   VAR_10->gref_dir_next_page = VAR_0;
  } else {
   VAR_7 = VAR_2;
   VAR_10->gref_dir_next_page = VAR_3->grefs[VAR_8 + 1];
  }
  FUNC_1(&VAR_10->gref, &VAR_3->grefs[VAR_5],
         VAR_7 * sizeof(grant_ref_t));
  VAR_4 += VAR_1;
  VAR_6 -= VAR_7;
  VAR_5 += VAR_7;
 }
}
