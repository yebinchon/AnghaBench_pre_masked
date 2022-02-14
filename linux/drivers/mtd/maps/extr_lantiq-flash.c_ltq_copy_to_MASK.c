
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_info {scalar_t__ virt; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_2(struct map_info *VAR_1, unsigned long VAR_2,
 const void *VAR_3, ssize_t VAR_4)
{
 unsigned char *VAR_5 = (unsigned char *)VAR_3;
 unsigned char *VAR_6 = (unsigned char *)VAR_1->virt + VAR_2;
 unsigned long VAR_7;

 FUNC_0(&VAR_0, VAR_7);
 while (VAR_4--)
  *VAR_6++ = *VAR_5++;
 FUNC_1(&VAR_0, VAR_7);
}
