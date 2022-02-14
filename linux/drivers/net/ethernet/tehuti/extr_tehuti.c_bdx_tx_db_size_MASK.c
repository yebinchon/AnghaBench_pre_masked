
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct txdb {int wptr; int rptr; int size; } ;



__attribute__((used)) static inline int FUNC_0(struct txdb *VAR_0)
{
 int VAR_1 = VAR_0->wptr - VAR_0->rptr;
 if (VAR_1 < 0)
  VAR_1 = VAR_0->size + 1 + VAR_1;

 return VAR_0->size - VAR_1;
}
