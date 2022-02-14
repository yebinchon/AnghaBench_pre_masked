
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovl_fh {int len; scalar_t__ magic; scalar_t__ version; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

int FUNC_0(struct ovl_fh *VAR_8, int VAR_9)
{
 if (VAR_9 < sizeof(struct ovl_fh) || VAR_9 < VAR_8->len)
  return -VAR_0;

 if (VAR_8->magic != VAR_6)
  return -VAR_0;


 if (VAR_8->version > VAR_7 || VAR_8->flags & ~VAR_2)
  return -VAR_1;


 if (!(VAR_8->flags & VAR_3) &&
     (VAR_8->flags & VAR_4) != VAR_5)
  return -VAR_1;

 return 0;
}
