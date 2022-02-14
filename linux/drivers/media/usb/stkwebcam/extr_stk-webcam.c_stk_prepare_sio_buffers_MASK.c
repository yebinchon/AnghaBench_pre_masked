
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stk_sio_buffer {int dummy; } ;
struct stk_camera {int n_sbufs; int * sio_bufs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (unsigned int,int,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct stk_camera*,int) ;

__attribute__((used)) static int FUNC_3(struct stk_camera *VAR_2, unsigned VAR_3)
{
 int VAR_4;
 if (VAR_2->sio_bufs != ((void*)0))
  FUNC_1("sio_bufs already allocated\n");
 else {
  VAR_2->sio_bufs = FUNC_0(VAR_3,
     sizeof(struct stk_sio_buffer),
     VAR_1);
  if (VAR_2->sio_bufs == ((void*)0))
   return -VAR_0;
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
   if (FUNC_2(VAR_2, VAR_4))
    return (VAR_2->n_sbufs > 1 ? 0 : -VAR_0);
   VAR_2->n_sbufs = VAR_4+1;
  }
 }
 return 0;
}
