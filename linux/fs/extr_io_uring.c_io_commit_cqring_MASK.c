
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_ring_ctx {int dummy; } ;
struct io_kiocb {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct io_ring_ctx*) ;
 int FUNC_1 (struct io_kiocb*) ;
 struct io_kiocb* FUNC_2 (struct io_ring_ctx*) ;
 struct io_kiocb* FUNC_3 (struct io_ring_ctx*) ;
 int FUNC_4 (struct io_kiocb*) ;
 int FUNC_5 (struct io_ring_ctx*,struct io_kiocb*) ;

__attribute__((used)) static void FUNC_6(struct io_ring_ctx *VAR_2)
{
 struct io_kiocb *VAR_3;

 while ((VAR_3 = FUNC_3(VAR_2)) != ((void*)0))
  FUNC_4(VAR_3);

 FUNC_0(VAR_2);

 while ((VAR_3 = FUNC_2(VAR_2)) != ((void*)0)) {
  if (VAR_3->flags & VAR_1) {

   FUNC_1(VAR_3);
   continue;
  }
  VAR_3->flags |= VAR_0;
  FUNC_5(VAR_2, VAR_3);
 }
}
