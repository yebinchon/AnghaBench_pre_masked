
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct generic_pm_domain {int name; } ;
struct rockchip_pmu {int dev; struct rockchip_domain_info* info; int regmap; struct rockchip_pmu* pmu; struct generic_pm_domain genpd; } ;
struct rockchip_pm_domain {int dev; struct rockchip_domain_info* info; int regmap; struct rockchip_pm_domain* pmu; struct generic_pm_domain genpd; } ;
struct rockchip_domain_info {int req_mask; int req_w_mask; unsigned int ack_mask; int req_offset; } ;


 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct rockchip_pmu*,int,int,int ,int) ;
 int FUNC_3 (int ,int ,int,unsigned int) ;
 int FUNC_4 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct rockchip_pm_domain *VAR_3,
      bool VAR_4)
{
 const struct rockchip_domain_info *VAR_5 = VAR_3->info;
 struct generic_pm_domain *VAR_6 = &VAR_3->genpd;
 struct rockchip_pmu *VAR_7 = VAR_3->pmu;
 unsigned int VAR_8;
 unsigned int VAR_9;
 bool VAR_10;
 int VAR_11;

 if (VAR_5->req_mask == 0)
  return 0;
 else if (VAR_5->req_w_mask)
  FUNC_4(VAR_7->regmap, VAR_7->info->req_offset,
        VAR_4 ? (VAR_5->req_mask | VAR_5->req_w_mask) :
        VAR_5->req_w_mask);
 else
  FUNC_3(VAR_7->regmap, VAR_7->info->req_offset,
       VAR_5->req_mask, VAR_4 ? -1U : 0);

 FUNC_1(VAR_2);


 VAR_8 = VAR_4 ? VAR_5->ack_mask : 0;
 VAR_11 = FUNC_2(VAR_1, VAR_7, VAR_9,
     (VAR_9 & VAR_5->ack_mask) == VAR_8,
     0, 10000);
 if (VAR_11) {
  FUNC_0(VAR_7->dev,
   "failed to get ack on domain '%s', val=0x%x\n",
   VAR_6->name, VAR_9);
  return VAR_11;
 }

 VAR_11 = FUNC_2(VAR_0, VAR_3,
     VAR_10, VAR_10 == VAR_4, 0, 10000);
 if (VAR_11) {
  FUNC_0(VAR_7->dev,
   "failed to set idle on domain '%s', val=%d\n",
   VAR_6->name, VAR_10);
  return VAR_11;
 }

 return 0;
}
