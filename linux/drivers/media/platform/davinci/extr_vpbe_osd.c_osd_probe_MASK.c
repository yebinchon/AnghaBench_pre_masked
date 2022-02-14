
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct platform_device_id {int driver_data; } ;
struct platform_device {int dev; } ;
struct osd_state {int * dev; int ops; int lock; int osd_size; int osd_base_phys; int osd_base; int vpbe_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,struct resource*) ;
 struct osd_state* FUNC_4 (int *,int,int ) ;
 int VAR_4 ;
 struct platform_device_id* FUNC_5 (struct platform_device*) ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;
 int FUNC_7 (struct platform_device*,struct osd_state*) ;
 int FUNC_8 (struct resource*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_5)
{
 const struct platform_device_id *VAR_6;
 struct osd_state *VAR_7;
 struct resource *VAR_8;

 VAR_6 = FUNC_5(VAR_5);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_4(&VAR_5->dev, sizeof(struct osd_state), VAR_2);
 if (VAR_7 == ((void*)0))
  return -VAR_1;


 VAR_7->dev = &VAR_5->dev;
 VAR_7->vpbe_type = VAR_6->driver_data;

 VAR_8 = FUNC_6(VAR_5, VAR_3, 0);
 VAR_7->osd_base = FUNC_3(&VAR_5->dev, VAR_8);
 if (FUNC_0(VAR_7->osd_base))
  return FUNC_1(VAR_7->osd_base);

 VAR_7->osd_base_phys = VAR_8->start;
 VAR_7->osd_size = FUNC_8(VAR_8);
 FUNC_9(&VAR_7->lock);
 VAR_7->ops = VAR_4;
 FUNC_7(VAR_5, VAR_7);
 FUNC_2(VAR_7->dev, "OSD sub device probe success\n");

 return 0;
}
