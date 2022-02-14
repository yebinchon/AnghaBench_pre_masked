
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_2__ {scalar_t__ duplex; int link; int an_complete; int advertising; void* speed; int pause; } ;
struct phylink {TYPE_1__ link_config; int supported; struct gpio_desc* link_gpio; } ;
struct phy_setting {int bit; } ;
struct gpio_desc {int dummy; } ;
struct fwnode_handle {int dummy; } ;


 int FUNC_0 (void**) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct gpio_desc* FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (struct gpio_desc*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 struct fwnode_handle* FUNC_5 (struct fwnode_handle*,char*) ;
 struct gpio_desc* FUNC_6 (struct fwnode_handle*,char*,int ,int ,char*) ;
 int FUNC_7 (struct fwnode_handle*) ;
 scalar_t__ FUNC_8 (struct fwnode_handle*,char*) ;
 int FUNC_9 (struct fwnode_handle*,char*,void**) ;
 int FUNC_10 (struct fwnode_handle*,char*,void**,int) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 struct phy_setting* FUNC_14 (void*,scalar_t__,int ,int) ;
 int FUNC_15 (struct phylink*,char*) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (struct phylink*,int ,TYPE_1__*) ;
 int FUNC_18 (struct phylink*,char*,char*,...) ;

__attribute__((used)) static int FUNC_19(struct phylink *VAR_12,
       struct fwnode_handle *VAR_13)
{
 struct fwnode_handle *VAR_14;
 const struct phy_setting *VAR_15;
 struct gpio_desc *VAR_16;
 u32 VAR_17;
 int VAR_18;

 VAR_14 = FUNC_5(VAR_13, "fixed-link");
 if (VAR_14) {
  VAR_18 = FUNC_9(VAR_14, "speed", &VAR_17);

  VAR_12->link_config.speed = VAR_17;
  VAR_12->link_config.duplex = VAR_2;

  if (FUNC_8(VAR_14, "full-duplex"))
   VAR_12->link_config.duplex = VAR_1;



  if (FUNC_8(VAR_14, "pause"))
   VAR_12->link_config.pause |= VAR_8;
  if (FUNC_8(VAR_14, "asym-pause"))
   VAR_12->link_config.pause |= VAR_7;

  if (VAR_18 == 0) {
   VAR_16 = FUNC_6(VAR_14, "link-gpios",
            0, VAR_5, "?");

   if (!FUNC_2(VAR_16))
    VAR_12->link_gpio = VAR_16;
   else if (VAR_16 == FUNC_1(-VAR_4))
    VAR_18 = -VAR_4;
  }
  FUNC_7(VAR_14);

  if (VAR_18)
   return VAR_18;
 } else {
  u32 VAR_19[5];

  VAR_18 = FUNC_10(VAR_13, "fixed-link",
           ((void*)0), 0);
  if (VAR_18 != FUNC_0(VAR_19)) {
   FUNC_15(VAR_12, "broken fixed-link?\n");
   return -VAR_3;
  }

  VAR_18 = FUNC_10(VAR_13, "fixed-link",
           VAR_19, FUNC_0(VAR_19));
  if (!VAR_18) {
   VAR_12->link_config.duplex = VAR_19[1] ?
      VAR_1 : VAR_2;
   VAR_12->link_config.speed = VAR_19[2];
   if (VAR_19[3])
    VAR_12->link_config.pause |= VAR_8;
   if (VAR_19[4])
    VAR_12->link_config.pause |= VAR_7;
  }
 }

 if (VAR_12->link_config.speed > VAR_10 &&
     VAR_12->link_config.duplex != VAR_1)
  FUNC_18(VAR_12, "fixed link specifies half duplex for %dMbps link?\n",
        VAR_12->link_config.speed);

 FUNC_4(VAR_12->supported, VAR_11);
 FUNC_12(VAR_12->link_config.advertising, VAR_12->supported);
 FUNC_17(VAR_12, VAR_12->supported, &VAR_12->link_config);

 VAR_15 = FUNC_14(VAR_12->link_config.speed, VAR_12->link_config.duplex,
          VAR_12->supported, 1);
 FUNC_13(VAR_12->supported);
 FUNC_16(VAR_12->supported, VAR_6);
 FUNC_16(VAR_12->supported, VAR_9);
 FUNC_16(VAR_12->supported, VAR_0);
 if (VAR_15) {
  FUNC_3(VAR_15->bit, VAR_12->supported);
 } else {
  FUNC_18(VAR_12, "fixed link %s duplex %dMbps not recognised\n",
        VAR_12->link_config.duplex == VAR_1 ? "full" : "half",
        VAR_12->link_config.speed);
 }

 FUNC_11(VAR_12->link_config.advertising, VAR_12->link_config.advertising,
       VAR_12->supported);

 VAR_12->link_config.link = 1;
 VAR_12->link_config.an_complete = 1;

 return 0;
}
