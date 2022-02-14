
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct device* parent; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;
struct soc_pcmcia_socket {struct max1600* driver_data; scalar_t__ nr; int gpio_reset; TYPE_3__* stat; TYPE_2__ socket; } ;
struct max1600 {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_6__ {char* name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_2 (struct device*,char*,int ) ;
 int FUNC_3 (struct device*,struct max1600**,int ,int ) ;
 int FUNC_4 (struct soc_pcmcia_socket*) ;

__attribute__((used)) static int FUNC_5(struct soc_pcmcia_socket *VAR_10)
{
 struct device *VAR_11 = VAR_10->socket.dev.parent;
 struct max1600 *VAR_12;
 int VAR_13;

 VAR_10->stat[VAR_6].name = VAR_10->nr ? "bdetect" : "adetect";
 VAR_10->stat[VAR_4].name = VAR_10->nr ? "bbvd1" : "abvd1";
 VAR_10->stat[VAR_5].name = VAR_10->nr ? "bbvd2" : "abvd2";
 VAR_10->stat[VAR_7].name = VAR_10->nr ? "bready" : "aready";
 VAR_10->stat[VAR_8].name = VAR_10->nr ? "bvs1" : "avs1";
 VAR_10->stat[VAR_9].name = VAR_10->nr ? "bvs2" : "avs2";

 VAR_10->gpio_reset = FUNC_2(VAR_11, VAR_10->nr ? "breset" : "areset",
      VAR_0);
 if (FUNC_0(VAR_10->gpio_reset))
  return FUNC_1(VAR_10->gpio_reset);

 VAR_13 = FUNC_3(VAR_11, &VAR_12, VAR_10->nr ? VAR_2 : VAR_1,
      VAR_3);
 if (VAR_13)
  return VAR_13;

 VAR_10->driver_data = VAR_12;

 return FUNC_4(VAR_10);
}
