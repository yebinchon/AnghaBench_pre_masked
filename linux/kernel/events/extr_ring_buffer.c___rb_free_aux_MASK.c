
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer {int aux_nr_pages; int aux_pages; int * aux_priv; int (* free_aux ) (int *) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ring_buffer*,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct ring_buffer *VAR_0)
{
 int VAR_1;







 FUNC_0(FUNC_1());

 if (VAR_0->aux_priv) {
  VAR_0->free_aux(VAR_0->aux_priv);
  VAR_0->free_aux = ((void*)0);
  VAR_0->aux_priv = ((void*)0);
 }

 if (VAR_0->aux_nr_pages) {
  for (VAR_1 = 0; VAR_1 < VAR_0->aux_nr_pages; VAR_1++)
   FUNC_3(VAR_0, VAR_1);

  FUNC_2(VAR_0->aux_pages);
  VAR_0->aux_nr_pages = 0;
 }
}
