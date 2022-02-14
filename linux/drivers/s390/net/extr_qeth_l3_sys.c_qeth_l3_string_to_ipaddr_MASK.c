
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef enum qeth_prot_versions { ____Placeholder_qeth_prot_versions } qeth_prot_versions ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,int,int *,int,char const**) ;
 int FUNC_1 (char const*,int,int *,int,char const**) ;

__attribute__((used)) static int FUNC_2(const char *VAR_3,
        enum qeth_prot_versions VAR_4, u8 *VAR_5)
{
 const char *VAR_6;

 if ((VAR_4 == VAR_1 && !FUNC_0(VAR_3, -1, VAR_5, -1, &VAR_6)) ||
     (VAR_4 == VAR_2 && !FUNC_1(VAR_3, -1, VAR_5, -1, &VAR_6)))
  return -VAR_0;
 return 0;
}
