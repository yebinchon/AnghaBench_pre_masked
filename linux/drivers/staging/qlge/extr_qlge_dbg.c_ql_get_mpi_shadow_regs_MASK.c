
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ql_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ql_adapter*,int ,int*) ;
 int FUNC_1 (struct ql_adapter*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct ql_adapter *VAR_5, u32 *VAR_6)
{
 u32 VAR_7;
 int VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++, VAR_6++) {
  VAR_8 = FUNC_1(VAR_5, VAR_1,
    (VAR_3 | VAR_7 << VAR_4));
  if (VAR_8)
   goto end;
  VAR_8 = FUNC_0(VAR_5, VAR_2, VAR_6);
  if (VAR_8)
   goto end;
 }
end:
 return VAR_8;
}
