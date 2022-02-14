
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ffs_io_data {int buf; int sgt; scalar_t__ use_sg; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(struct ffs_io_data *VAR_0)
{
 if (!VAR_0->buf)
  return;

 if (VAR_0->use_sg) {
  FUNC_1(&VAR_0->sgt);
  FUNC_2(VAR_0->buf);
 } else {
  FUNC_0(VAR_0->buf);
 }
}
