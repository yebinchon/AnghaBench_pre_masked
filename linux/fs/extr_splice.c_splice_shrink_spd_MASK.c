
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct splice_pipe_desc {scalar_t__ nr_pages_max; int partial; int pages; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

void FUNC_1(struct splice_pipe_desc *VAR_1)
{
 if (VAR_1->nr_pages_max <= VAR_0)
  return;

 FUNC_0(VAR_1->pages);
 FUNC_0(VAR_1->partial);
}
