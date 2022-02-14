
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_core_dev {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,void*,int,int,int*) ;
 int FUNC_1 (int ,void*,int,int) ;
 int FUNC_2 (struct mlx5_core_dev*,char*,char*,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct mlx5_core_dev *VAR_4, void *VAR_5, int VAR_6,
     int VAR_7, bool VAR_8)
{
 int VAR_9 = -VAR_2;
 int VAR_10;
 int VAR_11;

 if (VAR_7 % VAR_3 || VAR_6 != VAR_3)
  return -VAR_0;

 VAR_11 = VAR_7 / VAR_3;

 VAR_9 = VAR_8 ?
      FUNC_0(VAR_4->pdev, VAR_5,
     VAR_3, VAR_11,
     &VAR_10) :
      FUNC_1(VAR_4->pdev, VAR_5,
      VAR_3, VAR_11);


 if (VAR_8 && !VAR_9 && VAR_6 != VAR_10)
  VAR_9 = -VAR_1;

 if (VAR_9) {
  FUNC_2(VAR_4, "Failed to %s hv config, err = %d, len = %d, offset = %d\n",
         VAR_8 ? "read" : "write", VAR_9, VAR_6,
         VAR_7);
  return VAR_9;
 }

 return 0;
}
