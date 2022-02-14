
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct sdw_cdns {int num_ports; int pdm; int pcm; int dev; struct sdw_cdns_port* ports; } ;
struct sdw_intel {struct sdw_cdns cdns; } ;
struct sdw_cdns_port {int assigned; int pdi; void* ch; void* direction; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct sdw_intel*,int ) ;
 int FUNC_2 (struct sdw_intel*,int ) ;
 int FUNC_3 (struct sdw_cdns*,int *,struct sdw_cdns_port*,void*,void*) ;
 int FUNC_4 (struct sdw_cdns*,struct sdw_cdns_port*,void*,void*,int ) ;

__attribute__((used)) static struct sdw_cdns_port *FUNC_5(struct sdw_intel *VAR_0,
           u32 VAR_1, u32 VAR_2, bool VAR_3)
{
 struct sdw_cdns *VAR_4 = &VAR_0->cdns;
 struct sdw_cdns_port *VAR_5 = ((void*)0);
 int VAR_6, VAR_7 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_4->num_ports; VAR_6++) {
  if (VAR_4->ports[VAR_6].assigned)
   continue;

  VAR_5 = &VAR_4->ports[VAR_6];
  VAR_5->assigned = 1;
  VAR_5->direction = VAR_2;
  VAR_5->ch = VAR_1;
  break;
 }

 if (!VAR_5) {
  FUNC_0(VAR_4->dev, "Unable to find a free port\n");
  return ((void*)0);
 }

 if (VAR_3) {
  VAR_7 = FUNC_3(VAR_4, &VAR_4->pcm, VAR_5, VAR_1, VAR_2);
  if (VAR_7)
   goto out;

  FUNC_2(VAR_0, VAR_5->pdi);
  FUNC_4(VAR_4, VAR_5, VAR_1, VAR_2, VAR_5->pdi);

  FUNC_1(VAR_0, VAR_5->pdi);

 } else {
  VAR_7 = FUNC_3(VAR_4, &VAR_4->pdm, VAR_5, VAR_1, VAR_2);
 }

out:
 if (VAR_7) {
  VAR_5->assigned = 0;
  VAR_5 = ((void*)0);
 }

 return VAR_5;
}
