
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct most_interface {int dummy; } ;
struct mbo {int buffer_length; int* virt_address; } ;
struct dim2_hdm {void (* on_netinfo ) (struct most_interface*,unsigned char,unsigned char*) ;scalar_t__ atx_idx; int most_iface; } ;


 struct dim2_hdm* FUNC_0 (struct most_interface*) ;
 struct mbo* FUNC_1 (int *,scalar_t__,int *) ;
 int FUNC_2 (struct mbo*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(struct most_interface *VAR_0, int VAR_1,
       void (*VAR_2)(struct most_interface *,
            unsigned char, unsigned char *))
{
 struct dim2_hdm *VAR_3 = FUNC_0(VAR_0);
 struct mbo *VAR_4;
 u8 *VAR_5;

 VAR_3->on_netinfo = VAR_2;
 if (!VAR_2)
  return;

 if (VAR_3->atx_idx < 0) {
  FUNC_3("Async Tx Not initialized\n");
  return;
 }

 VAR_4 = FUNC_1(&VAR_3->most_iface, VAR_3->atx_idx, ((void*)0));
 if (!VAR_4)
  return;

 VAR_4->buffer_length = 5;

 VAR_5 = VAR_4->virt_address;

 VAR_5[0] = 0x00;
 VAR_5[1] = 0x03;
 VAR_5[2] = 0x02;
 VAR_5[3] = 0x08;
 VAR_5[4] = 0x40;

 FUNC_2(VAR_4);
}
