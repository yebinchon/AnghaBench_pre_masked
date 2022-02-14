
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mv88e6xxx_chip {int evcap_config; int trig_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct mv88e6xxx_chip*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct mv88e6xxx_chip *VAR_9, int VAR_10,
         int VAR_11)
{
 u16 VAR_12;
 u16 VAR_13;
 int VAR_14;

 VAR_9->evcap_config = VAR_3 |
        VAR_2;
 if (!VAR_11)
  VAR_9->evcap_config |= VAR_4;

 VAR_12 = (VAR_9->evcap_config | VAR_9->trig_config);
 VAR_14 = FUNC_0(VAR_9, VAR_1, VAR_12);
 if (VAR_14)
  return VAR_14;

 if (VAR_10 == VAR_8) {
  VAR_13 = VAR_6;
 } else if (VAR_10 == VAR_7) {

  VAR_13 = 0;
 } else {
  return -VAR_0;
 }


 VAR_14 = FUNC_0(VAR_9, VAR_5,
      VAR_13);

 return VAR_14;
}
