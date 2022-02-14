
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_powergate_info {char* name; unsigned int id; } ;
struct tegra_bpmp {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 struct tegra_powergate_info* FUNC_1 (unsigned int,int,int ) ;
 int FUNC_2 (struct tegra_bpmp*) ;
 char* FUNC_3 (struct tegra_bpmp*,unsigned int) ;

__attribute__((used)) static int
FUNC_4(struct tegra_bpmp *VAR_2,
       struct tegra_powergate_info **VAR_3)
{
 struct tegra_powergate_info *VAR_4;
 unsigned int VAR_5, VAR_6, VAR_7 = 0;
 unsigned int VAR_8 = 0;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_2);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_5 = VAR_9;

 FUNC_0(VAR_2->dev, "maximum powergate ID: %u\n", VAR_5);

 VAR_4 = FUNC_1(VAR_5 + 1, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 <= VAR_5; VAR_6++) {
  struct tegra_powergate_info *VAR_10 = &VAR_4[VAR_7];

  VAR_10->name = FUNC_3(VAR_2, VAR_6);
  if (!VAR_10->name || VAR_10->name[0] == '\0') {
   VAR_8++;
   continue;
  }

  VAR_10->id = VAR_6;
  VAR_7++;
 }

 FUNC_0(VAR_2->dev, "holes: %u\n", VAR_8);

 *VAR_3 = VAR_4;

 return VAR_7;
}
