
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ffs_io_data {int sgt; scalar_t__ use_sg; } ;


 int VAR_0 ;
 void* FUNC_0 (int *,size_t) ;
 void* FUNC_1 (size_t,int ) ;

__attribute__((used)) static inline void *FUNC_2(struct ffs_io_data *VAR_1,
 size_t VAR_2)
{
 if (VAR_1->use_sg)
  return FUNC_0(&VAR_1->sgt, VAR_2);

 return FUNC_1(VAR_2, VAR_0);
}
