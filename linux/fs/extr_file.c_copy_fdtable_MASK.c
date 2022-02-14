
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct fdtable {int max_fds; scalar_t__ fd; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct fdtable*,struct fdtable*,int) ;
 int FUNC_2 (scalar_t__,scalar_t__,unsigned int) ;
 int FUNC_3 (char*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct fdtable *VAR_0, struct fdtable *VAR_1)
{
 unsigned int VAR_2, VAR_3;

 FUNC_0(VAR_0->max_fds < VAR_1->max_fds);

 VAR_2 = VAR_1->max_fds * sizeof(struct file *);
 VAR_3 = (VAR_0->max_fds - VAR_1->max_fds) * sizeof(struct file *);
 FUNC_2(VAR_0->fd, VAR_1->fd, VAR_2);
 FUNC_3((char *)VAR_0->fd + VAR_2, 0, VAR_3);

 FUNC_1(VAR_0, VAR_1, VAR_1->max_fds);
}
