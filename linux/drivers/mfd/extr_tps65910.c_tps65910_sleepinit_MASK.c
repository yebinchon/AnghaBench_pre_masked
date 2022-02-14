
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ i2chs_keepon; scalar_t__ clkout32k_keepon; scalar_t__ therm_keepon; } ;
struct tps65910_board {TYPE_1__ slp_keepon; int en_dev_slp; } ;
struct tps65910 {struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct tps65910*,int ,int ) ;
 int FUNC_2 (struct tps65910*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct tps65910 *VAR_6,
  struct tps65910_board *VAR_7)
{
 struct device *VAR_8;
 int VAR_9;

 if (!VAR_7->en_dev_slp)
  return 0;

 VAR_8 = VAR_6->dev;


 VAR_9 = FUNC_2(VAR_6, VAR_4,
    VAR_0);
 if (VAR_9 < 0) {
  FUNC_0(VAR_8, "set dev_slp failed: %d\n", VAR_9);
  goto err_sleep_init;
 }

 if (VAR_7->slp_keepon.therm_keepon) {
  VAR_9 = FUNC_2(VAR_6,
    VAR_5,
    VAR_3);
  if (VAR_9 < 0) {
   FUNC_0(VAR_8, "set therm_keepon failed: %d\n", VAR_9);
   goto disable_dev_slp;
  }
 }

 if (VAR_7->slp_keepon.clkout32k_keepon) {
  VAR_9 = FUNC_2(VAR_6,
    VAR_5,
    VAR_1);
  if (VAR_9 < 0) {
   FUNC_0(VAR_8, "set clkout32k_keepon failed: %d\n", VAR_9);
   goto disable_dev_slp;
  }
 }

 if (VAR_7->slp_keepon.i2chs_keepon) {
  VAR_9 = FUNC_2(VAR_6,
    VAR_5,
    VAR_2);
  if (VAR_9 < 0) {
   FUNC_0(VAR_8, "set i2chs_keepon failed: %d\n", VAR_9);
   goto disable_dev_slp;
  }
 }

 return 0;

disable_dev_slp:
 FUNC_1(VAR_6, VAR_4,
    VAR_0);

err_sleep_init:
 return VAR_9;
}
