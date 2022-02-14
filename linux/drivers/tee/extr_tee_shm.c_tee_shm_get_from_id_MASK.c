
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tee_shm {int flags; int dmabuf; struct tee_context* ctx; } ;
struct tee_device {int mutex; int idr; } ;
struct tee_context {struct tee_device* teedev; } ;


 int VAR_0 ;
 struct tee_shm* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 struct tee_shm* FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

struct tee_shm *FUNC_5(struct tee_context *VAR_2, int VAR_3)
{
 struct tee_device *VAR_4;
 struct tee_shm *VAR_5;

 if (!VAR_2)
  return FUNC_0(-VAR_0);

 VAR_4 = VAR_2->teedev;
 FUNC_3(&VAR_4->mutex);
 VAR_5 = FUNC_2(&VAR_4->idr, VAR_3);
 if (!VAR_5 || VAR_5->ctx != VAR_2)
  VAR_5 = FUNC_0(-VAR_0);
 else if (VAR_5->flags & VAR_1)
  FUNC_1(VAR_5->dmabuf);
 FUNC_4(&VAR_4->mutex);
 return VAR_5;
}
