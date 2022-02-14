
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct esp_cmd_entry {int flags; } ;
struct esp {int sreg; struct esp_cmd_entry* active_cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (struct esp*,int ) ;
 int FUNC_4 (struct esp*,int,int ) ;

__attribute__((used)) static void FUNC_5(struct esp *VAR_12)
{
 u8 VAR_13;
 int VAR_14 = 1000;


 if ((VAR_12->sreg & VAR_11) == VAR_8 ||
     (VAR_12->sreg & VAR_11) == VAR_1)

  return;

 while (--VAR_14 > 0) {
  VAR_13 = FUNC_3(VAR_12, VAR_9) & VAR_10;
  if (VAR_13 <= 1)
   break;
  FUNC_1();
 }
 VAR_14 = 1000;
 FUNC_4(VAR_12, VAR_4 | VAR_3, VAR_2);
 while (FUNC_3(VAR_12, VAR_6) & VAR_7) {
  if (--VAR_14 == 0)
   break;
  FUNC_1();
 }
 FUNC_4(VAR_12, VAR_4 | VAR_5, VAR_2);
 FUNC_2("DMA blast done (%d tries, %d bytes left)\n", VAR_14, VAR_13);

 if (FUNC_0(VAR_13 == 1)) {
  struct esp_cmd_entry *VAR_15 = VAR_12->active_cmd;

  VAR_15->flags |= VAR_0;
 }
}
