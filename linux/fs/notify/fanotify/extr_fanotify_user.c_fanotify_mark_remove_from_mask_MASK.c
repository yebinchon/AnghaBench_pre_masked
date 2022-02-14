
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsnotify_mark {int mask; int ignored_mask; int lock; } ;
typedef int __u32 ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static __u32 FUNC_2(struct fsnotify_mark *VAR_1,
         __u32 VAR_2,
         unsigned int VAR_3,
         int *VAR_4)
{
 __u32 VAR_5 = 0;

 FUNC_0(&VAR_1->lock);
 if (!(VAR_3 & VAR_0)) {
  VAR_5 = VAR_1->mask;
  VAR_1->mask &= ~VAR_2;
 } else {
  VAR_1->ignored_mask &= ~VAR_2;
 }
 *VAR_4 = !(VAR_1->mask | VAR_1->ignored_mask);
 FUNC_1(&VAR_1->lock);

 return VAR_2 & VAR_5;
}
