
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct TYPE_2__ {struct list_head* processing; } ;
struct fuse_dev {TYPE_1__ pq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 struct list_head* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct fuse_dev*) ;
 struct fuse_dev* FUNC_3 (int,int ) ;

struct fuse_dev *FUNC_4(void)
{
 struct fuse_dev *VAR_2;
 struct list_head *VAR_3;

 VAR_2 = FUNC_3(sizeof(struct fuse_dev), VAR_1);
 if (!VAR_2)
  return ((void*)0);

 VAR_3 = FUNC_1(VAR_0, sizeof(struct list_head), VAR_1);
 if (!VAR_3) {
  FUNC_2(VAR_2);
  return ((void*)0);
 }

 VAR_2->pq.processing = VAR_3;
 FUNC_0(&VAR_2->pq);

 return VAR_2;
}
