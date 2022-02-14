
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {int first_minor; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct gendisk *VAR_1)
{
 int VAR_2 = VAR_1->first_minor / VAR_0;
 return VAR_2;
}
