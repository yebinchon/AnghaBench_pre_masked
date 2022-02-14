
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedi_endpoint {scalar_t__ state; int ofld_wait; } ;
struct iscsi_endpoint {struct qedi_endpoint* dd_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct qedi_endpoint*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct iscsi_endpoint *VAR_5, int VAR_6)
{
 struct qedi_endpoint *VAR_7;
 int VAR_8 = 0;

 if (VAR_4)
  return 1;

 VAR_7 = VAR_5->dd_data;
 if (VAR_7->state == VAR_0 ||
     VAR_7->state == VAR_3 ||
     VAR_7->state == VAR_2)
  return -1;

 if (VAR_7->state == VAR_1)
  VAR_8 = 1;

 VAR_8 = FUNC_2(VAR_7->ofld_wait,
            FUNC_0(VAR_7),
            FUNC_1(VAR_6));

 if (VAR_7->state == VAR_2)
  VAR_8 = -1;

 if (VAR_8 > 0)
  return 1;
 else if (!VAR_8)
  return 0;
 else
  return VAR_8;
}
