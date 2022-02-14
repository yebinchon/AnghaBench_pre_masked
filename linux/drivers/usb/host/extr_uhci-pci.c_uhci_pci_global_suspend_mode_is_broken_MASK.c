
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uhci_hcd {int rh_numports; scalar_t__ io_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char const*,char const*) ;

__attribute__((used)) static int FUNC_3(struct uhci_hcd *VAR_3)
{
 int VAR_4;
 const char *VAR_5;
 static const char VAR_6[] = "A7V8X";





 VAR_5 = FUNC_0(VAR_0);
 if (VAR_5 && !FUNC_2(VAR_5, VAR_6)) {
  for (VAR_4 = 0; VAR_4 < VAR_3->rh_numports; ++VAR_4) {
   if (FUNC_1(VAR_3->io_addr + VAR_1 + VAR_4 * 2) &
     VAR_2)
    return 1;
  }
 }

 return 0;
}
