
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_ldisc_ops {int refcount; int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tty_ldisc_ops* FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (int ) ;
 struct tty_ldisc_ops** VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static struct tty_ldisc_ops *FUNC_4(int VAR_4)
{
 unsigned long VAR_5;
 struct tty_ldisc_ops *VAR_6, *VAR_7;

 FUNC_1(&VAR_3, VAR_5);
 VAR_7 = FUNC_0(-VAR_1);
 VAR_6 = VAR_2[VAR_4];
 if (VAR_6) {
  VAR_7 = FUNC_0(-VAR_0);
  if (FUNC_3(VAR_6->owner)) {
   VAR_6->refcount++;
   VAR_7 = VAR_6;
  }
 }
 FUNC_2(&VAR_3, VAR_5);
 return VAR_7;
}
