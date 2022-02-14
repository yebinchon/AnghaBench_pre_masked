
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int sd; } ;
struct adv748x_state {TYPE_1__ hdmi; } ;
struct adv748x_csi2 {int num_lanes; int * src; struct adv748x_state* state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adv748x_state*,int ,int,int,int*) ;
 scalar_t__ FUNC_1 (struct adv748x_csi2*) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct adv748x_csi2 *VAR_2)
{
 struct adv748x_state *VAR_3 = VAR_2->state;
 u8 VAR_4 = FUNC_1(VAR_2) ? VAR_0 : VAR_1;
 int VAR_5 = 0;


 FUNC_0(VAR_3, VAR_4, 0x00, 0x80 | VAR_2->num_lanes, &VAR_5);


 FUNC_0(VAR_3, VAR_4, 0x00, 0xa0 | VAR_2->num_lanes, &VAR_5);


 if (VAR_2->src == &VAR_3->hdmi.sd) {
  FUNC_0(VAR_3, VAR_4, 0xdb, 0x10, &VAR_5);
  FUNC_0(VAR_3, VAR_4, 0xd6, 0x07, &VAR_5);
 } else {
  FUNC_0(VAR_3, VAR_4, 0xd2, 0x40, &VAR_5);
 }

 FUNC_0(VAR_3, VAR_4, 0xc4, 0x0a, &VAR_5);
 FUNC_0(VAR_3, VAR_4, 0x71, 0x33, &VAR_5);
 FUNC_0(VAR_3, VAR_4, 0x72, 0x11, &VAR_5);


 FUNC_0(VAR_3, VAR_4, 0xf0, 0x00, &VAR_5);


 FUNC_0(VAR_3, VAR_4, 0x31, 0x82, &VAR_5);
 FUNC_0(VAR_3, VAR_4, 0x1e, 0x40, &VAR_5);


 FUNC_0(VAR_3, VAR_4, 0xda, 0x01, &VAR_5);
 FUNC_2(2000, 2500);


 FUNC_0(VAR_3, VAR_4, 0x00, 0x20 | VAR_2->num_lanes, &VAR_5);
 FUNC_2(1000, 1500);


 FUNC_0(VAR_3, VAR_4, 0xc1, 0x2b, &VAR_5);
 FUNC_2(1000, 1500);
 FUNC_0(VAR_3, VAR_4, 0x31, 0x80, &VAR_5);

 return VAR_5;
}
