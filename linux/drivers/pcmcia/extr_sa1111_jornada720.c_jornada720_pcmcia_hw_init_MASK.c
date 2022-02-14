
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct device* parent; } ;
struct TYPE_3__ {TYPE_2__ dev; } ;
struct soc_pcmcia_socket {struct jornada720_data* driver_data; scalar_t__ nr; TYPE_1__ socket; } ;
struct jornada720_data {void** gpio; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (struct device*,char*,int ) ;
 struct jornada720_data* FUNC_3 (struct device*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct soc_pcmcia_socket *VAR_5)
{
 struct device *VAR_6 = VAR_5->socket.dev.parent;
 struct jornada720_data *VAR_7;

 VAR_7 = FUNC_3(VAR_6, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->gpio[VAR_4] = FUNC_2(VAR_6, VAR_5->nr ? "s1-power" :
      "s0-power", VAR_2);
 if (FUNC_0(VAR_7->gpio[VAR_4]))
  return FUNC_1(VAR_7->gpio[VAR_4]);

 VAR_7->gpio[VAR_3] = FUNC_2(VAR_6, VAR_5->nr ? "s1-3v" :
            "s0-3v", VAR_2);
 if (FUNC_0(VAR_7->gpio[VAR_3]))
  return FUNC_1(VAR_7->gpio[VAR_3]);

 VAR_5->driver_data = VAR_7;

 return 0;
}
