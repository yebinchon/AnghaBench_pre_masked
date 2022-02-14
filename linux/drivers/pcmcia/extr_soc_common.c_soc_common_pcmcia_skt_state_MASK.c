
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int flags; scalar_t__ Vcc; } ;
struct soc_pcmcia_socket {TYPE_3__ cs_state; TYPE_2__* ops; TYPE_1__* stat; } ;
struct pcmcia_state {int bvd1; int bvd2; int detect; int ready; int vs_3v; int vs_Xv; scalar_t__ wrprot; } ;
struct TYPE_5__ {int (* socket_state ) (struct soc_pcmcia_socket*,struct pcmcia_state*) ;} ;
struct TYPE_4__ {scalar_t__ desc; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct pcmcia_state*,int ,int) ;
 int FUNC_2 (struct soc_pcmcia_socket*,struct pcmcia_state*) ;

__attribute__((used)) static unsigned int FUNC_3(struct soc_pcmcia_socket *VAR_16)
{
 struct pcmcia_state VAR_17;
 unsigned int VAR_18;

 FUNC_1(&VAR_17, 0, sizeof(struct pcmcia_state));


 VAR_17.bvd1 = 1;
 VAR_17.bvd2 = 1;

 if (VAR_16->stat[VAR_2].desc)
  VAR_17.detect = !!FUNC_0(VAR_16->stat[VAR_2].desc);
 if (VAR_16->stat[VAR_3].desc)
  VAR_17.ready = !!FUNC_0(VAR_16->stat[VAR_3].desc);
 if (VAR_16->stat[VAR_0].desc)
  VAR_17.bvd1 = !!FUNC_0(VAR_16->stat[VAR_0].desc);
 if (VAR_16->stat[VAR_1].desc)
  VAR_17.bvd2 = !!FUNC_0(VAR_16->stat[VAR_1].desc);
 if (VAR_16->stat[VAR_4].desc)
  VAR_17.vs_3v = !!FUNC_0(VAR_16->stat[VAR_4].desc);
 if (VAR_16->stat[VAR_5].desc)
  VAR_17.vs_Xv = !!FUNC_0(VAR_16->stat[VAR_5].desc);

 VAR_16->ops->socket_state(VAR_16, &VAR_17);

 VAR_18 = VAR_17.detect ? VAR_9 : 0;
 VAR_18 |= VAR_17.ready ? VAR_12 : 0;
 VAR_18 |= VAR_17.wrprot ? VAR_14 : 0;
 VAR_18 |= VAR_17.vs_3v ? VAR_6 : 0;
 VAR_18 |= VAR_17.vs_Xv ? VAR_15 : 0;





 VAR_18 |= VAR_16->cs_state.Vcc ? VAR_11 : 0;

 if (VAR_16->cs_state.flags & VAR_10)
  VAR_18 |= VAR_17.bvd1 ? 0 : VAR_13;
 else {
  if (VAR_17.bvd1 == 0)
   VAR_18 |= VAR_7;
  else if (VAR_17.bvd2 == 0)
   VAR_18 |= VAR_8;
 }
 return VAR_18;
}
