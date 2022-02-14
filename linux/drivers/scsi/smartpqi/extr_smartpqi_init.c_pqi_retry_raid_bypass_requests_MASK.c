
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_io_request {int dummy; } ;
struct pqi_ctrl_info {int dummy; } ;


 int FUNC_0 (struct pqi_ctrl_info*,struct pqi_io_request*,int) ;
 scalar_t__ FUNC_1 (struct pqi_ctrl_info*) ;
 int FUNC_2 (struct pqi_ctrl_info*) ;
 int FUNC_3 (struct pqi_ctrl_info*) ;
 struct pqi_io_request* FUNC_4 (struct pqi_ctrl_info*) ;
 int FUNC_5 (struct pqi_io_request*) ;
 int FUNC_6 (struct pqi_ctrl_info*) ;

__attribute__((used)) static void FUNC_7(struct pqi_ctrl_info *VAR_0)
{
 int VAR_1;
 struct pqi_io_request *VAR_2;

 FUNC_2(VAR_0);

 while (1) {
  if (FUNC_1(VAR_0))
   break;
  VAR_2 = FUNC_4(VAR_0);
  if (!VAR_2)
   break;
  VAR_1 = FUNC_5(VAR_2);
  if (VAR_1) {
   FUNC_0(VAR_0, VAR_2,
    1);
   FUNC_6(VAR_0);
   break;
  }
 }

 FUNC_3(VAR_0);
}
