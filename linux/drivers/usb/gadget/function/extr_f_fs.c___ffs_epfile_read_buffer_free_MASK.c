
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ffs_epfile {int read_buffer; } ;
struct ffs_buffer {int dummy; } ;


 struct ffs_buffer* VAR_0 ;
 int FUNC_0 (struct ffs_buffer*) ;
 struct ffs_buffer* FUNC_1 (int *,struct ffs_buffer*) ;

__attribute__((used)) static void FUNC_2(struct ffs_epfile *VAR_1)
{




 struct ffs_buffer *VAR_2 = FUNC_1(&VAR_1->read_buffer, VAR_0);
 if (VAR_2 && VAR_2 != VAR_0)
  FUNC_0(VAR_2);
}
