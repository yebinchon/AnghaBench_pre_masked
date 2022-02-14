
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcs_cmd {int dummy; } ;
struct rpmh_request {int needs_free; } ;
struct device {int dummy; } ;
typedef enum rpmh_state { ____Placeholder_rpmh_state } rpmh_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rpmh_request*,int,struct tcs_cmd const*,int ) ;
 int FUNC_1 (struct device const*,int,struct rpmh_request*) ;
 int FUNC_2 (struct rpmh_request*) ;
 struct rpmh_request* FUNC_3 (int,int ) ;

int FUNC_4(const struct device *VAR_2, enum rpmh_state VAR_3,
       const struct tcs_cmd *VAR_4, u32 VAR_5)
{
 struct rpmh_request *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;
 VAR_6->needs_free = 1;

 VAR_7 = FUNC_0(VAR_6, VAR_3, VAR_4, VAR_5);
 if (VAR_7) {
  FUNC_2(VAR_6);
  return VAR_7;
 }

 return FUNC_1(VAR_2, VAR_3, VAR_6);
}
