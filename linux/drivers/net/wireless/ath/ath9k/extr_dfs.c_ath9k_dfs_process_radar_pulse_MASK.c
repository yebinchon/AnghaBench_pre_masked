
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pulse_event {int dummy; } ;
struct dfs_pattern_detector {int (* add_pulse ) (struct dfs_pattern_detector*,struct pulse_event*,int *) ;} ;
struct ath_softc {int hw; struct dfs_pattern_detector* dfs_detector; } ;


 int FUNC_0 (struct ath_softc*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct dfs_pattern_detector*,struct pulse_event*,int *) ;

__attribute__((used)) static void
FUNC_3(struct ath_softc *VAR_2, struct pulse_event *VAR_3)
{
 struct dfs_pattern_detector *VAR_4 = VAR_2->dfs_detector;
 FUNC_0(VAR_2, VAR_0);
 if (VAR_4 == ((void*)0))
  return;
 if (!VAR_4->add_pulse(VAR_4, VAR_3, ((void*)0)))
  return;
 FUNC_0(VAR_2, VAR_1);
 FUNC_1(VAR_2->hw);
}
