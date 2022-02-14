
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct bnad {int cfg_flags; int num_rx; int num_tx; int num_rxp_per_rx; int num_txq_per_tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static void
FUNC_2(struct bnad *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0((uint)FUNC_1(),
   (uint)(VAR_1 * VAR_2));

 if (!(VAR_4->cfg_flags & VAR_0))
  VAR_5 = 1;

 VAR_4->num_rx = 1;
 VAR_4->num_tx = 1;
 VAR_4->num_rxp_per_rx = VAR_5;
 VAR_4->num_txq_per_tx = VAR_3;
}
