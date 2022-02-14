
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsg_buffhd {struct fsg_buffhd* buf; } ;


 int FUNC_0 (struct fsg_buffhd*) ;

__attribute__((used)) static void FUNC_1(struct fsg_buffhd *VAR_0, unsigned VAR_1)
{
 if (VAR_0) {
  struct fsg_buffhd *VAR_2 = VAR_0;
  while (VAR_1--) {
   FUNC_0(VAR_2->buf);
   ++VAR_2;
  }
  FUNC_0(VAR_0);
 }
}
