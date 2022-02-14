
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wbsd_host {int isr; scalar_t__ base; } ;
struct mmc_command {int opcode; int arg; int flags; int error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (struct wbsd_host*,struct mmc_command*) ;
 int FUNC_2 (struct wbsd_host*,struct mmc_command*) ;
 int FUNC_3 (struct wbsd_host*,int ) ;

__attribute__((used)) static void FUNC_4(struct wbsd_host *VAR_12, struct mmc_command *VAR_13)
{
 int VAR_14;
 u8 VAR_15, VAR_16;






 VAR_12->isr = 0;




 FUNC_0(VAR_13->opcode, VAR_12->base + VAR_7);
 for (VAR_14 = 3; VAR_14 >= 0; VAR_14--)
  FUNC_0((VAR_13->arg >> (VAR_14 * 8)) & 0xff, VAR_12->base + VAR_7);

 VAR_13->error = 0;




 do {
  VAR_15 = FUNC_3(VAR_12, VAR_8);
 } while (VAR_15 & VAR_6);




 if (VAR_13->flags & VAR_5) {



  VAR_16 = VAR_12->isr;


  if (VAR_16 & VAR_9)
   VAR_13->error = -VAR_1;

  else if (VAR_16 & VAR_11)
   VAR_13->error = -VAR_2;

  else if ((VAR_13->flags & VAR_4) && (VAR_16 & VAR_10))
   VAR_13->error = -VAR_0;

  else {
   if (VAR_13->flags & VAR_3)
    FUNC_1(VAR_12, VAR_13);
   else
    FUNC_2(VAR_12, VAR_13);
  }
 }
}
