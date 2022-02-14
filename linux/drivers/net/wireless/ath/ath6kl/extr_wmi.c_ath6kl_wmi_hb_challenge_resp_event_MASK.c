
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wmix_hb_challenge_resp_cmd {int cookie; } ;
struct wmi {int parent_dev; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct wmi *VAR_0, u8 *VAR_1,
            int VAR_2)
{
 struct wmix_hb_challenge_resp_cmd *VAR_3;

 if (VAR_2 < sizeof(struct wmix_hb_challenge_resp_cmd))
  return;

 VAR_3 = (struct wmix_hb_challenge_resp_cmd *) VAR_1;
 FUNC_0(VAR_0->parent_dev,
     FUNC_1(VAR_3->cookie));
}
