
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_buffer {int bflags; int io_pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;

int FUNC_2(struct extent_buffer *VAR_2)
{
 return (FUNC_0(&VAR_2->io_pages) ||
  FUNC_1(VAR_1, &VAR_2->bflags) ||
  FUNC_1(VAR_0, &VAR_2->bflags));
}
