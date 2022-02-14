
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271 {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(struct wl1271 *VAR_0, unsigned long VAR_1,
       void *VAR_2)
{
 int VAR_3;
 int (*VAR_4) (struct wl1271 *VAR_5);

 if (!VAR_2) {
  FUNC_4("debugfs chip_op_handler with no callback");
  return;
 }

 VAR_3 = FUNC_0(VAR_0->dev);
 if (VAR_3 < 0) {
  FUNC_3(VAR_0->dev);

  return;
 }

 VAR_4 = VAR_2;
 VAR_4(VAR_0);

 FUNC_1(VAR_0->dev);
 FUNC_2(VAR_0->dev);
}
