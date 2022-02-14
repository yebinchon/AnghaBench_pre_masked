
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fuse_req {int list; int flags; } ;
struct fuse_conn {scalar_t__ num_background; scalar_t__ max_background; int blocked; scalar_t__ congestion_threshold; int bg_lock; int bg_queue; TYPE_1__* sb; int connected; int num_waiting; } ;
struct TYPE_2__ {int s_bdi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct fuse_conn*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static bool FUNC_10(struct fuse_conn *VAR_5,
       struct fuse_req *VAR_6)
{
 bool VAR_7 = 0;

 FUNC_0(!FUNC_9(VAR_2, &VAR_6->flags));
 if (!FUNC_9(VAR_4, &VAR_6->flags)) {
  FUNC_1(VAR_4, &VAR_6->flags);
  FUNC_2(&VAR_5->num_waiting);
 }
 FUNC_1(VAR_3, &VAR_6->flags);
 FUNC_7(&VAR_5->bg_lock);
 if (FUNC_4(VAR_5->connected)) {
  VAR_5->num_background++;
  if (VAR_5->num_background == VAR_5->max_background)
   VAR_5->blocked = 1;
  if (VAR_5->num_background == VAR_5->congestion_threshold && VAR_5->sb) {
   FUNC_6(VAR_5->sb->s_bdi, VAR_1);
   FUNC_6(VAR_5->sb->s_bdi, VAR_0);
  }
  FUNC_5(&VAR_6->list, &VAR_5->bg_queue);
  FUNC_3(VAR_5);
  VAR_7 = 1;
 }
 FUNC_8(&VAR_5->bg_lock);

 return VAR_7;
}
