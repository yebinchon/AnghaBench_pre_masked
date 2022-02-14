
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath10k_ce_pipe {int attr_flags; scalar_t__ recv_cb; scalar_t__ send_cb; struct ath10k* ar; int ctrl_addr; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,int ) ;
 int FUNC_1 (struct ath10k*,int ) ;
 int FUNC_2 (struct ath10k*,int ) ;

__attribute__((used)) static void FUNC_3(struct ath10k_ce_pipe *VAR_1)
{
 u32 VAR_2 = VAR_1->ctrl_addr;
 struct ath10k *VAR_3 = VAR_1->ar;
 bool VAR_4 = VAR_1->attr_flags & VAR_0;

 if ((!VAR_4) &&
     (VAR_1->send_cb || VAR_1->recv_cb))
  FUNC_0(VAR_3, VAR_2);
 else
  FUNC_1(VAR_3, VAR_2);

 FUNC_2(VAR_3, VAR_2);
}
