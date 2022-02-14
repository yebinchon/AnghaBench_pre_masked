
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int fh_lock; int fh_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_3(struct video_device *VAR_0)
{
 unsigned long VAR_1;
 bool VAR_2;

 FUNC_1(&VAR_0->fh_lock, VAR_1);
 VAR_2 = !FUNC_0(&VAR_0->fh_list);
 FUNC_2(&VAR_0->fh_lock, VAR_1);
 return VAR_2;
}
