
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct softing_platform_data {int generation; } ;
struct resource {int flags; } ;
struct pcmcia_device {struct resource** resource; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct pcmcia_device*,struct resource*,int) ;
 int FUNC_2 (struct resource*) ;

__attribute__((used)) static int FUNC_3(struct pcmcia_device *VAR_7, void *VAR_8)
{
 struct softing_platform_data *VAR_9 = VAR_8;
 struct resource *VAR_10;
 int VAR_11 = 0;

 FUNC_0(!VAR_9);
 VAR_10 = VAR_7->resource[VAR_1];
 if (FUNC_2(VAR_10) < 0x1000)
  return -VAR_0;

 VAR_10->flags |= VAR_5 | VAR_4;
 if (VAR_9->generation < 2) {
  VAR_10->flags |= VAR_6 | VAR_3;
  VAR_11 = 3;
 } else {
  VAR_10->flags |= VAR_2;
 }
 return FUNC_1(VAR_7, VAR_10, VAR_11);
}
