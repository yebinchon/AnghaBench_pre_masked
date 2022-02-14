
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbs_info {int poll_retry_count; int poll_time; int work; } ;
struct power_supply {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct sbs_info* FUNC_1 (struct power_supply*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct power_supply *VAR_1)
{
 struct sbs_info *VAR_2 = FUNC_1(VAR_1);


 FUNC_0(&VAR_2->work);

 FUNC_2(&VAR_2->work, VAR_0);
 VAR_2->poll_time = VAR_2->poll_retry_count;
}
