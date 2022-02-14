
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tps65010 {int nmask2; int regstatus; int nmask1; int chgstatus; int chgconf; unsigned int charging; scalar_t__ model; int work; int flags; int por; int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int ,...) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (char*,int) ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_7(struct tps65010 *VAR_11)
{
 u8 VAR_12 = 0, VAR_13, VAR_14;




 VAR_14 = 0;


 if (VAR_11->nmask2) {
  VAR_12 = FUNC_1(VAR_11->client, VAR_8);
  VAR_13 = VAR_12 ^ VAR_11->regstatus;
  VAR_11->regstatus = VAR_12;
  VAR_13 &= VAR_11->nmask2;
 } else
  VAR_13 = 0;
 if (VAR_13) {
  VAR_11->regstatus = VAR_12;



  if (VAR_12 & VAR_9) {
   FUNC_2("%s: power off button\n", VAR_0);
   VAR_14 = 1;
  }
 }


 if (VAR_11->nmask1) {
  VAR_12 = FUNC_1(VAR_11->client, VAR_5);
  VAR_13 = VAR_12 ^ VAR_11->chgstatus;
  VAR_11->chgstatus = VAR_12;
  VAR_13 &= VAR_11->nmask1;
 } else
  VAR_13 = 0;
 if (VAR_13) {
  unsigned VAR_15 = 0;

  FUNC_6("chg/irq", VAR_12);
  if (VAR_12 & (VAR_7|VAR_6))
   FUNC_5(VAR_11->por, "conf", VAR_11->chgconf);





  if (!(VAR_11->chgstatus & ~(VAR_7|VAR_6))
    && (VAR_11->chgstatus & (VAR_7|VAR_6))
    && (VAR_11->chgconf & VAR_4)
    ) {
   if (VAR_11->chgstatus & VAR_7) {

    if (VAR_13 & VAR_7)
     FUNC_4(VAR_1, &VAR_11->flags);
    VAR_15 = 1;
   } else if (VAR_11->chgstatus & VAR_6)
    VAR_15 = 1;
  }
  if (VAR_15 != VAR_11->charging) {
   VAR_11->charging = VAR_15;
   FUNC_2("%s: battery %scharging\n",
    VAR_0, VAR_15 ? "" :
    ((VAR_11->chgstatus & (VAR_7|VAR_6))
     ? "NOT " : "dis"));
  }
 }




 if ((VAR_11->model != VAR_3 || !VAR_11->charging)
   && (VAR_11->chgstatus & (VAR_7|VAR_6)))
  VAR_14 = 1;
 if (VAR_14)
  FUNC_3(VAR_10, &VAR_11->work,
       VAR_2);


}
