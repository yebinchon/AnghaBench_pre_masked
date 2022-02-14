
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd {int file; } ;
struct eventfd_ctx {int dummy; } ;


 int VAR_0 ;
 struct eventfd_ctx* FUNC_0 (int ) ;
 struct eventfd_ctx* FUNC_1 (int ) ;
 struct fd FUNC_2 (int) ;
 int FUNC_3 (struct fd) ;

struct eventfd_ctx *FUNC_4(int VAR_1)
{
 struct eventfd_ctx *VAR_2;
 struct fd VAR_3 = FUNC_2(VAR_1);
 if (!VAR_3.file)
  return FUNC_0(-VAR_0);
 VAR_2 = FUNC_1(VAR_3.file);
 FUNC_3(VAR_3);
 return VAR_2;
}
