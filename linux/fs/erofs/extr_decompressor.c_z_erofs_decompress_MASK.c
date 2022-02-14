
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z_erofs_decompress_req {scalar_t__ alg; } ;
struct list_head {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct z_erofs_decompress_req*,struct list_head*) ;
 int FUNC_1 (struct z_erofs_decompress_req*,struct list_head*) ;

int FUNC_2(struct z_erofs_decompress_req *VAR_1,
         struct list_head *VAR_2)
{
 if (VAR_1->alg == VAR_0)
  return FUNC_1(VAR_1, VAR_2);
 return FUNC_0(VAR_1, VAR_2);
}
