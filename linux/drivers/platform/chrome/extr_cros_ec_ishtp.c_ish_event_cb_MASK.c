
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ishtp_cl_rb {int dummy; } ;
struct ishtp_cl_device {int dummy; } ;
struct ishtp_cl {int dummy; } ;


 struct ishtp_cl_rb* FUNC_0 (struct ishtp_cl*) ;
 struct ishtp_cl* FUNC_1 (struct ishtp_cl_device*) ;
 int FUNC_2 (struct ishtp_cl*,struct ishtp_cl_rb*) ;

__attribute__((used)) static void FUNC_3(struct ishtp_cl_device *VAR_0)
{
 struct ishtp_cl_rb *VAR_1;
 struct ishtp_cl *VAR_2 = FUNC_1(VAR_0);

 while ((VAR_1 = FUNC_0(VAR_2)) != ((void*)0)) {

  FUNC_2(VAR_2, VAR_1);
 }
}
