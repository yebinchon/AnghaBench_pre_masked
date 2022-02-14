
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
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ql_adapter*,int ) ;
 int FUNC_1 (struct ql_adapter*,int ,int ,int ) ;
 int FUNC_2 (struct ql_adapter*,int ,int) ;

int FUNC_3(struct ql_adapter *VAR_7, u32 VAR_8, u32 *VAR_9)
{
 int VAR_10 = 0;

 VAR_10 = FUNC_1(VAR_7, VAR_1, VAR_4, 0);
 if (VAR_10)
  goto exit;

 FUNC_2(VAR_7, VAR_1,
     VAR_6 | VAR_5 | (VAR_8 << VAR_2));
 VAR_10 = FUNC_1(VAR_7, VAR_1, VAR_3, 0);
 if (VAR_10)
  goto exit;
 *VAR_9 = FUNC_0(VAR_7, VAR_0);
exit:
 return VAR_10;
}
