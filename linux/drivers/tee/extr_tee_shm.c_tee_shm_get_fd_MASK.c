
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tee_shm {int flags; int dmabuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct tee_shm *VAR_3)
{
 int VAR_4;

 if (!(VAR_3->flags & VAR_2))
  return -VAR_0;

 FUNC_2(VAR_3->dmabuf);
 VAR_4 = FUNC_0(VAR_3->dmabuf, VAR_1);
 if (VAR_4 < 0)
  FUNC_1(VAR_3->dmabuf);
 return VAR_4;
}
