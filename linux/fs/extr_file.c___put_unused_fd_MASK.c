
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct files_struct {unsigned int next_fd; } ;
struct fdtable {int dummy; } ;


 int FUNC_0 (unsigned int,struct fdtable*) ;
 struct fdtable* FUNC_1 (struct files_struct*) ;

__attribute__((used)) static void FUNC_2(struct files_struct *VAR_0, unsigned int VAR_1)
{
 struct fdtable *VAR_2 = FUNC_1(VAR_0);
 FUNC_0(VAR_1, VAR_2);
 if (VAR_1 < VAR_0->next_fd)
  VAR_0->next_fd = VAR_1;
}
