
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_hbm_cl_cmd {int dummy; } ;
struct mei_device {int dummy; } ;
struct mei_cl {int dummy; } ;


 int FUNC_0 (struct mei_cl*) ;
 struct mei_cl* FUNC_1 (struct mei_device*,struct mei_hbm_cl_cmd*) ;

__attribute__((used)) static void FUNC_2(struct mei_device *VAR_0,
         struct mei_hbm_cl_cmd *VAR_1)
{
 struct mei_cl *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2)
  FUNC_0(VAR_2);
}
