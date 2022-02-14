
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ql_adapter {int ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ql_adapter*,int ,int ,char*) ;
 int FUNC_1 (struct ql_adapter*,int,int*) ;
 int FUNC_2 (struct ql_adapter*,int ) ;
 int FUNC_3 (struct ql_adapter*,int ) ;

__attribute__((used)) static int FUNC_4(struct ql_adapter *VAR_2, u32 *VAR_3)
{
 int VAR_4;
 u32 VAR_5, VAR_6;

 VAR_4 = FUNC_2(VAR_2, VAR_0);
 if (VAR_4)
  return VAR_4;

 for (VAR_6 = 0; VAR_6 < 16; VAR_6++) {
  VAR_4 = FUNC_1(VAR_2, VAR_6, &VAR_5);
  if (VAR_4) {
   FUNC_0(VAR_2, VAR_1, VAR_2->ndev,
      "Failed read of routing index register\n");
   goto err;
  } else {
   *VAR_3++ = VAR_5;
  }
 }
err:
 FUNC_3(VAR_2, VAR_0);
 return VAR_4;
}
