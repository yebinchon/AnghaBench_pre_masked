
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcmf_pub {TYPE_1__* proto; } ;
typedef enum proto_addr_mode { ____Placeholder_proto_addr_mode } proto_addr_mode ;
struct TYPE_2__ {int (* configure_addr_mode ) (struct brcmf_pub*,int,int) ;} ;


 int FUNC_0 (struct brcmf_pub*,int,int) ;

__attribute__((used)) static inline void
FUNC_1(struct brcmf_pub *VAR_0, int VAR_1,
    enum proto_addr_mode VAR_2)
{
 VAR_0->proto->configure_addr_mode(VAR_0, VAR_1, VAR_2);
}
