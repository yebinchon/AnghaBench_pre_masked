
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acm {int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct acm*,int ,int,int *,int ) ;

__attribute__((used)) static inline int FUNC_1(struct acm *VAR_3, int VAR_4)
{
 if (VAR_3->quirks & VAR_1)
  return -VAR_0;

 return FUNC_0(VAR_3, VAR_2,
   VAR_4, ((void*)0), 0);
}
