
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct tvp5150 {int lock; int oe; TYPE_1__ sd; struct regmap* regmap; } ;
struct regmap {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int,int ,char*,char*) ;
 int FUNC_1 (struct regmap*,int ,unsigned int*) ;
 int FUNC_2 (struct regmap*,int ,unsigned int,int ) ;
 int FUNC_3 (struct regmap*,int ,unsigned int) ;
 int VAR_12 ;
 int FUNC_4 (TYPE_1__*,int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_13, void *VAR_14)
{
 struct tvp5150 *VAR_15 = VAR_14;
 struct regmap *VAR_16 = VAR_15->regmap;
 unsigned int VAR_17, VAR_18 = 0, VAR_19 = 0;

 VAR_17 = VAR_10 | VAR_9 |
        VAR_8;

 FUNC_1(VAR_16, VAR_5, &VAR_19);
 if (VAR_19) {
  FUNC_3(VAR_16, VAR_5, VAR_19);

  if (VAR_19 & VAR_2) {
   VAR_15->lock = !!(VAR_19 & VAR_3);
   FUNC_0(VAR_15->sd.dev, 1, VAR_11,
        "sync lo%s signal\n",
        VAR_15->lock ? "ck" : "ss");
   FUNC_4(&VAR_15->sd, &VAR_12);
   FUNC_2(VAR_16, VAR_7, VAR_17,
        VAR_15->lock ? VAR_15->oe : 0);
  }

  return VAR_0;
 }

 FUNC_1(VAR_16, VAR_1, &VAR_18);
 if (VAR_18) {
  VAR_19 = 0;
  FUNC_1(VAR_16, VAR_6, &VAR_19);
  if (VAR_19)
   FUNC_3(VAR_16, VAR_4, VAR_19);
 }

 return VAR_0;
}
