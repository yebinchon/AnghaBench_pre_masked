
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcmf_p2p_action_frame {scalar_t__ category; scalar_t__ type; int oui; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static bool FUNC_1(void *VAR_4, u32 VAR_5)
{
 struct brcmf_p2p_action_frame *VAR_6;

 if (VAR_4 == ((void*)0))
  return 0;

 VAR_6 = (struct brcmf_p2p_action_frame *)VAR_4;
 if (VAR_5 < sizeof(struct brcmf_p2p_action_frame) - 1)
  return 0;

 if (VAR_6->category == VAR_0 &&
     VAR_6->type == VAR_3 &&
     FUNC_0(VAR_6->oui, VAR_1, VAR_2) == 0)
  return 1;

 return 0;
}
