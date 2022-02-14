
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_ring_ctx {scalar_t__ nr_user_files; int * user_files; } ;


 int VAR_0 ;
 int FUNC_0 (struct io_ring_ctx*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct io_ring_ctx *VAR_1)
{
 if (!VAR_1->user_files)
  return -VAR_0;

 FUNC_0(VAR_1);
 FUNC_1(VAR_1->user_files);
 VAR_1->user_files = ((void*)0);
 VAR_1->nr_user_files = 0;
 return 0;
}
