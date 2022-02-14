
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct adv748x_state {int dummy; } ;
struct adv748x_csi2 {int num_lanes; struct adv748x_state* state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adv748x_state*,int ,int,int,int*) ;
 scalar_t__ FUNC_1 (struct adv748x_csi2*) ;

__attribute__((used)) static int FUNC_2(struct adv748x_csi2 *VAR_2)
{
 struct adv748x_state *VAR_3 = VAR_2->state;
 u8 VAR_4 = FUNC_1(VAR_2) ? VAR_0 : VAR_1;
 int VAR_5 = 0;


 FUNC_0(VAR_3, VAR_4, 0x31, 0x82, &VAR_5);
 FUNC_0(VAR_3, VAR_4, 0x1e, 0x00, &VAR_5);


 FUNC_0(VAR_3, VAR_4, 0x00, 0x80 | VAR_2->num_lanes, &VAR_5);


 FUNC_0(VAR_3, VAR_4, 0xda, 0x01, &VAR_5);


 FUNC_0(VAR_3, VAR_4, 0xc1, 0x3b, &VAR_5);

 return VAR_5;
}
