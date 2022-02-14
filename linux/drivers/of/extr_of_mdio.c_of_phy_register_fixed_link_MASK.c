
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct fixed_phy_status {int link; void* asym_pause; void* pause; void* speed; void* duplex; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (void**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct fixed_phy_status*,struct device_node*) ;
 struct device_node* FUNC_3 (struct device_node*,char*) ;
 int FUNC_4 (struct device_node*) ;
 void* FUNC_5 (struct device_node*,char*) ;
 scalar_t__ FUNC_6 (struct device_node*,char*,char const**) ;
 scalar_t__ FUNC_7 (struct device_node*,char*,void**) ;
 scalar_t__ FUNC_8 (struct device_node*,char*,void**,int ) ;
 scalar_t__ FUNC_9 (char const*,char*) ;

int FUNC_10(struct device_node *VAR_3)
{
 struct fixed_phy_status VAR_4 = {};
 struct device_node *VAR_5;
 u32 VAR_6[5];
 const char *VAR_7;

 if (FUNC_6(VAR_3, "managed", &VAR_7) == 0 &&
     FUNC_9(VAR_7, "in-band-status") == 0) {

  goto register_phy;
 }


 VAR_5 = FUNC_3(VAR_3, "fixed-link");
 if (VAR_5) {
  VAR_4.link = 1;
  VAR_4.duplex = FUNC_5(VAR_5,
            "full-duplex");
  if (FUNC_7(VAR_5, "speed",
      &VAR_4.speed)) {
   FUNC_4(VAR_5);
   return -VAR_0;
  }
  VAR_4.pause = FUNC_5(VAR_5, "pause");
  VAR_4.asym_pause = FUNC_5(VAR_5,
         "asym-pause");
  FUNC_4(VAR_5);

  goto register_phy;
 }


 if (FUNC_8(VAR_3, "fixed-link", VAR_6,
           FUNC_0(VAR_6)) == 0) {
  VAR_4.link = 1;
  VAR_4.duplex = VAR_6[1];
  VAR_4.speed = VAR_6[2];
  VAR_4.pause = VAR_6[3];
  VAR_4.asym_pause = VAR_6[4];
  goto register_phy;
 }

 return -VAR_1;

register_phy:
 return FUNC_1(FUNC_2(VAR_2, &VAR_4, VAR_3));
}
