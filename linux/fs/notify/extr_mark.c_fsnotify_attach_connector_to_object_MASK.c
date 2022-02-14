
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_3__ {scalar_t__* val; } ;
struct fsnotify_mark_connector {unsigned int type; scalar_t__ flags; TYPE_1__ fsid; int * obj; int list; int lock; } ;
typedef int fsnotify_connp_t ;
typedef TYPE_1__ __kernel_fsid_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *,struct fsnotify_mark_connector*) ;
 int FUNC_2 (struct fsnotify_mark_connector*) ;
 int VAR_4 ;
 struct inode* FUNC_3 (int ) ;
 int FUNC_4 (struct inode*) ;
 struct fsnotify_mark_connector* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,struct fsnotify_mark_connector*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(fsnotify_connp_t *VAR_5,
            unsigned int VAR_6,
            __kernel_fsid_t *VAR_7)
{
 struct inode *VAR_8 = ((void*)0);
 struct fsnotify_mark_connector *VAR_9;

 VAR_9 = FUNC_5(VAR_4, VAR_3);
 if (!VAR_9)
  return -VAR_0;
 FUNC_7(&VAR_9->lock);
 FUNC_0(&VAR_9->list);
 VAR_9->type = VAR_6;
 VAR_9->obj = VAR_5;

 if (VAR_7) {
  VAR_9->fsid = *VAR_7;
  VAR_9->flags = VAR_1;
 } else {
  VAR_9->fsid.val[0] = VAR_9->fsid.val[1] = 0;
  VAR_9->flags = 0;
 }
 if (VAR_9->type == VAR_2)
  VAR_8 = FUNC_3(FUNC_2(VAR_9));




 if (FUNC_1(VAR_5, ((void*)0), VAR_9)) {

  if (VAR_8)
   FUNC_4(VAR_8);
  FUNC_6(VAR_4, VAR_9);
 }

 return 0;
}
