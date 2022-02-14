
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sclp_buffer {unsigned short columns; scalar_t__ current_length; int * current_line; } ;


 int FUNC_0 (struct sclp_buffer*) ;

void
FUNC_1(struct sclp_buffer *VAR_0, unsigned short VAR_1)
{
 VAR_0->columns = VAR_1;
 if (VAR_0->current_line != ((void*)0) &&
     VAR_0->current_length > VAR_0->columns)
  FUNC_0(VAR_0);
}
