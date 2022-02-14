
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcpm_port {int dummy; } ;
typedef enum pdo_err { ____Placeholder_pdo_err } pdo_err ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (struct tcpm_port*,int const*,unsigned int) ;
 int FUNC_1 (struct tcpm_port*,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct tcpm_port *VAR_3, const u32 *VAR_4,
         unsigned int VAR_5)
{
 enum pdo_err VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_5);

 if (VAR_6 != VAR_1) {
  FUNC_1(VAR_3, " %s", VAR_2[VAR_6]);
  return -VAR_0;
 }

 return 0;
}
