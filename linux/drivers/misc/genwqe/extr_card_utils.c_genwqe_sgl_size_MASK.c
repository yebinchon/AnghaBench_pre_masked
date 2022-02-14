
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_entry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(int VAR_1)
{
 int VAR_2, VAR_3 = VAR_1 / 7;

 VAR_2 = sizeof(struct sg_entry) * (VAR_1+VAR_3 + 1);
 return FUNC_0(VAR_2, VAR_0);
}
