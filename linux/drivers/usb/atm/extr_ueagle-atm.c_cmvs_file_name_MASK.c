
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uea_softc {size_t modem_index; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct uea_softc*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct uea_softc*) ;
 int VAR_4 ;
 char** VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char* const,int ) ;
 int FUNC_5 (char* const,char*,int ) ;

__attribute__((used)) static void FUNC_6(struct uea_softc *VAR_6, char *const VAR_7, int VAR_8)
{
 char VAR_9[] = "CMVxy.bin";
 char *VAR_10;

 FUNC_2(VAR_3);

 if (VAR_5[VAR_6->modem_index] == ((void*)0)) {
  if (FUNC_1(VAR_6) == VAR_0)
   VAR_9[3] = '9';
  else if (FUNC_1(VAR_6) == VAR_1)
   VAR_9[3] = '4';
  else
   VAR_9[3] = 'e';

  VAR_9[4] = FUNC_0(VAR_6) ? 'i' : 'p';
  VAR_10 = VAR_9;
 } else
  VAR_10 = VAR_5[VAR_6->modem_index];

 FUNC_4(VAR_7, VAR_2);
 FUNC_5(VAR_7, VAR_10, VAR_4);
 if (VAR_8 == 2)
  FUNC_5(VAR_7, ".v2", VAR_4);
 FUNC_3(VAR_3);
}
