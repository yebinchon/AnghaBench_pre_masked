
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct idr {int dummy; } ;
typedef int spinlock_t ;


 void* FUNC_0 (struct idr*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void *FUNC_3(struct idr *VAR_0,
     spinlock_t *VAR_1, u32 VAR_2)
{
 unsigned long VAR_3;
 void *VAR_4;

 FUNC_1(VAR_1, VAR_3);
 VAR_4 = FUNC_0(VAR_0, VAR_2);
 FUNC_2(VAR_1, VAR_3);
 return VAR_4;
}
