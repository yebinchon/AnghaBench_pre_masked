
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct ql_adapter {int ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ql_adapter*,int ,int ,char*) ;
 int FUNC_1 (struct ql_adapter*,int ,int,void**) ;
 int FUNC_2 (struct ql_adapter*,int ) ;
 int FUNC_3 (struct ql_adapter*,int ) ;

__attribute__((used)) static int FUNC_4(struct ql_adapter *VAR_4, u32 *VAR_5)
{
 int VAR_6, VAR_7;
 u32 VAR_8[3];

 VAR_7 = FUNC_2(VAR_4, VAR_2);
 if (VAR_7)
  return VAR_7;

 for (VAR_6 = 0; VAR_6 < 16; VAR_6++) {
  VAR_7 = FUNC_1(VAR_4,
     VAR_0, VAR_6, VAR_8);
  if (VAR_7) {
   FUNC_0(VAR_4, VAR_3, VAR_4->ndev,
      "Failed read of mac index register\n");
   goto err;
  }
  *VAR_5++ = VAR_8[0];
  *VAR_5++ = VAR_8[1];
  *VAR_5++ = VAR_8[2];
 }
 for (VAR_6 = 0; VAR_6 < 32; VAR_6++) {
  VAR_7 = FUNC_1(VAR_4,
     VAR_1, VAR_6, VAR_8);
  if (VAR_7) {
   FUNC_0(VAR_4, VAR_3, VAR_4->ndev,
      "Failed read of mac index register\n");
   goto err;
  }
  *VAR_5++ = VAR_8[0];
  *VAR_5++ = VAR_8[1];
 }
err:
 FUNC_3(VAR_4, VAR_2);
 return VAR_7;
}
