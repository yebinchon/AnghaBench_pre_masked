
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_adapter {int dummy; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ql_adapter*,int ) ;
 int FUNC_2 (struct ql_adapter*,int ,int ,int ) ;
 int FUNC_3 (struct ql_adapter*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct ql_adapter *VAR_5, int VAR_6, __le32 *VAR_7)
{
 int VAR_8 = 0;

 VAR_8 = FUNC_2(VAR_5,
   VAR_0, VAR_3, VAR_1);
 if (VAR_8)
  goto exit;

 FUNC_3(VAR_5, VAR_0, VAR_2 | VAR_6);

 VAR_8 = FUNC_2(VAR_5,
   VAR_0, VAR_3, VAR_1);
 if (VAR_8)
  goto exit;




 *VAR_7 = FUNC_0(FUNC_1(VAR_5, VAR_4));
exit:
 return VAR_8;
}
