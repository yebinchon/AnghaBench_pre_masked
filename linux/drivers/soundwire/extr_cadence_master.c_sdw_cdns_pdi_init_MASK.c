
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdw_cdns_streams {int num_bd; int num_in; int num_out; int num_pdi; int out; int in; int bd; } ;
struct sdw_cdns_stream_config {int pcm_bd; int pcm_in; int pcm_out; int pdm_bd; int pdm_in; int pdm_out; } ;
struct sdw_cdns {int num_ports; TYPE_1__* ports; int dev; struct sdw_cdns_streams pdm; struct sdw_cdns_streams pcm; } ;
struct TYPE_2__ {int assigned; int num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sdw_cdns*,int *,int,int) ;
 TYPE_1__* FUNC_1 (int ,int,int,int ) ;

int FUNC_2(struct sdw_cdns *VAR_5,
        struct sdw_cdns_stream_config VAR_6)
{
 struct sdw_cdns_streams *VAR_7;
 int VAR_8, VAR_9, VAR_10;

 VAR_5->pcm.num_bd = VAR_6.pcm_bd;
 VAR_5->pcm.num_in = VAR_6.pcm_in;
 VAR_5->pcm.num_out = VAR_6.pcm_out;
 VAR_5->pdm.num_bd = VAR_6.pdm_bd;
 VAR_5->pdm.num_in = VAR_6.pdm_in;
 VAR_5->pdm.num_out = VAR_6.pdm_out;


 VAR_7 = &VAR_5->pcm;


 if (VAR_7->num_bd < VAR_0)
  return -VAR_2;
 VAR_7->num_bd -= VAR_0;
 VAR_8 = VAR_0;

 VAR_10 = FUNC_0(VAR_5, &VAR_7->bd,
    VAR_7->num_bd, VAR_8);
 if (VAR_10)
  return VAR_10;

 VAR_8 += VAR_7->num_bd;

 VAR_10 = FUNC_0(VAR_5, &VAR_7->in,
    VAR_7->num_in, VAR_8);
 if (VAR_10)
  return VAR_10;

 VAR_8 += VAR_7->num_in;

 VAR_10 = FUNC_0(VAR_5, &VAR_7->out,
    VAR_7->num_out, VAR_8);
 if (VAR_10)
  return VAR_10;


 VAR_7->num_pdi = VAR_7->num_bd + VAR_7->num_in + VAR_7->num_out;
 VAR_5->num_ports = VAR_7->num_pdi;


 VAR_7 = &VAR_5->pdm;
 VAR_8 = VAR_1;
 VAR_10 = FUNC_0(VAR_5, &VAR_7->bd,
    VAR_7->num_bd, VAR_8);
 if (VAR_10)
  return VAR_10;

 VAR_8 += VAR_7->num_bd;

 VAR_10 = FUNC_0(VAR_5, &VAR_7->in,
    VAR_7->num_in, VAR_8);
 if (VAR_10)
  return VAR_10;

 VAR_8 += VAR_7->num_in;

 VAR_10 = FUNC_0(VAR_5, &VAR_7->out,
    VAR_7->num_out, VAR_8);
 if (VAR_10)
  return VAR_10;


 VAR_7->num_pdi = VAR_7->num_bd + VAR_7->num_in + VAR_7->num_out;
 VAR_5->num_ports += VAR_7->num_pdi;

 VAR_5->ports = FUNC_1(VAR_5->dev, VAR_5->num_ports,
       sizeof(*VAR_5->ports), VAR_4);
 if (!VAR_5->ports) {
  VAR_10 = -VAR_3;
  return VAR_10;
 }

 for (VAR_9 = 0; VAR_9 < VAR_5->num_ports; VAR_9++) {
  VAR_5->ports[VAR_9].assigned = 0;
  VAR_5->ports[VAR_9].num = VAR_9 + 1;
 }

 return 0;
}
