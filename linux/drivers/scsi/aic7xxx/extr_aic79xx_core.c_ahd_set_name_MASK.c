
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahd_softc {char* name; } ;


 int FUNC_0 (char*) ;

void
FUNC_1(struct ahd_softc *VAR_0, char *VAR_1)
{
 if (VAR_0->name != ((void*)0))
  FUNC_0(VAR_0->name);
 VAR_0->name = VAR_1;
}
