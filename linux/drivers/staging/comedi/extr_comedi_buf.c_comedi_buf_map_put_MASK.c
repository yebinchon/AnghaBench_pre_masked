
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_buf_map {int refcount; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

int FUNC_1(struct comedi_buf_map *VAR_1)
{
 if (VAR_1)
  return FUNC_0(&VAR_1->refcount, VAR_0);
 return 1;
}
