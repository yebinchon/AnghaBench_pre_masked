
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsp1_device {int bus_master; } ;
struct sg_table {int nents; int sgl; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vsp1_device* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;

void FUNC_2(struct device *VAR_2, struct sg_table *VAR_3)
{
 struct vsp1_device *VAR_4 = FUNC_0(VAR_2);

 FUNC_1(VAR_4->bus_master, VAR_3->sgl, VAR_3->nents,
      VAR_1, VAR_0);
}
