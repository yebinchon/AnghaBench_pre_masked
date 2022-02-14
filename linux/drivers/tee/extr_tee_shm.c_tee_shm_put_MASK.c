
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tee_shm {int flags; int dmabuf; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

void FUNC_1(struct tee_shm *VAR_1)
{
 if (VAR_1->flags & VAR_0)
  FUNC_0(VAR_1->dmabuf);
}
