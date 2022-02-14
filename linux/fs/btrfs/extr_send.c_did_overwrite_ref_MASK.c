
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
struct send_ctx {scalar_t__ send_progress; scalar_t__ cur_ino; scalar_t__ cur_inode_gen; int send_root; int parent_root; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int *,scalar_t__*,int *,int *,int *,int *) ;
 int FUNC_1 (struct send_ctx*,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,char const*,int,scalar_t__*,int *) ;

__attribute__((used)) static int FUNC_3(struct send_ctx *VAR_2,
       u64 VAR_3, u64 VAR_4,
       u64 VAR_5, u64 VAR_6,
       const char *VAR_7, int VAR_8)
{
 int VAR_9 = 0;
 u64 VAR_10;
 u64 VAR_11;
 u8 VAR_12;

 if (!VAR_2->parent_root)
  goto out;

 VAR_9 = FUNC_1(VAR_2, VAR_3, VAR_4);
 if (VAR_9 <= 0)
  goto out;

 if (VAR_3 != VAR_0) {
  VAR_9 = FUNC_0(VAR_2->send_root, VAR_3, ((void*)0), &VAR_10, ((void*)0),
         ((void*)0), ((void*)0), ((void*)0));
  if (VAR_9 < 0 && VAR_9 != -VAR_1)
   goto out;
  if (VAR_9) {
   VAR_9 = 0;
   goto out;
  }
  if (VAR_10 != VAR_4)
   goto out;
 }


 VAR_9 = FUNC_2(VAR_2->send_root, VAR_3, VAR_7, VAR_8,
   &VAR_11, &VAR_12);
 if (VAR_9 < 0 && VAR_9 != -VAR_1)
  goto out;
 if (VAR_9) {

  VAR_9 = 0;
  goto out;
 }

 VAR_9 = FUNC_0(VAR_2->send_root, VAR_11, ((void*)0), &VAR_10, ((void*)0), ((void*)0),
   ((void*)0), ((void*)0));
 if (VAR_9 < 0)
  goto out;

 if (VAR_11 == VAR_5 && VAR_10 == VAR_6) {
  VAR_9 = 0;
  goto out;
 }







 if ((VAR_11 < VAR_2->send_progress) ||
     (VAR_5 != VAR_2->cur_ino && VAR_11 == VAR_2->cur_ino &&
      VAR_10 == VAR_2->cur_inode_gen))
  VAR_9 = 1;
 else
  VAR_9 = 0;

out:
 return VAR_9;
}
