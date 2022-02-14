
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fotg210_itd {int* index; int * hw_bufp; int hw_next; } ;
struct fotg210_iso_stream {int buf2; int buf1; int buf0; } ;
struct fotg210_hcd {int dummy; } ;


 int FUNC_0 (struct fotg210_hcd*) ;

__attribute__((used)) static inline void FUNC_1(struct fotg210_hcd *VAR_0,
  struct fotg210_iso_stream *VAR_1, struct fotg210_itd *VAR_2)
{
 int VAR_3;


 VAR_2->hw_next = FUNC_0(VAR_0);
 VAR_2->hw_bufp[0] = VAR_1->buf0;
 VAR_2->hw_bufp[1] = VAR_1->buf1;
 VAR_2->hw_bufp[2] = VAR_1->buf2;

 for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
  VAR_2->index[VAR_3] = -1;


}
