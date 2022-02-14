
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct brcms_antselcfg {scalar_t__ num_antcfg; void** ant_config; } ;
struct antsel_info {scalar_t__ antsel_type; scalar_t__ antsel_avail; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;

__attribute__((used)) static void
FUNC_0(struct antsel_info *VAR_12, struct brcms_antselcfg *VAR_13,
      bool VAR_14)
{
 if (VAR_12->antsel_type == VAR_0) {
  u8 VAR_15 = VAR_4 |
      ((VAR_12->antsel_avail && VAR_14) ? VAR_2 : 0);
  VAR_13->ant_config[VAR_10] = VAR_15;
  VAR_13->ant_config[VAR_11] = VAR_15;
  VAR_13->ant_config[VAR_8] = VAR_15;
  VAR_13->ant_config[VAR_9] = VAR_15;
  VAR_13->num_antcfg = VAR_6;

 } else if (VAR_12->antsel_type == VAR_1) {

  VAR_13->ant_config[VAR_10] = VAR_5;
  VAR_13->ant_config[VAR_11] = VAR_5;
  VAR_13->ant_config[VAR_8] = VAR_5;
  VAR_13->ant_config[VAR_9] = VAR_5;
  VAR_13->num_antcfg = VAR_7;

 } else {

  VAR_13->ant_config[VAR_10] = VAR_3;
  VAR_13->ant_config[VAR_11] = VAR_3;
  VAR_13->ant_config[VAR_8] = VAR_3;
  VAR_13->ant_config[VAR_9] = VAR_3;
  VAR_13->num_antcfg = 0;
 }
}
