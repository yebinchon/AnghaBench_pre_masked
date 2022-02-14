
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_kiocb {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct io_kiocb*) ;
 int FUNC_1 (struct io_kiocb*) ;
 int FUNC_2 (struct io_kiocb*) ;

__attribute__((used)) static void FUNC_3(struct io_kiocb *VAR_2)
{






 if (VAR_2->flags & VAR_1) {
  if (VAR_2->flags & VAR_0)
   FUNC_1(VAR_2);
  else
   FUNC_2(VAR_2);
 }

 FUNC_0(VAR_2);
}
