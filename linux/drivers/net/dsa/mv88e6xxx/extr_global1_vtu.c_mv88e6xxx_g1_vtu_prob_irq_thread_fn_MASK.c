
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mv88e6xxx_vtu_entry {int vid; } ;
struct mv88e6xxx_chip {int dev; TYPE_1__* ports; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int vtu_miss_violation; int vtu_member_violation; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,int ,int) ;
 int FUNC_3 (struct mv88e6xxx_chip*,int ,int*) ;
 int FUNC_4 (struct mv88e6xxx_chip*,int ) ;
 int FUNC_5 (struct mv88e6xxx_chip*,struct mv88e6xxx_vtu_entry*) ;
 int FUNC_6 (struct mv88e6xxx_chip*) ;
 int FUNC_7 (struct mv88e6xxx_chip*) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_6, void *VAR_7)
{
 struct mv88e6xxx_chip *VAR_8 = VAR_7;
 struct mv88e6xxx_vtu_entry VAR_9;
 int VAR_10;
 int VAR_11;
 u16 VAR_12;

 FUNC_6(VAR_8);

 VAR_11 = FUNC_4(VAR_8, VAR_2);
 if (VAR_11)
  goto out;

 VAR_11 = FUNC_3(VAR_8, VAR_1, &VAR_12);
 if (VAR_11)
  goto out;

 VAR_11 = FUNC_5(VAR_8, &VAR_9);
 if (VAR_11)
  goto out;

 VAR_10 = VAR_12 & VAR_5;

 if (VAR_12 & VAR_3) {
  FUNC_2(VAR_8->dev, "VTU member violation for vid %d, source port %d\n",
        VAR_9.vid, VAR_10);
  VAR_8->ports[VAR_10].vtu_member_violation++;
 }

 if (VAR_12 & VAR_4) {
  FUNC_0(VAR_8->dev, "VTU miss violation for vid %d, source port %d\n",
        VAR_9.vid, VAR_10);
  VAR_8->ports[VAR_10].vtu_miss_violation++;
 }

 FUNC_7(VAR_8);

 return VAR_0;

out:
 FUNC_7(VAR_8);

 FUNC_1(VAR_8->dev, "VTU problem: error %d while handling interrupt\n",
  VAR_11);

 return VAR_0;
}
