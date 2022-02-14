
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idr {int dummy; } ;
typedef int spinlock_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct idr*,void*,int,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static unsigned int FUNC_5(struct idr *VAR_3, void *VAR_4,
       spinlock_t *VAR_5)
{
 int VAR_6;
 unsigned long VAR_7;

 FUNC_1(VAR_0);
 FUNC_3(VAR_5, VAR_7);
 VAR_6 = FUNC_0(VAR_3, VAR_4, 1, VAR_2, VAR_1);
 FUNC_4(VAR_5, VAR_7);
 FUNC_2();

 if (VAR_6 < 0)
  return 0;

 return (unsigned int)(VAR_6);
}
