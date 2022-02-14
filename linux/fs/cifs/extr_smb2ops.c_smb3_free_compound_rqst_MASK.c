
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_rqst {int rq_npages; int * rq_pages; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

void
FUNC_2(int VAR_0, struct smb_rqst *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1[VAR_2].rq_pages) {
   for (VAR_3 = VAR_1[VAR_2].rq_npages - 1; VAR_3 >= 0; VAR_3--)
    FUNC_1(VAR_1[VAR_2].rq_pages[VAR_3]);
   FUNC_0(VAR_1[VAR_2].rq_pages);
  }
 }
}
