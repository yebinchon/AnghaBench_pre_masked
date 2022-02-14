
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct brcmf_p2p_disc_st_le {void* dwell; void* chspec; int state; } ;
struct brcmf_if {int dummy; } ;
typedef int s32 ;
typedef int discover_state ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct brcmf_if*,char*,struct brcmf_p2p_disc_st_le*,int) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static s32 FUNC_3(struct brcmf_if *VAR_1, u8 VAR_2,
     u16 VAR_3, u16 VAR_4)
{
 struct brcmf_p2p_disc_st_le VAR_5;
 s32 VAR_6 = 0;
 FUNC_0(VAR_0, "enter\n");

 VAR_5.state = VAR_2;
 VAR_5.chspec = FUNC_2(VAR_3);
 VAR_5.dwell = FUNC_2(VAR_4);
 VAR_6 = FUNC_1(VAR_1, "p2p_state", &VAR_5,
     sizeof(VAR_5));
 return VAR_6;
}
