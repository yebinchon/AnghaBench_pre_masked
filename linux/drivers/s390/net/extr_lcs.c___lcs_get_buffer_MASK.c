
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lcs_channel {int io_idx; struct lcs_buffer* iob; } ;
struct lcs_buffer {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static struct lcs_buffer *
FUNC_1(struct lcs_channel *VAR_4)
{
 int VAR_5;

 FUNC_0(5, VAR_3, "_getbuff");
 VAR_5 = VAR_4->io_idx;
 do {
  if (VAR_4->iob[VAR_5].state == VAR_0) {
   VAR_4->iob[VAR_5].state = VAR_1;
   return VAR_4->iob + VAR_5;
  }
  VAR_5 = (VAR_5 + 1) & (VAR_2 - 1);
 } while (VAR_5 != VAR_4->io_idx);
 return ((void*)0);
}
