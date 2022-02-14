
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hdmi_wp_data {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hdmi_wp_data*) ;
 int FUNC_1 (struct hdmi_wp_data*,int) ;
 int FUNC_2 (struct hdmi_wp_data*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_6, void *VAR_7)
{
 struct hdmi_wp_data *VAR_8 = VAR_7;
 u32 VAR_9;

 VAR_9 = FUNC_0(VAR_8);
 FUNC_1(VAR_8, VAR_9);

 if ((VAR_9 & VAR_0) &&
   VAR_9 & VAR_1) {






  FUNC_2(VAR_8, VAR_3);

  FUNC_1(VAR_8, VAR_0 |
    VAR_1);

  FUNC_2(VAR_8, VAR_2);
 } else if (VAR_9 & VAR_0) {
  FUNC_2(VAR_8, VAR_4);
 } else if (VAR_9 & VAR_1) {
  FUNC_2(VAR_8, VAR_2);
 }

 return VAR_5;
}
