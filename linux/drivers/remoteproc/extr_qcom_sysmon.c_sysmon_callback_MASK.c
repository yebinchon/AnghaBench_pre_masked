
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rpmsg_device {int dummy; } ;
struct qcom_sysmon {int ssr_ack; int comp; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (void*,char const*,int const) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(struct rpmsg_device *VAR_1, void *VAR_2, int VAR_3,
      void *VAR_4, u32 VAR_5)
{
 struct qcom_sysmon *VAR_6 = VAR_4;
 const char *VAR_7 = "ssr:ack";
 const int VAR_8 = FUNC_2(VAR_7) + 1;

 if (!VAR_6)
  return -VAR_0;

 if (VAR_3 >= VAR_8 && !FUNC_1(VAR_2, VAR_7, VAR_8))
  VAR_6->ssr_ack = 1;

 FUNC_0(&VAR_6->comp);

 return 0;
}
