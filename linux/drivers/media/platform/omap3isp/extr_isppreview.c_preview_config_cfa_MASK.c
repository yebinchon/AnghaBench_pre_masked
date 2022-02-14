
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap3isp_prev_cfa {int const gradthrs_vert; int const gradthrs_horz; int** table; } ;
struct prev_params {struct omap3isp_prev_cfa cfa; } ;
struct TYPE_2__ {size_t cfa_order; } ;
struct isp_prev_device {TYPE_1__ params; } ;
struct isp_device {int dummy; } ;
typedef int __u32 ;


 int VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct isp_device*,int const,int ,int ) ;
 struct isp_device* FUNC_1 (struct isp_prev_device*) ;

__attribute__((used)) static void FUNC_2(struct isp_prev_device *VAR_8,
          const struct prev_params *VAR_9)
{
 static const unsigned int VAR_10[4][4] = {
  { 0, 1, 2, 3 },
  { 1, 0, 3, 2 },
  { 2, 3, 0, 1 },
  { 3, 2, 1, 0 },
 };
 const unsigned int *VAR_11 = VAR_10[VAR_8->params.cfa_order];
 const struct omap3isp_prev_cfa *VAR_12 = &VAR_9->cfa;
 struct isp_device *VAR_13 = FUNC_1(VAR_8);
 unsigned int VAR_14;
 unsigned int VAR_15;

 FUNC_0(VAR_13,
  (VAR_12->gradthrs_vert << VAR_2) |
  (VAR_12->gradthrs_horz << VAR_1),
  VAR_7, VAR_0);

 FUNC_0(VAR_13, VAR_3,
         VAR_7, VAR_4);

 for (VAR_14 = 0; VAR_14 < 4; ++VAR_14) {
  const __u32 *VAR_16 = VAR_12->table[VAR_11[VAR_14]];

  for (VAR_15 = 0; VAR_15 < VAR_6; ++VAR_15)
   FUNC_0(VAR_13, VAR_16[VAR_15], VAR_7,
           VAR_5);
 }
}
