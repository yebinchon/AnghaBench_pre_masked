
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_pcmcia_socket {int nr; TYPE_1__* stat; } ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct soc_pcmcia_socket*) ;

__attribute__((used)) static int FUNC_4(struct soc_pcmcia_socket *VAR_7)
{
 int VAR_8;

 VAR_7->stat[VAR_5].name = VAR_7->nr ? "pcmcia1-detect" : "pcmcia0-detect";
 VAR_7->stat[VAR_6].name = VAR_7->nr ? "pcmcia1-ready" : "pcmcia0-ready";

 VAR_8 = FUNC_3(VAR_7);
 if (VAR_8)
  return VAR_8;

 switch (VAR_7->nr) {
 case 0:
  VAR_8 = FUNC_2(VAR_1, "OPT NVRAM ON");
  if (VAR_8)
   goto err01;
  VAR_8 = FUNC_0(VAR_1, 0);
  if (VAR_8)
   goto err03;
  VAR_8 = FUNC_2(VAR_2, "OPT ON");
  if (VAR_8)
   goto err03;
  VAR_8 = FUNC_0(VAR_2, 0);
  if (VAR_8)
   goto err04;
  VAR_8 = FUNC_2(VAR_3, "OPT RESET");
  if (VAR_8)
   goto err04;
  VAR_8 = FUNC_0(VAR_3, 0);
  if (VAR_8)
   goto err05;
  VAR_8 = FUNC_2(VAR_0, "PCMCIA CARD RESET");
  if (VAR_8)
   goto err05;
  VAR_8 = FUNC_0(VAR_0, 0);
  if (VAR_8)
   goto err06;
  break;
 case 1:
  break;
 }
 return 0;

err06: FUNC_1(VAR_0);
err05: FUNC_1(VAR_3);
err04: FUNC_1(VAR_2);
err03: FUNC_1(VAR_1);
err01: FUNC_1(VAR_4);
 return VAR_8;
}
