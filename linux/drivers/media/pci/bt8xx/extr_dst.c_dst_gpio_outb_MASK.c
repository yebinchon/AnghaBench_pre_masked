
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mask; int highvals; } ;
struct TYPE_3__ {int mask; int enable; } ;
union dst_gpio_packet {TYPE_2__ outp; TYPE_1__ enb; } ;
typedef int u32 ;
struct dst_state {int bt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,union dst_gpio_packet*) ;
 int FUNC_1 (int,char*,int,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct dst_state *VAR_3, u32 VAR_4, u32 VAR_5,
    u32 VAR_6, int VAR_7)
{
 union dst_gpio_packet VAR_8;
 union dst_gpio_packet VAR_9;
 int VAR_10;

 VAR_8.enb.mask = VAR_4;
 VAR_8.enb.enable = VAR_5;

 FUNC_1(2, "mask=[%04x], enbb=[%04x], outhigh=[%04x]\n",
  VAR_4, VAR_5, VAR_6);
 if ((VAR_10 = FUNC_0(VAR_3->bt, VAR_0, &VAR_8)) < 0) {
  FUNC_1(2, "dst_gpio_enb error (err == %i, mask == %02x, enb == %02x)\n",
   VAR_10, VAR_4, VAR_5);
  return -VAR_2;
 }
 FUNC_3(1000);

 if (VAR_5 == 0)
  return 0;
 if (VAR_7)
  FUNC_2(10);
 VAR_9.outp.mask = VAR_5;
 VAR_9.outp.highvals = VAR_6;
 if ((VAR_10 = FUNC_0(VAR_3->bt, VAR_1, &VAR_9)) < 0) {
  FUNC_1(2, "dst_gpio_outb error (err == %i, enbb == %02x, outhigh == %02x)\n",
   VAR_10, VAR_5, VAR_6);
  return -VAR_2;
 }

 return 0;
}
