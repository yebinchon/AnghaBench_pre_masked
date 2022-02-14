
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_lprops {int dirty; int free; } ;



__attribute__((used)) static int FUNC_0(const struct ubifs_lprops **VAR_0,
    const struct ubifs_lprops **VAR_1)
{
 const struct ubifs_lprops *VAR_2 = *VAR_0;
 const struct ubifs_lprops *VAR_3 = *VAR_1;

 return VAR_2->dirty + VAR_2->free - VAR_3->dirty - VAR_3->free;
}
