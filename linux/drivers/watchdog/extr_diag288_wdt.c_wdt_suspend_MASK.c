
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(void)
{
 if (FUNC_2(VAR_0, &VAR_3)) {
  FUNC_1("Linux cannot be suspended while the watchdog is in use\n");
  return FUNC_0(-VAR_1);
 }
 return VAR_2;
}
