
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DEFINE_SPINLOCK ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static inline int FUNC_2(void)
{
 static unsigned long VAR_3 = 0;
 static int VAR_4 = 0;
 static DEFINE_SPINLOCK(VAR_5);
 unsigned long VAR_6;
 unsigned long VAR_7;
 unsigned long VAR_8;
 int VAR_9 = 0;

 if (!VAR_1) return 1;

 FUNC_0(&VAR_5, VAR_6);
 if (++VAR_4 < VAR_1) {
  VAR_9 = 1;
 } else {
  VAR_7 = VAR_2;
  VAR_8 = VAR_7 - VAR_3;
  if (VAR_8 > VAR_0) {
   VAR_3 = VAR_7;
   VAR_4 = 0;
   VAR_9 = 1;
  }
 }
 FUNC_1(&VAR_5, VAR_6);

 return VAR_9;
}
