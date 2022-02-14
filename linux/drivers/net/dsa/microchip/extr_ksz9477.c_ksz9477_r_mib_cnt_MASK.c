
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
typedef unsigned int u32 ;
typedef unsigned int u16 ;
struct ksz_port {scalar_t__ freeze; } ;
struct ksz_device {int dev; int * regmap; struct ksz_port* ports; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct ksz_device*,int,int ,unsigned int*) ;
 int FUNC_3 (struct ksz_device*,int,int ,unsigned int) ;
 int FUNC_4 (int ,int ,unsigned int,int,int,int) ;

__attribute__((used)) static void FUNC_5(struct ksz_device *VAR_5, int VAR_6, u16 VAR_7,
         u64 *VAR_8)
{
 struct ksz_port *VAR_9 = &VAR_5->ports[VAR_6];
 unsigned int VAR_10;
 u32 VAR_11;
 int VAR_12;


 VAR_11 = VAR_9->freeze ? VAR_0 : 0;
 VAR_11 |= VAR_2;
 VAR_11 |= (VAR_7 << VAR_1);
 FUNC_3(VAR_5, VAR_6, VAR_3, VAR_11);

 VAR_12 = FUNC_4(VAR_5->regmap[2],
   FUNC_0(VAR_6, VAR_3),
   VAR_10, !(VAR_10 & VAR_2), 10, 1000);

 if (VAR_12) {
  FUNC_1(VAR_5->dev, "Failed to get MIB\n");
  return;
 }


 FUNC_2(VAR_5, VAR_6, VAR_4, &VAR_11);
 *VAR_8 += VAR_11;
}
