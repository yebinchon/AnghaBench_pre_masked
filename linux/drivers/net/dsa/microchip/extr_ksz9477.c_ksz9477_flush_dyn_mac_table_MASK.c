
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ksz_device {int mib_port_cnt; int * regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ksz_device*,int ,int ,int) ;
 int FUNC_1 (struct ksz_device*,int,int ,int*) ;
 int FUNC_2 (struct ksz_device*,int,int ,int) ;
 int FUNC_3 (int ,int ,int,int) ;

__attribute__((used)) static void FUNC_4(struct ksz_device *VAR_9, int VAR_10)
{
 u8 VAR_11;

 FUNC_3(VAR_9->regmap[0], VAR_2,
      VAR_5 << VAR_6,
      VAR_4 << VAR_6);

 if (VAR_10 < VAR_9->mib_port_cnt) {

  FUNC_1(VAR_9, VAR_10, VAR_1, &VAR_11);
  if (!(VAR_11 & VAR_0))
   FUNC_2(VAR_9, VAR_10, VAR_1,
        VAR_11 | VAR_0);
  FUNC_0(VAR_9, VAR_8, VAR_3, 1);
  FUNC_2(VAR_9, VAR_10, VAR_1, VAR_11);
 } else {

  FUNC_0(VAR_9, VAR_8, VAR_7, 1);
 }
}
