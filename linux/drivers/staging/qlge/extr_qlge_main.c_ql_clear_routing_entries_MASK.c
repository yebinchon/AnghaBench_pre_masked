
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_adapter {int ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ql_adapter*,int ,int ,char*) ;
 int FUNC_1 (struct ql_adapter*,int ) ;
 int FUNC_2 (struct ql_adapter*,int ) ;
 int FUNC_3 (struct ql_adapter*,int,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct ql_adapter *VAR_2)
{
 int VAR_3, VAR_4 = 0;

 VAR_4 = FUNC_1(VAR_2, VAR_0);
 if (VAR_4)
  return VAR_4;

 for (VAR_3 = 0; VAR_3 < 16; VAR_3++) {
  VAR_4 = FUNC_3(VAR_2, VAR_3, 0, 0);
  if (VAR_4) {
   FUNC_0(VAR_2, VAR_1, VAR_2->ndev,
      "Failed to init routing register for CAM packets.\n");
   break;
  }
 }
 FUNC_2(VAR_2, VAR_0);
 return VAR_4;
}
