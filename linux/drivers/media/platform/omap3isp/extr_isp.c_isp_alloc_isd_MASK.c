
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp_bus_cfg {int dummy; } ;
struct isp_async_subdev {struct isp_bus_cfg bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct isp_async_subdev* FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct isp_async_subdev **VAR_2,
    struct isp_bus_cfg **VAR_3)
{
 struct isp_async_subdev *VAR_4;

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 *VAR_2 = VAR_4;
 *VAR_3 = &VAR_4->bus;

 return 0;
}
