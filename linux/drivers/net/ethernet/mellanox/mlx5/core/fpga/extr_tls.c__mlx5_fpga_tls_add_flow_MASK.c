
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tls_crypto_info {int dummy; } ;
struct mlx5_setup_stream_context {int dummy; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,void*,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct mlx5_setup_stream_context*) ;
 struct mlx5_setup_stream_context* FUNC_2 (size_t,int ) ;
 int FUNC_3 (struct mlx5_core_dev*) ;
 int FUNC_4 (void*,void*) ;
 int FUNC_5 (void*,int ,struct tls_crypto_info*) ;
 int FUNC_6 (struct mlx5_core_dev*,struct mlx5_setup_stream_context*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_7(struct mlx5_core_dev *VAR_4, void *VAR_5,
       struct tls_crypto_info *VAR_6,
       u32 VAR_7, u32 VAR_8)
{
 u32 VAR_9 = FUNC_3(VAR_4);
 struct mlx5_setup_stream_context *VAR_10;
 int VAR_11 = -VAR_0;
 size_t VAR_12;
 void *VAR_13;

 VAR_12 = VAR_2 + sizeof(*VAR_10);
 VAR_10 = FUNC_2(VAR_12, VAR_1);
 if (!VAR_10)
  goto out;

 VAR_13 = VAR_10 + 1;
 VAR_11 = FUNC_5(VAR_13, VAR_9, VAR_6);
 if (VAR_11)
  goto free_ctx;

 FUNC_4(VAR_5, VAR_13);

 FUNC_0(VAR_3, VAR_13, VAR_7, VAR_7);
 FUNC_0(VAR_3, VAR_13, VAR_8, VAR_8);

 return FUNC_6(VAR_4, VAR_10);

free_ctx:
 FUNC_1(VAR_10);
out:
 return VAR_11;
}
