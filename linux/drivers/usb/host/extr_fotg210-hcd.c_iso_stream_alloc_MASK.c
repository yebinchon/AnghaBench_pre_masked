
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fotg210_iso_stream {int next_uframe; int free_list; int td_list; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 struct fotg210_iso_stream* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static struct fotg210_iso_stream *FUNC_3(gfp_t VAR_0)
{
 struct fotg210_iso_stream *VAR_1;

 VAR_1 = FUNC_1(sizeof(*VAR_1), VAR_0);
 if (FUNC_2(VAR_1 != ((void*)0))) {
  FUNC_0(&VAR_1->td_list);
  FUNC_0(&VAR_1->free_list);
  VAR_1->next_uframe = -1;
 }
 return VAR_1;
}
