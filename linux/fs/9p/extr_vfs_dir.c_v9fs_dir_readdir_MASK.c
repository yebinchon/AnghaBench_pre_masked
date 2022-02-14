
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct p9_wstat {int qid; int name; } ;
struct p9_rdir {scalar_t__ buf; scalar_t__ tail; scalar_t__ head; } ;
struct p9_fid {TYPE_1__* clnt; } ;
struct kvec {scalar_t__ iov_base; int iov_len; } ;
struct iov_iter {int dummy; } ;
struct file {struct p9_fid* private_data; } ;
struct dir_context {int pos; } ;
struct TYPE_2__ {int msize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dir_context*,int ,int ,int ,int ) ;
 int FUNC_1 (struct p9_wstat*) ;
 int FUNC_2 (struct iov_iter*,int ,struct kvec*,int,int) ;
 int FUNC_3 (struct p9_fid*,int,struct iov_iter*,int*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct p9_wstat*) ;
 int FUNC_6 (TYPE_1__*,scalar_t__,scalar_t__,struct p9_wstat*) ;
 int FUNC_7 (int ) ;
 struct p9_rdir* FUNC_8 (struct file*,int) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct file *VAR_5, struct dir_context *VAR_6)
{
 bool VAR_7;
 struct p9_wstat VAR_8;
 int VAR_9 = 0;
 struct p9_fid *VAR_10;
 int VAR_11;
 struct p9_rdir *VAR_12;
 struct kvec VAR_13;

 FUNC_4(VAR_2, "name %pD\n", VAR_5);
 VAR_10 = VAR_5->private_data;

 VAR_11 = VAR_10->clnt->msize - VAR_3;

 VAR_12 = FUNC_8(VAR_5, VAR_11);
 if (!VAR_12)
  return -VAR_1;
 VAR_13.iov_base = VAR_12->buf;
 VAR_13.iov_len = VAR_11;

 while (1) {
  if (VAR_12->tail == VAR_12->head) {
   struct iov_iter VAR_14;
   int VAR_15;
   FUNC_2(&VAR_14, VAR_4, &VAR_13, 1, VAR_11);
   VAR_15 = FUNC_3(VAR_5->private_data, VAR_6->pos, &VAR_14,
        &VAR_9);
   if (VAR_9)
    return VAR_9;
   if (VAR_15 == 0)
    return 0;

   VAR_12->head = 0;
   VAR_12->tail = VAR_15;
  }
  while (VAR_12->head < VAR_12->tail) {
   VAR_9 = FUNC_6(VAR_10->clnt, VAR_12->buf + VAR_12->head,
       VAR_12->tail - VAR_12->head, &VAR_8);
   if (VAR_9 <= 0) {
    FUNC_4(VAR_2, "returned %d\n", VAR_9);
    return -VAR_0;
   }

   VAR_7 = !FUNC_0(VAR_6, VAR_8.name, FUNC_7(VAR_8.name),
      FUNC_9(&VAR_8.qid), FUNC_1(&VAR_8));
   FUNC_5(&VAR_8);
   if (VAR_7)
    return 0;

   VAR_12->head += VAR_9;
   VAR_6->pos += VAR_9;
  }
 }
}
