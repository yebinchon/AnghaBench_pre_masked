
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isowbuf_t {int write; int writesem; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline int FUNC_1(struct isowbuf_t *VAR_0)
{
 int VAR_1 = VAR_0->write;
 FUNC_0(&VAR_0->writesem);
 return VAR_1;
}
