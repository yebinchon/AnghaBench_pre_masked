
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsnotify_mark {int mask; int ignored_mask; int lock; int flags; } ;
typedef int __u32 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static __u32 FUNC_2(struct fsnotify_mark *VAR_3,
           __u32 VAR_4,
           unsigned int VAR_5)
{
 __u32 VAR_6 = -1;

 FUNC_0(&VAR_3->lock);
 if (!(VAR_5 & VAR_0)) {
  VAR_6 = VAR_3->mask;
  VAR_3->mask |= VAR_4;
 } else {
  VAR_3->ignored_mask |= VAR_4;
  if (VAR_5 & VAR_1)
   VAR_3->flags |= VAR_2;
 }
 FUNC_1(&VAR_3->lock);

 return VAR_4 & ~VAR_6;
}
