
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
struct send_ctx {scalar_t__ send_progress; scalar_t__ parent_root; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__,int *,scalar_t__*,scalar_t__*,int *,int *,int *) ;
 int FUNC_1 (struct send_ctx*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct send_ctx*,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__,char const*,int,scalar_t__*,int *) ;

__attribute__((used)) static int FUNC_4(struct send_ctx *VAR_2, u64 VAR_3, u64 VAR_4,
         const char *VAR_5, int VAR_6,
         u64 *VAR_7, u64 *VAR_8, u64 *VAR_9)
{
 int VAR_10 = 0;
 u64 VAR_11;
 u64 VAR_12 = 0;
 u8 VAR_13 = 0;

 if (!VAR_2->parent_root)
  goto out;

 VAR_10 = FUNC_1(VAR_2, VAR_3, VAR_4);
 if (VAR_10 <= 0)
  goto out;






 if (VAR_2->parent_root && VAR_3 != VAR_0) {
  VAR_10 = FUNC_0(VAR_2->parent_root, VAR_3, ((void*)0), &VAR_11, ((void*)0),
         ((void*)0), ((void*)0), ((void*)0));
  if (VAR_10 < 0 && VAR_10 != -VAR_1)
   goto out;
  if (VAR_10) {
   VAR_10 = 0;
   goto out;
  }
  if (VAR_11 != VAR_4)
   goto out;
 }

 VAR_10 = FUNC_3(VAR_2->parent_root, VAR_3, VAR_5, VAR_6,
   &VAR_12, &VAR_13);
 if (VAR_10 < 0 && VAR_10 != -VAR_1)
  goto out;
 if (VAR_10) {
  VAR_10 = 0;
  goto out;
 }






 if (VAR_12 > VAR_2->send_progress ||
     FUNC_2(VAR_2, VAR_12)) {
  VAR_10 = FUNC_0(VAR_2->parent_root, VAR_12, ((void*)0),
    VAR_8, VAR_9, ((void*)0), ((void*)0), ((void*)0));
  if (VAR_10 < 0)
   goto out;

  VAR_10 = 1;
  *VAR_7 = VAR_12;
 } else {
  VAR_10 = 0;
 }

out:
 return VAR_10;
}
