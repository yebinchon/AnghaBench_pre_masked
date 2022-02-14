
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct cpsw_priv {TYPE_3__* ndev; struct cpsw_common* cpsw; } ;
struct TYPE_5__ {int default_vlan; int slaves; } ;
struct cpsw_common {scalar_t__ version; int ale; scalar_t__ slaves; TYPE_2__ data; TYPE_1__* host_port_regs; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_4__ {int port_vlan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int const,int,int,int,int) ;
 int FUNC_1 (scalar_t__,int const,int ) ;
 int FUNC_2 (int const,int *) ;

__attribute__((used)) static inline void FUNC_3(struct cpsw_priv *VAR_7)
{
 struct cpsw_common *VAR_8 = VAR_7->cpsw;
 const int VAR_9 = VAR_8->data.default_vlan;
 u32 VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_10 = (VAR_8->version == VAR_5) ? VAR_3 :
        VAR_4;

 FUNC_2(VAR_9, &VAR_8->host_port_regs->port_vlan);

 for (VAR_11 = 0; VAR_11 < VAR_8->data.slaves; VAR_11++)
  FUNC_1(VAR_8->slaves + VAR_11, VAR_9, VAR_10);

 if (VAR_7->ndev->flags & VAR_6)
  VAR_12 = VAR_0;
 else
  VAR_12 = VAR_1 | VAR_2;

 FUNC_0(VAR_8->ale, VAR_9, VAR_0,
     VAR_0, VAR_0,
     VAR_12);
}
