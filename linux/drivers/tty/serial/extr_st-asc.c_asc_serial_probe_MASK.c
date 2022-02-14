
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct asc_port {int port; } ;


 int VAR_0 ;
 int FUNC_0 (struct asc_port*,struct platform_device*) ;
 struct asc_port* FUNC_1 (struct platform_device*) ;
 int VAR_1 ;
 int FUNC_2 (struct platform_device*,int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_2)
{
 int VAR_3;
 struct asc_port *VAR_4;

 VAR_4 = FUNC_1(VAR_2);
 if (!VAR_4)
  return -VAR_0;

 VAR_3 = FUNC_0(VAR_4, VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_3(&VAR_1, &VAR_4->port);
 if (VAR_3)
  return VAR_3;

 FUNC_2(VAR_2, &VAR_4->port);

 return 0;
}
