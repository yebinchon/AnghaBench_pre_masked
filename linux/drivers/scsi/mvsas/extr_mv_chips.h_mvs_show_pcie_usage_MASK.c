
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mvs_info {int flags; scalar_t__ id; int dev; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,char*,int,char const*) ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static inline void FUNC_2(struct mvs_info *VAR_7)
{
 u16 VAR_8, VAR_9;
 const char *VAR_10[] = {
  "UnKnown",
  "2.5",
  "5.0",
 };
 if (VAR_7->flags & VAR_1 || VAR_7->id > 0)
  return;

 FUNC_1(VAR_7->pdev, VAR_2, &VAR_8);
 VAR_9 = (VAR_8 & VAR_3) >> VAR_4;
 if (VAR_9 >= 3)
  VAR_9 = 0;
 FUNC_0(VAR_0, VAR_7->dev,
  "mvsas: PCI-E x%u, Bandwidth Usage: %s Gbps\n",
        (VAR_8 & VAR_5) >> VAR_6,
        VAR_10[VAR_9]);
}
