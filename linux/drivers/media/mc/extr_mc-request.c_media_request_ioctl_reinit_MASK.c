
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct media_request {scalar_t__ state; int lock; int debug_str; scalar_t__ access_count; struct media_device* mdev; } ;
struct media_device {int dev; } ;


 long VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct media_request*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static long FUNC_4(struct media_request *VAR_4)
{
 struct media_device *VAR_5 = VAR_4->mdev;
 unsigned long VAR_6;

 FUNC_2(&VAR_4->lock, VAR_6);
 if (VAR_4->state != VAR_3 &&
     VAR_4->state != VAR_2) {
  FUNC_0(VAR_5->dev,
   "request: %s not in idle or complete state, cannot reinit\n",
   VAR_4->debug_str);
  FUNC_3(&VAR_4->lock, VAR_6);
  return -VAR_0;
 }
 if (VAR_4->access_count) {
  FUNC_0(VAR_5->dev,
   "request: %s is being accessed, cannot reinit\n",
   VAR_4->debug_str);
  FUNC_3(&VAR_4->lock, VAR_6);
  return -VAR_0;
 }
 VAR_4->state = VAR_1;
 FUNC_3(&VAR_4->lock, VAR_6);

 FUNC_1(VAR_4);

 FUNC_2(&VAR_4->lock, VAR_6);
 VAR_4->state = VAR_3;
 FUNC_3(&VAR_4->lock, VAR_6);

 return 0;
}
