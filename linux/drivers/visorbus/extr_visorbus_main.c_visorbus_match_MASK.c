
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct visorchannel {int dummy; } ;
struct visor_driver {TYPE_1__* channel_types; } ;
struct visor_device {struct visorchannel* visorchannel; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;
typedef int guid_t ;
struct TYPE_2__ {int version; int min_bytes; scalar_t__ name; int guid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int const*) ;
 int FUNC_1 (int *) ;
 struct visor_device* FUNC_2 (struct device*) ;
 struct visor_driver* FUNC_3 (struct device_driver*) ;
 scalar_t__ FUNC_4 (int ,struct device*,int *,char*,int ,int ,int ) ;
 int * FUNC_5 (struct visorchannel*) ;
 int FUNC_6 (struct visorchannel*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_1, struct device_driver *VAR_2)
{
 const guid_t *VAR_3;
 int VAR_4;
 struct visor_device *VAR_5;
 struct visor_driver *VAR_6;
 struct visorchannel *VAR_7;

 VAR_5 = FUNC_2(VAR_1);
 VAR_3 = FUNC_5(VAR_5->visorchannel);
 VAR_6 = FUNC_3(VAR_2);
 VAR_7 = VAR_5->visorchannel;
 if (!VAR_6->channel_types)
  return 0;
 for (VAR_4 = 0; !FUNC_1(&VAR_6->channel_types[VAR_4].guid); VAR_4++)
  if (FUNC_0(&VAR_6->channel_types[VAR_4].guid, VAR_3) &&
      FUNC_4(FUNC_6(VAR_7),
     VAR_1,
     &VAR_6->channel_types[VAR_4].guid,
     (char *)VAR_6->channel_types[VAR_4].name,
     VAR_6->channel_types[VAR_4].min_bytes,
     VAR_6->channel_types[VAR_4].version,
     VAR_0))
   return VAR_4 + 1;
 return 0;
}
