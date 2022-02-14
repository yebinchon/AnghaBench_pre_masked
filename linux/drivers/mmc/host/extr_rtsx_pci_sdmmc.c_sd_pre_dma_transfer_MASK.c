
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_pcr {int dummy; } ;
struct realtek_pci_sdmmc {scalar_t__ cookie; int cookie_sg_count; int sg_count; struct rtsx_pcr* pcr; } ;
struct mmc_data {int flags; scalar_t__ host_cookie; int sg_len; int sg; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct rtsx_pcr*,int ,int ,int) ;
 int FUNC_2 (struct realtek_pci_sdmmc*) ;

__attribute__((used)) static int FUNC_3(struct realtek_pci_sdmmc *VAR_1,
  struct mmc_data *VAR_2, bool VAR_3)
{
 struct rtsx_pcr *VAR_4 = VAR_1->pcr;
 int VAR_5 = VAR_2->flags & VAR_0;
 int VAR_6 = 0;
 int VAR_7 = 0;

 if (!VAR_3 && VAR_2->host_cookie && VAR_2->host_cookie != VAR_1->cookie) {
  FUNC_0(FUNC_2(VAR_1),
   "error: data->host_cookie = %d, host->cookie = %d\n",
   VAR_2->host_cookie, VAR_1->cookie);
  VAR_2->host_cookie = 0;
 }

 if (VAR_3 || VAR_2->host_cookie != VAR_1->cookie) {
  VAR_6 = FUNC_1(VAR_4, VAR_2->sg, VAR_2->sg_len, VAR_5);
 } else {
  VAR_6 = VAR_1->cookie_sg_count;
  VAR_7 = 1;
 }

 if (VAR_3) {
  VAR_1->cookie_sg_count = VAR_6;
  if (++VAR_1->cookie < 0)
   VAR_1->cookie = 1;
  VAR_2->host_cookie = VAR_1->cookie;
 } else {
  VAR_1->sg_count = VAR_6;
 }

 return VAR_7;
}
