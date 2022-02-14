
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uea_softc {int (* stat ) (struct uea_softc*) ;scalar_t__ reset; } ;


 int VAR_0 ;
 int FUNC_0 (struct uea_softc*) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (struct uea_softc*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct uea_softc*) ;
 int FUNC_9 (struct uea_softc*,int ,int ) ;

__attribute__((used)) static int FUNC_10(void *VAR_1)
{
 struct uea_softc *VAR_2 = VAR_1;
 int VAR_3 = -VAR_0;

 FUNC_3();
 FUNC_6(FUNC_0(VAR_2));
 while (!FUNC_1()) {
  if (VAR_3 < 0 || VAR_2->reset)
   VAR_3 = FUNC_8(VAR_2);
  if (!VAR_3)
   VAR_3 = VAR_2->stat(VAR_2);
  if (VAR_3 != -VAR_0)
   FUNC_9(VAR_2, 0, FUNC_2(1000));
  FUNC_5();
 }
 FUNC_7(FUNC_0(VAR_2));
 return VAR_3;
}
