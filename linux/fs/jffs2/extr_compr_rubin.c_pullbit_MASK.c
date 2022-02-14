
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pushpull {int* buf; int ofs; } ;



__attribute__((used)) static inline int FUNC_0(struct pushpull *VAR_0)
{
 int VAR_1;

 VAR_1 = (VAR_0->buf[VAR_0->ofs >> 3] >> (7-(VAR_0->ofs & 7))) & 1;

 VAR_0->ofs++;
 return VAR_1;
}
