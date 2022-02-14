
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdtable {int open_fds; int fd; } ;


 int FUNC_0 (struct fdtable*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct fdtable *VAR_0)
{
 FUNC_1(VAR_0->fd);
 FUNC_1(VAR_0->open_fds);
 FUNC_0(VAR_0);
}
