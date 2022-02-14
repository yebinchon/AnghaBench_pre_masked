
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idr {int dummy; } ;
typedef int spinlock_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct idr*,void*,int ,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct idr *VAR_4, spinlock_t *VAR_5,
        void *VAR_6)
{
 unsigned long VAR_7;
 int VAR_8;






 FUNC_0((VAR_2 - 1) & 0xFF000000);

 FUNC_2(VAR_1);
 FUNC_4(VAR_5, VAR_7);
 VAR_8 = FUNC_1(VAR_4, VAR_6, VAR_3, VAR_2, VAR_0);
 FUNC_5(VAR_5, VAR_7);
 FUNC_3();

 return VAR_8;
}
