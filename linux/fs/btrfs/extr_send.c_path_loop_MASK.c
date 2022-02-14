
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct send_ctx {int parent_root; } ;
struct fs_path {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct send_ctx*,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*,struct fs_path*) ;
 int FUNC_1 (struct fs_path*) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__*,scalar_t__*,struct fs_path*) ;
 scalar_t__ FUNC_3 (struct send_ctx*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct send_ctx*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct send_ctx *VAR_1, struct fs_path *VAR_2,
       u64 VAR_3, u64 VAR_4, u64 *VAR_5)
{
 int VAR_6 = 0;
 u64 VAR_7 = 0;
 u64 VAR_8 = 0;
 u64 VAR_9 = VAR_3;

 *VAR_5 = 0;
 while (VAR_3 != VAR_0) {
  FUNC_1(VAR_2);

  if (FUNC_4(VAR_1, VAR_3))
   break;
  if (FUNC_3(VAR_1, VAR_3)) {
   if (*VAR_5 == 0)
    *VAR_5 = VAR_3;
   VAR_6 = FUNC_2(VAR_1->parent_root, VAR_3,
         &VAR_7, &VAR_8, VAR_2);
  } else {
   VAR_6 = FUNC_0(VAR_1, VAR_3, VAR_4,
       &VAR_7,
       &VAR_8, VAR_2);
   if (VAR_6 > 0) {
    VAR_6 = 0;
    break;
   }
  }
  if (VAR_6 < 0)
   break;
  if (VAR_7 == VAR_9) {
   VAR_6 = 1;
   if (*VAR_5 == 0)
    *VAR_5 = VAR_3;
   break;
  }
  VAR_3 = VAR_7;
  VAR_4 = VAR_8;
 }
 return VAR_6;
}
