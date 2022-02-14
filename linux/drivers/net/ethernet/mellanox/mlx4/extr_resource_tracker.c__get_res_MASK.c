
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct res_common {scalar_t__ state; char const* func_name; int owner; scalar_t__ from_state; } ;
struct mlx4_dev {int dummy; } ;
typedef enum mlx4_resource { ____Placeholder_mlx4_resource } mlx4_resource ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct res_common* FUNC_0 (struct mlx4_dev*,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mlx4_dev*) ;
 int FUNC_3 (struct mlx4_dev*,char*,char const*,int,int ,int ,char const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct mlx4_dev *VAR_4, int VAR_5, u64 VAR_6,
      enum mlx4_resource VAR_7,
      void *VAR_8, const char *VAR_9)
{
 struct res_common *VAR_10;
 int VAR_11 = 0;

 FUNC_4(FUNC_2(VAR_4));
 VAR_10 = FUNC_0(VAR_4, VAR_6, VAR_7);
 if (!VAR_10) {
  VAR_11 = -VAR_1;
  goto exit;
 }

 if (VAR_10->state == VAR_3) {
  FUNC_3(VAR_4,
     "%s(%d) trying to get resource %llx of type %s, but it's already taken by %s\n",
     VAR_9, VAR_5, VAR_6, FUNC_1(VAR_7),
     VAR_10->func_name);
  VAR_11 = -VAR_0;
  goto exit;
 }

 if (VAR_10->owner != VAR_5) {
  VAR_11 = -VAR_2;
  goto exit;
 }

 VAR_10->from_state = VAR_10->state;
 VAR_10->state = VAR_3;
 VAR_10->func_name = VAR_9;

 if (VAR_8)
  *((struct res_common **)VAR_8) = VAR_10;

exit:
 FUNC_5(FUNC_2(VAR_4));
 return VAR_11;
}
