
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssb_bus {int powered_up; int chipco; } ;
typedef enum ssb_clkmode { ____Placeholder_ssb_clkmode } ssb_clkmode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct ssb_bus*,int,int) ;

int FUNC_3(struct ssb_bus *VAR_4, bool VAR_5)
{
 int VAR_6;
 enum ssb_clkmode VAR_7;

 VAR_6 = FUNC_2(VAR_4, VAR_3 | VAR_2, 1);
 if (VAR_6)
  goto error;

 VAR_4->powered_up = 1;

 VAR_7 = VAR_5 ? VAR_0 : VAR_1;
 FUNC_1(&VAR_4->chipco, VAR_7);

 return 0;
error:
 FUNC_0("Bus powerup failed\n");
 return VAR_6;
}
