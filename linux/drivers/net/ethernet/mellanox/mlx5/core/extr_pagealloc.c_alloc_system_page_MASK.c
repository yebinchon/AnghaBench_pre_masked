
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u16 ;
struct page {int dummy; } ;
struct mlx5_core_dev {struct device* device; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (int,int ,int ) ;
 int FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (struct device*,struct page*,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct device*,scalar_t__) ;
 int FUNC_5 (struct device*,scalar_t__,int ,int ) ;
 int FUNC_6 (struct mlx5_core_dev*,scalar_t__,struct page*,int ) ;
 int FUNC_7 (struct mlx5_core_dev*,char*) ;
 int FUNC_8 (struct mlx5_core_dev*,char*) ;

__attribute__((used)) static int FUNC_9(struct mlx5_core_dev *VAR_4, u16 VAR_5)
{
 struct device *VAR_6 = VAR_4->device;
 int VAR_7 = FUNC_2(VAR_6);
 struct page *VAR_8;
 u64 VAR_9 = 1;
 u64 VAR_10;
 int VAR_11;

 VAR_8 = FUNC_1(VAR_7, VAR_2, 0);
 if (!VAR_8) {
  FUNC_8(VAR_4, "failed to allocate page\n");
  return -VAR_1;
 }
map:
 VAR_10 = FUNC_3(VAR_6, VAR_8, 0, VAR_3, VAR_0);
 if (FUNC_4(VAR_6, VAR_10)) {
  FUNC_8(VAR_4, "failed dma mapping page\n");
  VAR_11 = -VAR_1;
  goto err_mapping;
 }


 if (VAR_10 == 0) {
  VAR_9 = VAR_10;
  goto map;
 }

 VAR_11 = FUNC_6(VAR_4, VAR_10, VAR_8, VAR_5);
 if (VAR_11) {
  FUNC_7(VAR_4, "failed to track allocated page\n");
  FUNC_5(VAR_6, VAR_10, VAR_3, VAR_0);
 }

err_mapping:
 if (VAR_11)
  FUNC_0(VAR_8);

 if (VAR_9 == 0)
  FUNC_5(VAR_6, VAR_9, VAR_3,
          VAR_0);

 return VAR_11;
}
