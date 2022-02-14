
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct slic_stats {int dummy; } ;
struct slic_device {struct slic_stats stats; } ;


 int FUNC_0 (struct slic_stats*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_1(struct slic_device *VAR_5, u32 VAR_6)
{
 struct slic_stats *VAR_7 = &VAR_5->stats;

 if (VAR_6 & VAR_0)
  FUNC_0(VAR_7, VAR_3);
 if (VAR_6 & VAR_1)
  FUNC_0(VAR_7, VAR_4);
 if (!(VAR_6 & (VAR_0 | VAR_1)))
  FUNC_0(VAR_7, VAR_2);
}
