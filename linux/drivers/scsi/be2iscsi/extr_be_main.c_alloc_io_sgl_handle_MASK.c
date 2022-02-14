
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sgl_handle {int dummy; } ;
struct TYPE_2__ {int ios_per_ctrl; } ;
struct beiscsi_hba {size_t io_sgl_alloc_index; int io_sgl_lock; TYPE_1__ params; scalar_t__ io_sgl_hndl_avbl; struct sgl_handle** io_sgl_hndl_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct beiscsi_hba*,int ,int ,char*,size_t) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static struct sgl_handle *FUNC_3(struct beiscsi_hba *VAR_2)
{
 struct sgl_handle *VAR_3;
 unsigned long VAR_4;

 FUNC_1(&VAR_2->io_sgl_lock, VAR_4);
 if (VAR_2->io_sgl_hndl_avbl) {
  FUNC_0(VAR_2, VAR_1, VAR_0,
       "BM_%d : In alloc_io_sgl_handle,"
       " io_sgl_alloc_index=%d\n",
       VAR_2->io_sgl_alloc_index);

  VAR_3 = VAR_2->io_sgl_hndl_base[VAR_2->
      io_sgl_alloc_index];
  VAR_2->io_sgl_hndl_base[VAR_2->io_sgl_alloc_index] = ((void*)0);
  VAR_2->io_sgl_hndl_avbl--;
  if (VAR_2->io_sgl_alloc_index == (VAR_2->params.
       ios_per_ctrl - 1))
   VAR_2->io_sgl_alloc_index = 0;
  else
   VAR_2->io_sgl_alloc_index++;
 } else
  VAR_3 = ((void*)0);
 FUNC_2(&VAR_2->io_sgl_lock, VAR_4);
 return VAR_3;
}
