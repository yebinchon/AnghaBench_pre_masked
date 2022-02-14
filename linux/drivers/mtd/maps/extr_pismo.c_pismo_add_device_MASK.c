
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int flags; scalar_t__ end; int start; } ;
struct TYPE_3__ {int * parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct pismo_mem {scalar_t__ size; int base; } ;
struct pismo_data {struct platform_device** dev; TYPE_2__* client; } ;
typedef int phys_addr_t ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct platform_device*,void*,size_t) ;
 int FUNC_2 (struct platform_device*,struct resource*,int) ;
 struct platform_device* FUNC_3 (char const*,int) ;
 int FUNC_4 (struct platform_device*) ;

__attribute__((used)) static int FUNC_5(struct pismo_data *VAR_3, int VAR_4,
       struct pismo_mem *VAR_5, const char *VAR_6,
       void *VAR_7, size_t VAR_8)
{
 struct platform_device *VAR_9;
 struct resource VAR_10 = { };
 phys_addr_t VAR_11 = VAR_5->base;
 int VAR_12;

 if (VAR_11 == ~0)
  return -VAR_1;

 VAR_10.start = VAR_11;
 VAR_10.end = VAR_11 + VAR_5->size - 1;
 VAR_10.flags = VAR_2;

 VAR_9 = FUNC_3(VAR_6, VAR_4);
 if (!VAR_9)
  return -VAR_0;
 VAR_9->dev.parent = &VAR_3->client->dev;

 do {
  VAR_12 = FUNC_2(VAR_9, &VAR_10, 1);
  if (VAR_12)
   break;

  VAR_12 = FUNC_1(VAR_9, VAR_7, VAR_8);
  if (VAR_12)
   break;

  VAR_12 = FUNC_0(VAR_9);
  if (VAR_12)
   break;

  VAR_3->dev[VAR_4] = VAR_9;
  return 0;
 } while (0);

 FUNC_4(VAR_9);
 return VAR_12;
}
