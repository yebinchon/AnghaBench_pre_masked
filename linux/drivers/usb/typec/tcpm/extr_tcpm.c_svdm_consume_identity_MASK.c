
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int id_header; int product; void* cert_stat; } ;
struct tcpm_port {int partner; TYPE_1__ partner_ident; int mode_data; } ;
typedef int __le32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 void* FUNC_2 (int const) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (struct tcpm_port*,char*,int ,int ,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct tcpm_port *VAR_3, const __le32 *VAR_4,
      int VAR_5)
{
 u32 VAR_6 = FUNC_2(VAR_4[VAR_1]);
 u32 VAR_7 = FUNC_2(VAR_4[VAR_2]);

 FUNC_3(&VAR_3->mode_data, 0, sizeof(VAR_3->mode_data));

 VAR_3->partner_ident.id_header = VAR_6;
 VAR_3->partner_ident.cert_stat = FUNC_2(VAR_4[VAR_0]);
 VAR_3->partner_ident.product = VAR_7;

 FUNC_5(VAR_3->partner);

 FUNC_4(VAR_3, "Identity: %04x:%04x.%04x",
   FUNC_0(VAR_6),
   FUNC_1(VAR_7), VAR_7 & 0xffff);
}
