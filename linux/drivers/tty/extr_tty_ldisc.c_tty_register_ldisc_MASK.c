
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_ldisc_ops {int num; scalar_t__ refcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct tty_ldisc_ops** VAR_3 ;
 int VAR_4 ;

int FUNC_2(int VAR_5, struct tty_ldisc_ops *VAR_6)
{
 unsigned long VAR_7;
 int VAR_8 = 0;

 if (VAR_5 < VAR_2 || VAR_5 >= VAR_1)
  return -VAR_0;

 FUNC_0(&VAR_4, VAR_7);
 VAR_3[VAR_5] = VAR_6;
 VAR_6->num = VAR_5;
 VAR_6->refcount = 0;
 FUNC_1(&VAR_4, VAR_7);

 return VAR_8;
}
