
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union dst_gpio_packet {int psize; } ;
struct dst_state {int bt; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,union dst_gpio_packet*) ;

__attribute__((used)) static void FUNC_1(struct dst_state *VAR_1, int VAR_2)
{
 union dst_gpio_packet VAR_3;

 VAR_3.psize = VAR_2;
 FUNC_0(VAR_1->bt, VAR_0, &VAR_3);
}
