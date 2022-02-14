
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,long) ;
 int FUNC_2 (int ,char*,int ,int,int,int ,int ,int) ;
 long FUNC_3 (int ,int,int,int *,int ,int ,void*,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_4(void)
{
 long VAR_6;

 do {
  VAR_6 = FUNC_3(VAR_5, 4, 1, ((void*)0),
       VAR_2, 0,
       (void *)FUNC_0(VAR_4),
       VAR_3);
  if (VAR_6 < 0)
   FUNC_1("event-scan failed: %li\n", VAR_6);
  if (VAR_6 == 0)
   FUNC_2(VAR_1, "dumping event, data: ",
    VAR_0, 16, 1,
    VAR_4, VAR_3, 0);
 } while (VAR_6 == 0);
}
