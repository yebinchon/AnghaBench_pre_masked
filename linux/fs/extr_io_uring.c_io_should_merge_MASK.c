
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kiocb {int ki_pos; int * ki_filp; } ;
struct async_list {int io_start; int io_len; int * file; } ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(struct async_list *VAR_2, struct kiocb *VAR_3)
{
 if (VAR_2->file == VAR_3->ki_filp) {
  off_t VAR_4, VAR_5;
  VAR_4 = VAR_2->io_start & VAR_0;
  VAR_5 = (VAR_2->io_start + VAR_2->io_len + VAR_1 - 1) & VAR_0;
  if (VAR_3->ki_pos >= VAR_4 && VAR_3->ki_pos <= VAR_5)
   return 1;
 }

 VAR_2->file = ((void*)0);
 return 0;
}
