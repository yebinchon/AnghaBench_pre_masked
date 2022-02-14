
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int) ;
 int VAR_1 ;
 int FUNC_2 (struct platform_device*,int ,int,int ,int ) ;
 int FUNC_3 (struct platform_device*,int ,int ,int) ;

__attribute__((used)) static inline int FUNC_4(struct platform_device *VAR_2, bool VAR_3)
{
 FUNC_0("dsi_if_enable(%d)\n", VAR_3);

 VAR_3 = VAR_3 ? 1 : 0;
 FUNC_2(VAR_2, VAR_0, VAR_3, 0, 0);

 if (FUNC_3(VAR_2, VAR_0, 0, VAR_3) != VAR_3) {
   FUNC_1("Failed to set dsi_if_enable to %d\n", VAR_3);
   return -VAR_1;
 }

 return 0;
}
