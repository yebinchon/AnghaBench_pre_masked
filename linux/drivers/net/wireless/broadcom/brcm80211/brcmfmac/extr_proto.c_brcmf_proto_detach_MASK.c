
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcmf_pub {int * proto; TYPE_1__* bus_if; } ;
struct TYPE_2__ {scalar_t__ proto_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct brcmf_pub*) ;
 int FUNC_2 (struct brcmf_pub*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct brcmf_pub *VAR_3)
{
 FUNC_0(VAR_2, "Enter\n");

 if (VAR_3->proto) {
  if (VAR_3->bus_if->proto_type == VAR_0)
   FUNC_1(VAR_3);
  else if (VAR_3->bus_if->proto_type == VAR_1)
   FUNC_2(VAR_3);
  FUNC_3(VAR_3->proto);
  VAR_3->proto = ((void*)0);
 }
}
