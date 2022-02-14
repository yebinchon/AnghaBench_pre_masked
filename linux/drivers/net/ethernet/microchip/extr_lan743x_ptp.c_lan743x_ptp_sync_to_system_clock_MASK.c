
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {int tv_nsec; int tv_sec; } ;
struct lan743x_adapter {int dummy; } ;


 int FUNC_0 (struct timespec64*) ;
 int FUNC_1 (struct lan743x_adapter*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct lan743x_adapter *VAR_0)
{
 struct timespec64 VAR_1;

 FUNC_0(&VAR_1);

 FUNC_1(VAR_0, VAR_1.tv_sec, VAR_1.tv_nsec, 0);
}
