
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct opp_table {unsigned int supported_hw_count; scalar_t__ supported_hw; int opp_list; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct opp_table* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 struct opp_table* FUNC_2 (struct device*) ;
 int FUNC_3 (struct opp_table*) ;
 scalar_t__ FUNC_4 (int const*,unsigned int,int ) ;
 int FUNC_5 (int *) ;

struct opp_table *FUNC_6(struct device *VAR_2,
   const u32 *VAR_3, unsigned int VAR_4)
{
 struct opp_table *VAR_5;

 VAR_5 = FUNC_2(VAR_2);
 if (!VAR_5)
  return FUNC_0(-VAR_0);


 FUNC_1(!FUNC_5(&VAR_5->opp_list));


 if (VAR_5->supported_hw)
  return VAR_5;

 VAR_5->supported_hw = FUNC_4(VAR_3, VAR_4 * sizeof(*VAR_3),
     VAR_1);
 if (!VAR_5->supported_hw) {
  FUNC_3(VAR_5);
  return FUNC_0(-VAR_0);
 }

 VAR_5->supported_hw_count = VAR_4;

 return VAR_5;
}
