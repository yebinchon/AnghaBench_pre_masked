
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct p9_rdir {int tail; int head; scalar_t__ buf; } ;
struct p9_fid {TYPE_1__* clnt; } ;
struct p9_dirent {int d_off; int d_type; int qid; int d_name; } ;
struct file {struct p9_fid* private_data; } ;
struct dir_context {int pos; } ;
struct TYPE_2__ {int msize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dir_context*,int ,int ,int ,int ) ;
 int FUNC_1 (struct p9_fid*,scalar_t__,int,int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,int,struct p9_dirent*) ;
 int FUNC_4 (int ) ;
 struct p9_rdir* FUNC_5 (struct file*,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_4, struct dir_context *VAR_5)
{
 int VAR_6 = 0;
 struct p9_fid *VAR_7;
 int VAR_8;
 struct p9_rdir *VAR_9;
 struct p9_dirent VAR_10;

 FUNC_2(VAR_2, "name %pD\n", VAR_4);
 VAR_7 = VAR_4->private_data;

 VAR_8 = VAR_7->clnt->msize - VAR_3;

 VAR_9 = FUNC_5(VAR_4, VAR_8);
 if (!VAR_9)
  return -VAR_1;

 while (1) {
  if (VAR_9->tail == VAR_9->head) {
   VAR_6 = FUNC_1(VAR_7, VAR_9->buf, VAR_8,
      VAR_5->pos);
   if (VAR_6 <= 0)
    return VAR_6;

   VAR_9->head = 0;
   VAR_9->tail = VAR_6;
  }

  while (VAR_9->head < VAR_9->tail) {

   VAR_6 = FUNC_3(VAR_7->clnt, VAR_9->buf + VAR_9->head,
         VAR_9->tail - VAR_9->head,
         &VAR_10);
   if (VAR_6 < 0) {
    FUNC_2(VAR_2, "returned %d\n", VAR_6);
    return -VAR_0;
   }

   if (!FUNC_0(VAR_5, VAR_10.d_name,
          FUNC_4(VAR_10.d_name),
          FUNC_6(&VAR_10.qid),
          VAR_10.d_type))
    return 0;

   VAR_5->pos = VAR_10.d_off;
   VAR_9->head += VAR_6;
  }
 }
}
