
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int nfc_credits; } ;
struct tb_port {TYPE_2__ config; TYPE_1__* sw; } ;
struct TYPE_3__ {scalar_t__ is_unplugged; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tb_port*,char*,int,int) ;
 int FUNC_1 (struct tb_port*,int*,int ,int,int) ;

int FUNC_2(struct tb_port *VAR_2, int VAR_3)
{
 u32 VAR_4;

 if (VAR_3 == 0 || VAR_2->sw->is_unplugged)
  return 0;

 VAR_4 = VAR_2->config.nfc_credits & VAR_1;
 VAR_4 += VAR_3;

 FUNC_0(VAR_2, "adding %d NFC credits to %lu",
      VAR_3, VAR_2->config.nfc_credits & VAR_1);

 VAR_2->config.nfc_credits &= ~VAR_1;
 VAR_2->config.nfc_credits |= VAR_4;

 return FUNC_1(VAR_2, &VAR_2->config.nfc_credits,
        VAR_0, 4, 1);
}
