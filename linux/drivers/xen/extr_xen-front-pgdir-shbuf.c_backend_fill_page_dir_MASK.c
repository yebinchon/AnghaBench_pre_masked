
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_page_directory {int gref_dir_next_page; } ;
struct xen_front_pgdir_shbuf {unsigned char* directory; int * grefs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xen_front_pgdir_shbuf*) ;

__attribute__((used)) static void FUNC_1(struct xen_front_pgdir_shbuf *VAR_2)
{
 struct xen_page_directory *VAR_3;
 unsigned char *VAR_4;
 int VAR_5, VAR_6;

 VAR_4 = VAR_2->directory;
 VAR_6 = FUNC_0(VAR_2);


 for (VAR_5 = 0; VAR_5 < VAR_6 - 1; VAR_5++) {
  VAR_3 = (struct xen_page_directory *)VAR_4;

  VAR_3->gref_dir_next_page = VAR_2->grefs[VAR_5 + 1];
  VAR_4 += VAR_1;
 }

 VAR_3 = (struct xen_page_directory *)VAR_4;
 VAR_3->gref_dir_next_page = VAR_0;
}
