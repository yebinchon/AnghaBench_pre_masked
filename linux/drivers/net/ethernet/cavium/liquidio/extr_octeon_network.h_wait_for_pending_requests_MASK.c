
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct octeon_device {TYPE_1__* response_list; } ;
struct TYPE_2__ {int pending_req_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline int FUNC_2(struct octeon_device *VAR_3)
{
 int VAR_4, VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_5 = FUNC_0(
      &VAR_3->response_list[VAR_2]
    .pending_req_count);
  if (VAR_5)
   FUNC_1(VAR_0 / 10);
  else
   break;
 }

 if (VAR_5)
  return 1;

 return 0;
}
