
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct ksz_device {int mib_read; scalar_t__ mib_read_interval; int mib_read_timer; } ;


 struct ksz_device* VAR_0 ;
 struct ksz_device* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_3)
{
 struct ksz_device *VAR_4 = FUNC_0(VAR_4, VAR_3, VAR_2);

 FUNC_1(&VAR_4->mib_read_timer, VAR_1 + VAR_4->mib_read_interval);
 FUNC_2(&VAR_4->mib_read);
}
