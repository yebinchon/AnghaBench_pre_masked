
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esas2r_request {scalar_t__ req_stat; } ;
struct esas2r_adapter {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct esas2r_adapter*,struct esas2r_request*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static bool FUNC_2(struct esas2r_adapter *VAR_2, struct esas2r_request *VAR_3)
{




 VAR_3->req_stat = VAR_1;
 if (FUNC_1(VAR_0, &VAR_2->flags))
                              ;
 else
  FUNC_0(VAR_2, VAR_3);

 return VAR_3->req_stat == VAR_1;
}
