
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vpd ;
typedef int u8 ;
struct vpd_params {int* port_type; int eth_base; int * xauicfg; int sn; int mem_timing; int mdc; int uclk; int mclk; int cclk; } ;
struct t3_vpd {int id_tag; int na_data; int xaui1cfg_len; int xaui1cfg_data; int xaui0cfg_len; int xaui0cfg_data; int * port1_data; int * port0_data; int sn_data; int mt_len; int mt_data; int mdc_len; int mdc_data; int uclk_len; int uclk_data; int mclk_len; int mclk_data; int cclk_len; int cclk_data; } ;
struct TYPE_2__ {scalar_t__ rev; } ;
struct adapter {TYPE_1__ params; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct adapter*,int,int *) ;
 scalar_t__ FUNC_4 (struct adapter*) ;
 int FUNC_5 (int ,int ,int,int *) ;
 int FUNC_6 (int ,int ,int,int *) ;

__attribute__((used)) static int FUNC_7(struct adapter *VAR_3, struct vpd_params *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 struct t3_vpd VAR_8;





 VAR_7 = FUNC_3(VAR_3, VAR_2, (__le32 *)&VAR_8);
 if (VAR_7)
  return VAR_7;
 VAR_6 = VAR_8.id_tag == 0x82 ? VAR_2 : 0;

 for (VAR_5 = 0; VAR_5 < sizeof(VAR_8); VAR_5 += 4) {
  VAR_7 = FUNC_3(VAR_3, VAR_6 + VAR_5,
          (__le32 *)((u8 *)&VAR_8 + VAR_5));
  if (VAR_7)
   return VAR_7;
 }

 VAR_7 = FUNC_6(VAR_8.cclk_data, VAR_8.cclk_len, 10, &VAR_4->cclk);
 if (VAR_7)
  return VAR_7;
 VAR_7 = FUNC_6(VAR_8.mclk_data, VAR_8.mclk_len, 10, &VAR_4->mclk);
 if (VAR_7)
  return VAR_7;
 VAR_7 = FUNC_6(VAR_8.uclk_data, VAR_8.uclk_len, 10, &VAR_4->uclk);
 if (VAR_7)
  return VAR_7;
 VAR_7 = FUNC_6(VAR_8.mdc_data, VAR_8.mdc_len, 10, &VAR_4->mdc);
 if (VAR_7)
  return VAR_7;
 VAR_7 = FUNC_6(VAR_8.mt_data, VAR_8.mt_len, 10, &VAR_4->mem_timing);
 if (VAR_7)
  return VAR_7;
 FUNC_2(VAR_4->sn, VAR_8.sn_data, VAR_1);


 if (VAR_3->params.rev == 0 && !VAR_8.port0_data[0]) {
  VAR_4->port_type[0] = FUNC_4(VAR_3) ? 1 : 2;
  VAR_4->port_type[1] = FUNC_4(VAR_3) ? 6 : 2;
 } else {
  VAR_4->port_type[0] = FUNC_1(VAR_8.port0_data[0]);
  VAR_4->port_type[1] = FUNC_1(VAR_8.port1_data[0]);
  VAR_7 = FUNC_5(VAR_8.xaui0cfg_data, VAR_8.xaui0cfg_len, 16,
      &VAR_4->xauicfg[0]);
  if (VAR_7)
   return VAR_7;
  VAR_7 = FUNC_5(VAR_8.xaui1cfg_data, VAR_8.xaui1cfg_len, 16,
      &VAR_4->xauicfg[1]);
  if (VAR_7)
   return VAR_7;
 }

 VAR_7 = FUNC_0(VAR_4->eth_base, VAR_8.na_data, 6);
 if (VAR_7 < 0)
  return -VAR_0;
 return 0;
}
