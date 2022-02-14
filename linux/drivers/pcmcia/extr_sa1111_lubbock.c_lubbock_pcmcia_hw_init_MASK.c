
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;
struct soc_pcmcia_socket {struct max1600* driver_data; scalar_t__ nr; TYPE_2__ socket; } ;
struct max1600 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct max1600**,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct soc_pcmcia_socket *VAR_3)
{
 struct max1600 *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3->socket.dev.parent, &VAR_4,
      VAR_3->nr ? VAR_1 : VAR_0,
      VAR_2);
 if (VAR_5 == 0)
  VAR_3->driver_data = VAR_4;

 return VAR_5;
}
