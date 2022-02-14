
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct sclp_req {int callback_data; int (* callback ) (struct sclp_req*,int ) ;} ;


 unsigned long FUNC_0 () ;
 struct sclp_req* FUNC_1 () ;
 int FUNC_2 (int *,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct sclp_req*,int ) ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_2)
{
 unsigned long VAR_3, VAR_4;
 struct sclp_req *VAR_5;

 do {
  VAR_5 = FUNC_1();
  if (VAR_5 && VAR_5->callback)
   VAR_5->callback(VAR_5, VAR_5->callback_data);
 } while (VAR_5);

 FUNC_3(&VAR_0, VAR_3);
 VAR_4 = FUNC_0();
 if (VAR_4)
  FUNC_2(&VAR_1, VAR_4);
 FUNC_4(&VAR_0, VAR_3);
}
