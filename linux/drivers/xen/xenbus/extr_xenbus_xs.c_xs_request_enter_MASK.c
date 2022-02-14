
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ type; } ;
struct xb_req_data {scalar_t__ type; int user_req; TYPE_1__ msg; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static uint32_t FUNC_3(struct xb_req_data *VAR_6)
{
 uint32_t VAR_7;

 VAR_6->type = VAR_6->msg.type;

 FUNC_0(&VAR_3);

 while (!VAR_4 && VAR_5) {
  FUNC_1(&VAR_3);
  FUNC_2(VAR_2, VAR_5 == 0);
  FUNC_0(&VAR_3);
 }

 if (VAR_6->type == VAR_0 && !VAR_6->user_req)
  VAR_4++;
 VAR_4++;
 VAR_7 = VAR_1++;

 FUNC_1(&VAR_3);

 return VAR_7;
}
