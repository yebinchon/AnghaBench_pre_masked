
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_resource {int mutex; } ;
struct nfp_cpp_mutex {int dummy; } ;
struct nfp_cpp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct nfp_cpp_mutex*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nfp_cpp_mutex*) ;
 int FUNC_4 (struct nfp_cpp*,struct nfp_resource*) ;

__attribute__((used)) static int
FUNC_5(struct nfp_cpp *VAR_1, struct nfp_resource *VAR_2,
    struct nfp_cpp_mutex *VAR_3)
{
 int VAR_4;

 if (FUNC_1(VAR_3))
  return -VAR_0;

 VAR_4 = FUNC_4(VAR_1, VAR_2);
 if (VAR_4)
  goto err_unlock_dev;

 VAR_4 = FUNC_2(VAR_2->mutex);
 if (VAR_4)
  goto err_res_mutex_free;

 FUNC_3(VAR_3);

 return 0;

err_res_mutex_free:
 FUNC_0(VAR_2->mutex);
err_unlock_dev:
 FUNC_3(VAR_3);

 return VAR_4;
}
